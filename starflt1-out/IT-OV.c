// ====== OVERLAY 'IT-OV' ======
// store offset = 0xedd0
// overlay size   = 0x0790

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xaecd C-string:'UNK_0x3f3b'
// 1704:      UNK_0xee0a  codep:0x224c parp:0xee0a size:0x000e C-string:'UNK_0xee0a'
// 1705:      UNK_0xee1a  codep:0x224c parp:0xee1a size:0x0010 C-string:'UNK_0xee1a'
// 1706:      UNK_0xee2c  codep:0x224c parp:0xee2c size:0x0026 C-string:'UNK_0xee2c'
// 1707:      UNK_0xee54  codep:0x224c parp:0xee54 size:0x0016 C-string:'UNK_0xee54'
// 1708:      UNK_0xee6c  codep:0x1d29 parp:0xee6c size:0x0002 C-string:'UNK_0xee6c'
// 1709:      UNK_0xee70  codep:0x224c parp:0xee70 size:0x00b5 C-string:'UNK_0xee70'
// 1710:      UNK_0xef27  codep:0x224c parp:0xef27 size:0x00e0 C-string:'UNK_0xef27'
// 1711:       DATE$>ADR  codep:0x224c parp:0xf015 size:0x00df C-string:'DATE_do__gt_ADR'
// 1712:     IDENT-ITEM$  codep:0x4a4f parp:0xf104 size:0x0020 C-string:'IDENT_dash_ITEM_do_'
// 1713:        ITEM>PAD  codep:0x224c parp:0xf131 size:0x0024 C-string:'ITEM_gt_PAD'
// 1714:      UNK_0xf157  codep:0x224c parp:0xf157 size:0x005c C-string:'UNK_0xf157'
// 1715:        BOX>LIST  codep:0x224c parp:0xf1c0 size:0x0044 C-string:'BOX_gt_LIST'
// 1716:       GET-BOXES  codep:0x224c parp:0xf212 size:0x0014 C-string:'GET_dash_BOXES'
// 1717: MAKE-SCROLL-BOX  codep:0x224c parp:0xf23a size:0x0030 C-string:'MAKE_dash_SCROLL_dash_BOX'
// 1718: DELETE-SCROLL-BOX  codep:0x224c parp:0xf280 size:0x001a C-string:'DELETE_dash_SCROLL_dash_BOX'
// 1719:  CLASS>BOX-SPEC  codep:0x4a4f parp:0xf2ad size:0x0020 C-string:'CLASS_gt_BOX_dash_SPEC'
// 1720:      UNK_0xf2cf  codep:0x224c parp:0xf2cf size:0x000e C-string:'UNK_0xf2cf'
// 1721:        BOX>TOCS  codep:0x224c parp:0xf2ea size:0x000e C-string:'BOX_gt_TOCS'
// 1722:            >BOX  codep:0x224c parp:0xf301 size:0x0080 C-string:'_gt_BOX'
// 1723:        ?ELEMENT  codep:0x224c parp:0xf38e size:0x000a C-string:'_ask_ELEMENT'
// 1724:          (BOX>)  codep:0x224c parp:0xf3a3 size:0x0038 C-string:'_ro_BOX_gt__rc_'
// 1725:            BOX>  codep:0x224c parp:0xf3e4 size:0x017c C-string:'BOX_gt_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xee6c[2] = {0x3a, 0x20}; // UNK_0xee6c



// 0xede2: db 0x65 0x00 0xea 0x73 0x1c 0x1d 0x01 0x1e 0x2c 0x65 0x14 0x22 0x0a 0x00 0x14 0x22 0x0f 0x00 0x14 0x22 0x0e 0x00 0x14 0x22 0x11 0x00 0x14 0x22 0x0b 0x00 0x14 0x22 0x26 0x00 0x14 0x22 0x10 0x00 'e  s    ,e "   "   "   "   "   "&  "  '

// ================================================
// 0xee08: WORD 'UNK_0xee0a' codep=0x224c parp=0xee0a
// ================================================

void UNK_0xee0a() // UNK_0xee0a
{
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0026);
  Push(cc_BL); // BL
  FILL(); // FILL
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x224c parp=0xee1a
// ================================================

void UNK_0xee1a() // UNK_0xee1a
{
  SRDEPTH(); // SRDEPTH
  Push(0); // 0
  MAX(); // MAX
  Push(Pop()*2); // 2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xee2a: WORD 'UNK_0xee2c' codep=0x224c parp=0xee2c
// ================================================

void UNK_0xee2c() // UNK_0xee2c
{
  Push(pp_TIME_dash_PA); // TIME-PA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  WHITE(); // WHITE
  goto label2;

  label1:
  Push(0x0096);
  GREY1(); // GREY1

  label2:
  _ex_COLOR(); // !COLOR
  Push(cc__7); // 7
  _dash_(); // -
  Push(cc__7); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xee52: WORD 'UNK_0xee54' codep=0x224c parp=0xee54
// ================================================

void UNK_0xee54() // UNK_0xee54
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  TYPE(); // TYPE
}


// ================================================
// 0xee6a: WORD 'UNK_0xee6c' codep=0x1d29 parp=0xee6c
// ================================================
// 0xee6c: db 0x3a 0x20 ': '

// ================================================
// 0xee6e: WORD 'UNK_0xee70' codep=0x224c parp=0xee70
// ================================================

void UNK_0xee70() // UNK_0xee70
{
  _at_CRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  UNK_0xee2c(); // UNK_0xee2c
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PRINT("ATTENTION", 9); // (.")
  Push(cc__5); // 5
  SPACES(); // SPACES
  i++;
  } while(i<imax); // (LOOP) 0xffee

  GCR(); // GCR

  UNK_0x3f3b("THE MANIFEST-COMPUTER CAPACITY HAS");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("APPEAR IN THIS LIST.");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("PRESS SPACEBAR TO CONTINUE");
  UNK_0xee54(); // UNK_0xee54
  _ex_CRS(); // !CRS
}


// ================================================
// 0xef25: WORD 'UNK_0xef27' codep=0x224c parp=0xef27
// ================================================

void UNK_0xef27() // UNK_0xef27
{
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004a);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_UNK_0xee6c); // UNK_0xee6c
  ON(); // ON
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  UNK_0xee70(); // UNK_0xee70
  KEY(); // KEY
  Pop(); // DROP
  UNK_0xee70(); // UNK_0xee70
  SAVE_dash_OV(); // SAVE-OV
}

// 0xef4f: db 0x4c 0x22 0x08 0xee 0x59 0xad 0x18 0xee 0x5d 0x17 0x10 0x00 0xea 0x6d 0x90 0x16 0x4c 0x22 0x47 0xad 0x95 0x49 0xf0 0x0d 0x3e 0x13 0x89 0x12 0xfa 0x15 0x08 0x00 0xde 0x0d 0x26 0xad 0x95 0x49 0xf2 0x79 0x16 0xae 0x08 0xae 0x92 0x0c 0x18 0xee 0xf2 0x0e 0xea 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0a 0x00 0x60 0x0f 0xf2 0x0e 0x21 0xae 0x32 0x0e 0x92 0x0c 0xdb 0x23 0x5d 0x17 0x20 0x00 0x72 0x0f 0x6a 0x6d 0x5d 0x17 0x2e 0x00 0xdb 0x23 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x6a 0x6d 0x21 0xae 0xdb 0x23 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x7f 0x0e 0x92 0x0f 0xf2 0x0e 0xea 0x6d 0x13 0x5d 0xae 0x0b 0xd6 0x11 0x5d 0x17 0x64 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x21 0xae 0xdb 0x23 0x5d 0x17 0x26 0x00 0x72 0x0f 0x7f 0x0e 0xf6 0x0f 0x92 0x0f 0xf2 0x0e 0xea 0x6d 0x90 0x16 0x4c 0x22 0xae 0xad 0x18 0xee 0x5d 0x17 0x10 0x00 0xea 0x6d 0xa9 0x74 0xae 0x0b 0xc0 0xad 0xae 0x0b 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0xf2 0x0e 0x87 0xef 0x90 0x16 'L"  Y   ]    m  L"G  I  >         &  I y           m y  L"]   `   ! 2    #]   r jm] .  #]   r jm!  #]   r       m ]    ] d     2 !  #] & r         m  L"    ]    m t      ]           '

// ================================================
// 0xf007: WORD 'DATE$>ADR' codep=0x224c parp=0xf015
// ================================================

void DATE_do__gt_ADR() // DATE$>ADR
{

  UNK_0x3f3b("00-00-");
  Push(cc__3); // 3
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}

// 0xf072: db 0x4c 0x22 0x08 0xee 0x38 0xad 0xae 0x0b 0x18 0xee 0x13 0xf0 0x90 0x16 0x4c 0x22 0xdb 0x23 0x5d 0x17 0x24 0x00 0x72 0x0f 0x73 0x3b 0x5d 0x17 0x3f 0x00 0xfd 0x6d 0x90 0x16 0x4c 0x22 0xd2 0xad 0x18 0xee 0x5d 0x17 0x18 0x00 0xea 0x6d 0xe4 0xed 0x92 0x0c 0x4a 0x55 0xae 0x0b 0x3e 0x13 0x89 0x12 0xe4 0xad 0xae 0x0b 0x7f 0x0e 0x07 0x13 0xb3 0x0f 0xf6 0xad 0xae 0x0b 0x87 0xef 0xfa 0x15 0x04 0x00 0x80 0xf0 0x90 0x16 0x4c 0x22 0x8a 0xad 0x18 0xee 0x5d 0x17 0x10 0x00 0xea 0x6d 0x19 0xad 0xae 0x0b 0xa9 0x74 0xae 0x0b 0x87 0xef 0x90 0x16 0x4c 0x22 0x9c 0xad 0x18 0xee 0x5d 0x17 0x10 0x00 0xea 0x6d 0x19 0xad 0xae 0x0b 0xa9 0x74 0xae 0x0b 0x87 0xef 0x90 0x16 'L"  8         L" #] $ r s;] ?  m  L"    ]    m    JU  >                          L"    ]    m     t      L"    ]    m     t      '

// ================================================
// 0xf0f4: WORD 'IDENT-ITEM$' codep=0x4a4f parp=0xf104
// ================================================
// 0xf104: db 0x07 0x00 0x6e 0x3a 0x0b 0x00 0x51 0xef 0x1a 0x00 0xe9 0xef 0x1b 0x00 0x74 0xf0 0x1c 0x00 0x96 0xf0 0x28 0x00 0xc6 0xf0 0x44 0x00 0x61 0xef 0x2b 0x00 0xde 0xf0 '  n:  Q       t     (   D a +   '

// ================================================
// 0xf124: WORD 'ITEM>PAD' codep=0x224c parp=0xf131
// ================================================

void ITEM_gt_PAD() // ITEM>PAD
{
  UNK_0xee0a(); // UNK_0xee0a
  UNK_0xee1a(); // UNK_0xee1a
  PAD(); // PAD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL(); // FILL
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  _at_INST_dash_C(); // @INST-C
  IDENT_dash_ITEM_do_(); // IDENT-ITEM$
}


// ================================================
// 0xf155: WORD 'UNK_0xf157' codep=0x224c parp=0xf157
// ================================================

void UNK_0xf157() // UNK_0xf157
{
  UNK_0xef27(); // UNK_0xef27
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004b);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  TEXT_dash_TE(); // TEXT-TE
  Push(0x0026);
  CMOVE(); // CMOVE
  TEXT_dash_IN(); // TEXT-IN
  _1_dot_5_ex_(); // 1.5!
  TEXT_dash_CO(); // TEXT-CO
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf1b3: WORD 'BOX>LIST' codep=0x224c parp=0xf1c0
// ================================================

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI

  label2:
  _at_INST_dash_C(); // @INST-C
  Push(0x0035);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004b);
  _st_(); // <
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI_i_(); // CI'
  CI(); // CI
  ITEM_gt_PAD(); // ITEM>PAD
  PAD(); // PAD
  Push(Pop()+1); // 1+
  UNK_0xf157(); // UNK_0xf157

  label1:
  NEXT_dash_NO(); // NEXT-NO
  _2DUP(); // 2DUP
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf204: WORD 'GET-BOXES' codep=0x224c parp=0xf212
// ================================================

void GET_dash_BOXES() // GET-BOXES
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  BOX_gt_LIST(); // BOX>LIST
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf226: WORD 'MAKE-SCROLL-BOX' codep=0x224c parp=0xf23a
// ================================================

void MAKE_dash_SCROLL_dash_BOX() // MAKE-SCROLL-BOX
{
  Push(pp_UNK_0xee6c); // UNK_0xee6c
  OFF(); // OFF
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  FRAGMEN(); // FRAGMEN
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1); // 1
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_dash_); // SCROLL-
  OFF(); // OFF
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf26a: WORD 'DELETE-SCROLL-BOX' codep=0x224c parp=0xf280
// ================================================

void DELETE_dash_SCROLL_dash_BOX() // DELETE-SCROLL-BOX
{
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xf29a: WORD 'CLASS>BOX-SPEC' codep=0x4a4f parp=0xf2ad
// ================================================
// 0xf2ad: db 0x07 0x00 0x6e 0x3a 0x1a 0x00 0xee 0xed 0x1c 0x00 0xf2 0xed 0x28 0x00 0xf6 0xed 0x29 0x00 0x06 0xee 0x2b 0x00 0x02 0xee 0x1b 0x00 0xfa 0xed 0x44 0x00 0xfe 0xed '  n:        (   )   +       D   '

// ================================================
// 0xf2cd: WORD 'UNK_0xf2cf' codep=0x224c parp=0xf2cf
// ================================================

void UNK_0xf2cf() // UNK_0xf2cf
{
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf2dd: WORD 'BOX>TOCS' codep=0x224c parp=0xf2ea
// ================================================

void BOX_gt_TOCS() // BOX>TOCS
{
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf2f8: WORD '>BOX' codep=0x224c parp=0xf301
// ================================================

void _gt_BOX() // >BOX
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(h); // I
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf2cf(); // UNK_0xf2cf

  label1:
  R_gt_(); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  _at_INST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  DUP(); // DUP
  Push(0x001a);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN

  label5:
  DUP(); // DUP
  INEXT(); // INEXT
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTI(); // >INACTI
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  goto label6;

  label3:
  Pop(); // DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label6:
  goto label4;

  label2:
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label4:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf381: WORD '?ELEMENT' codep=0x224c parp=0xf38e
// ================================================

void _ask_ELEMENT() // ?ELEMENT
{
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
}


// ================================================
// 0xf398: WORD '(BOX>)' codep=0x224c parp=0xf3a3
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  _ask_ELEMENT(); // ?ELEMENT
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  Push(0x001a);
  _at_INST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  INST_dash_QT(); // INST-QT
  _ex_(); // !
  C_gt_(); // C>
  return;

  label1:
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf3db: WORD 'BOX>' codep=0x224c parp=0xf3e4
// ================================================

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label2:
  Push(1); // 1
  goto label3;

  label1:
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _ask_ELEMENT(); // ?ELEMENT
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND

  label3:
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf41a: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x20 0x34 0x2f 0x30 0x33 0x2f 0x38 0x36 0x29 0x20 0x20 0x31 0x30 0x31 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x50 0x52 0x4d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x70 0x61 0x72 0x61 0x6d 0x65 0x74 0x65 0x72 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x52 0x54 0x4e 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x72 0x65 0x74 0x75 0x72 0x6e 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x74 0x6f 0x20 0x52 0x54 0x4e 0x54 0x45 0x4d 0x50 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3a 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3d 0x20 0x5c 0x20 0x63 0x6d 0x70 0x20 0x63 0x68 0x65 0x63 0x6b 0x20 0x73 0x75 0x6d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x49 0x46 0x20 0x20 0x20 0x2e 0x4c 0x4f 0x41 0x44 0x45 0x44 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'IT-VOC__________________________---------------------  4/03/86)  101                     DISK>PRM           \ load parameter stack                       DISK>RTN           \ load return stack to RTNTEMP               CKSUM @ :CKSUM @ = \ cmp check sum                              IF   .LOADED                                  '
  