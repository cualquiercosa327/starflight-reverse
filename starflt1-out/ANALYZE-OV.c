// ====== OVERLAY 'ANALYZE-OV' ======
// store offset = 0xeb60
// overlay size   = 0x0a00

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:       (.VESSEL)  codep:0x4a4f parp:0xeca4 size:0x0051 C-string:'_ro__dot_VESSEL_rc_'
// 1704:       (.OBJECT)  codep:0x4a4f parp:0xed03 size:0x0014 C-string:'_ro__dot_OBJECT_rc_'
// 1705:      UNK_0xed19  codep:0x224c parp:0xed19 size:0x0124 C-string:'UNK_0xed19'
// 1706:         (.TYPE)  codep:0x4a4f parp:0xee49 size:0x01f6 C-string:'_ro__dot_TYPE_rc_'
// 1707:          .TDESC  codep:0x4a4f parp:0xf04a size:0x0097 C-string:'_dot_TDESC'
// 1708:         (.SURF)  codep:0x4a4f parp:0xf0ed size:0x00e6 C-string:'_ro__dot_SURF_rc_'
// 1709:         (.ATMO)  codep:0x4a4f parp:0xf1df size:0x0078 C-string:'_ro__dot_ATMO_rc_'
// 1710:        (.WEATH)  codep:0x4a4f parp:0xf264 size:0x019d C-string:'_ro__dot_WEATH_rc_'
// 1711:      (.V/P-OBJ)  codep:0x4a4f parp:0xf410 size:0x0038 C-string:'_ro__dot_V_slash_P_dash_OBJ_rc_'
// 1712:     (.ANALYSIS)  codep:0x4a4f parp:0xf458 size:0x0010 C-string:'_ro__dot_ANALYSIS_rc_'
// 1713:     (/ANALYSIS)  codep:0x224c parp:0xf478 size:0x0000 C-string:'_ro__slash_ANALYSIS_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xeb72: db 0x9b 0x00 0x4d 0x74 0x14 0x27 0x02 0x4d 0x74 0x11 0x14 0x03 0x4d 0x74 0x10 0x1a 0x02 0xea 0x73 0x1a 0x00 0x10 0x17 0x0a 0x65 0xea 0x73 0x19 0x00 0x01 0x49 0x91 0x64 0x4d 0x74 0x19 0x12 0x07 0xea 0x73 0x19 0x04 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x06 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x07 0x02 0x49 0x91 0x64 0xea 0x73 0x19 0x0e 0x02 0x49 0x91 0x64 0xea 0x73 0x19 0x12 0x01 0x49 0x91 0x64 0x4d 0x74 0x17 0x11 0x01 0xea 0x73 0x20 0x01 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x02 0x02 0x16 0x8f 0x65 0xea 0x73 0x20 0x04 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x11 0x02 0x16 0x8f 0x65 0xea 0x73 0x20 0x13 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x0f 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x10 0x01 0x16 0x8f 0x65 0x4d 0x74 0x17 0x0b 0x02 0x4c 0x22 0x72 0x5e 0xae 0x0b 0xfd 0xeb 0xae 0x0b 0x46 0x12 0x07 0x13 0x7a 0x56 0xae 0x0b 0xc8 0x0d 0xfa 0x15 0x0a 0x00 0xfd 0xeb 0xae 0x0b 0x2d 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x02 0xec 0xfa 0x15 0x34 0x00 0x12 0x7a 0x1e 0x75 0x30 0x75 0x5d 0x17 0x0b 0x00 0x7b 0x3b 0x39 0x40 0xfa 0x15 0x18 0x00 0x12 0x7a 0x5d 0x17 0x20 0x00 0x20 0x0f 0x12 0x7e 0xfa 0x15 0x08 0x00 0x20 0x0f 0xd5 0xeb 0x6a 0x6d 0xc9 0x79 0x84 0x7a 0x60 0x7a 0xfa 0x15 0xd4 0xff 0xc9 0x79 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x55 0x4b 0x4e 0x4f 0x57 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x56 0x45 0x53 0x53 0x45 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4c 0x49 0x46 0x45 0x46 0x4f 0x52 0x4d 0x90 0x16 '  Mt ' Mt   Mt    s     e s   I dMt    s   I d s   I d s   I d s   I d s   I dMt    s     e s     e s     e s     e s     e s     e s     eMt   L"r^      F   zV            -     L"    4  z u0u]   {;9@     z]      ~        jm y z`z     y  L"   UKNOWN  L"   VESSEL  L"   DEBRIS  L"   LIFEFORM  '

// ================================================
// 0xec96: WORD '(.VESSEL)' codep=0x4a4f parp=0xeca4
// ================================================
// 0xeca4: db 0x03 0x00 0x6f 0xec 0x16 0x00 0x89 0xec 0x18 0x00 0x7c 0xec 0x14 0x00 0x62 0xec 0x4c 0x22 0x30 0x75 0xa2 0xec 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x50 0x4c 0x41 0x4e 0x45 0x54 0x90 0x16 0x4c 0x22 0x6f 0x4f 0x17 0x85 0xdc 0x1b 0x12 0x53 0x54 0x45 0x4c 0x4c 0x41 0x52 0x20 0x50 0x41 0x52 0x41 0x4d 0x45 0x54 0x45 0x52 0x53 0x28 0xa5 0x90 0x16 '  o       |   b L"0u    L"   DEBRIS  L"   PLANET  L"oO     STELLAR PARAMETERS(   '

// ================================================
// 0xecf5: WORD '(.OBJECT)' codep=0x4a4f parp=0xed03
// ================================================
// 0xed03: db 0x04 0x00 0x62 0xec 0x19 0x00 0xb6 0xec 0x18 0x00 0xbe 0xec 0x20 0x00 0xcb 0xec 0x17 0x00 0xd8 0xec '  b                 '

// ================================================
// 0xed17: WORD 'UNK_0xed19' codep=0x224c parp=0xed19
// ================================================

void UNK_0xed19() // UNK_0xed19
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  if (Pop() == 0) goto label1;
  PRINT("ANALYSIS OF LAST SENSOR READING:", 32); // (.")
  CTCR(); // CTCR
  PRINT(" OBJECT: ", 9); // (.")

  label1:
  CTINIT(); // CTINIT
  _at_INST_dash_CLASS(); // @INST-CLASS
  Case((.OBJECT));
}

// 0xed5a: db 0x4c 0x22 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x7f 0x0e 0x60 0x0f 0x41 0x0e 0x20 0x0f 0xe1 0x27 0x9f 0x12 0x90 0x16 0x4c 0x22 0xd3 0xa4 0x94 0x29 0xa8 0xeb 0xae 0x0b 0xc2 0x51 0xf2 0x79 0x74 0xeb 0xae 0x0b 0xc9 0x79 0xf2 0x0e 0x20 0x0f 0x73 0x3b 0xae 0x3f 0xeb 0x11 0x41 0x0e 0x20 0x0f 0xe1 0x27 0x89 0x12 0xfa 0x15 0x0c 0x00 0xdc 0x1b 0x01 0x2e 0x5a 0xed 0xfa 0x15 0xfc 0xff 0xde 0x0d 0xdc 0x1b 0x1c 0x20 0x54 0x49 0x4d 0x45 0x53 0x20 0x54 0x48 0x45 0x20 0x53 0x49 0x5a 0x45 0x20 0x4f 0x46 0x20 0x4f 0x55 0x52 0x20 0x53 0x48 0x49 0x50 0x2e 0x90 0x16 0x4c 0x22 0x28 0xa5 0xb4 0x51 0xf2 0x79 0x79 0xeb 0x02 0x7a 0x7e 0xeb 0x92 0x0c 0x20 0x0f 0x5d 0x17 0xc8 0x00 0xd8 0x4a 0x2d 0x12 0x91 0x75 0xc9 0x79 0x99 0x5e 0xae 0x0b 0x78 0x12 0x07 0x13 0x3e 0x13 0x41 0x0e 0x89 0x12 0xfa 0x15 0x10 0x00 0xdc 0x1b 0x0b 0x4e 0x4f 0x54 0x20 0x43 0x45 0x52 0x54 0x41 0x49 0x4e 0x90 0x16 0x4c 0x22 0xd3 0xa4 0x94 0x29 0x6f 0x4f 0x17 0x85 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x54 0x52 0x41 0x4e 0x53 0x50 0x4f 0x52 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x53 0x43 0x4f 0x55 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x57 0x41 0x52 0x53 0x48 0x49 0x50 0x90 0x16 'L"]      ` A    '    L"   )     Q yt    y    s; ?  A    '         .Z           TIMES THE SIZE OF OUR SHIP.  L"(  Q yy  z~     ]    J-  u y ^  x   > A          NOT CERTAIN  L"   )oO    L"   TRANSPORT  L"   SCOUT  L"   WARSHIP  '

// ================================================
// 0xee3d: WORD '(.TYPE)' codep=0x4a4f parp=0xee49
// ================================================
// 0xee49: db 0x03 0x00 0x62 0xec 0x01 0x00 0x15 0xee 0x02 0x00 0x25 0xee 0x03 0x00 0x31 0xee 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x06 0x54 0x59 0x50 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0x98 0xeb 0x92 0x0c 0x47 0xee 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x4e 0x4f 0x4e 0x45 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x09 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x70 0x00 0xb0 0xeb 0xae 0x0b 0xc8 0x0d 0xfa 0x15 0x58 0x00 0x8b 0xeb 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x07 0x13 0xfa 0x15 0x42 0x00 0xdc 0x1b 0x06 0x43 0x4c 0x41 0x53 0x53 0x20 0x5d 0x17 0xc8 0x00 0x4c 0x0f 0xb8 0x27 0xdc 0x1b 0x0b 0x45 0x51 0x55 0x49 0x56 0x41 0x4c 0x45 0x4e 0x54 0x20 0xa4 0x50 0xfa 0x15 0x0f 0x00 0xdc 0x1b 0x06 0x52 0x41 0x49 0x53 0x45 0x44 0x60 0x16 0x0c 0x00 0xdc 0x1b 0x07 0x4c 0x4f 0x57 0x45 0x52 0x45 0x44 0x60 0x16 0x06 0x00 0x32 0x0e 0x60 0xec 0x60 0x16 0x10 0x00 0x74 0xee 0xdc 0x1b 0x09 0x20 0x41 0x50 0x50 0x41 0x52 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0f 0x57 0x45 0x41 0x50 0x4f 0x4e 0x20 0x53 0x54 0x41 0x54 0x55 0x53 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x19 0x00 0xb2 0x50 0x07 0x13 0xfa 0x15 0x09 0x00 0xdc 0x1b 0x04 0x4e 0x4f 0x54 0x20 0xdc 0x1b 0x05 0x41 0x52 0x4d 0x45 0x44 0x90 0x16 0x4c 0x22 0x41 0x0e 0x93 0xeb 0x73 0x3b 0x72 0x0f 0x72 0x0f 0x92 0x0c 0xfa 0x15 0x3e 0x00 0xc8 0x0d 0xfa 0x15 0x0e 0x00 0x93 0xeb 0xf6 0x0f 0x72 0x0f 0x92 0x0c 0x60 0x16 0x04 0x00 0x8b 0x3b 0x9b 0x54 0x76 0x6d 0x5d 0x17 0x1a 0x00 0x8d 0x54 0x76 0x6d 0x83 0xeb 0x5d 0x17 0x10 0x00 0x5d 0x17 0x2e 0x00 0x67 0xaf 0xe6 0x06 0x8a 0x79 0xd3 0xa4 0x5d 0x17 0x0f 0x00 0xa5 0x29 0x60 0x16 0x04 0x00 0x32 0x0e 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0e 0x43 0x4f 0x4e 0x53 0x54 0x49 0x54 0x55 0x45 0x4e 0x54 0x53 0x3a 0x20 0x28 0xa5 0x20 0x0f 0x3a 0xef 0x2e 0x0f 0x3a 0xef 0x3d 0x0f 0x3a 0xef 0x73 0x3b 0x3a 0xef 0x90 0x16 0x4c 0x22 0xad 0x62 0x02 0x7a 0xa9 0x74 0xae 0x0b 0xc9 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x14 0x00 0x2e 0x0f 0x51 0xa1 0x6f 0x4f 0x17 0x85 0xdc 0x1b 0x0e 0x4f 0x52 0x42 0x49 0x54 0x20 0x4e 0x55 0x4d 0x42 0x45 0x52 0x3a 0x20 0x28 0xa5 0xb5 0xef 0xb8 0x27 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x41 0x52 0x43 0x54 0x49 0x43 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x53 0x55 0x42 0x2d 0xea 0xef 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x54 0x45 0x4d 0x50 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x54 0x52 0x4f 0x50 0x49 0x43 0x41 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x45 0x41 0x52 0x49 0x4e 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x49 0x4e 0x46 0x45 0x52 0x4e 0x4f 0x90 0x16 '  b       %   1 L"     TYPE:           G   L"   NONE  L"     SHIELDS:     p         X     = _     B    CLASS ]   L  '   EQUIVALENT  P       RAISED`      LOWERED`   2 ` `   t     APPARENT  L"     WEAPON STATUS:        P         NOT    ARMED  L"A   s;r r     >           r   `    ; Tvm]    Tvm  ]   ] . g    y  ]    )`   2   L"     CONSTITUENTS: (   : . : = : s;:   L" b z t   y  L"]   . Q oO     ORBIT NUMBER: (    '  L"   ARCTIC  L"   SUB-    L"   TEMPERATE  L"   TROPICAL  L"   SEARING  L"   INFERNO  '

// ================================================
// 0xf03f: WORD '.TDESC' codep=0x4a4f parp=0xf04a
// ================================================
// 0xf04a: db 0x06 0x00 0x48 0x3a 0x00 0x00 0xf9 0xef 0x01 0x00 0xec 0xef 0x02 0x00 0x06 0xf0 0x03 0x00 0x16 0xf0 0x04 0x00 0x25 0xf0 0x05 0x00 0x33 0xf0 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0d 0x54 0x45 0x4d 0x50 0x45 0x52 0x41 0x54 0x55 0x52 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x25 0x00 0xf5 0xeb 0x92 0x0c 0xed 0xeb 0x92 0x0c 0x41 0x0e 0x48 0xf0 0x7f 0x0e 0x5f 0x12 0xfa 0x15 0x08 0x00 0x32 0x0e 0x60 0x16 0x0b 0x00 0xdc 0x1b 0x04 0x20 0x54 0x4f 0x20 0x48 0xf0 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x03 0x47 0x41 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x4c 0x49 0x51 0x55 0x49 0x44 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x46 0x52 0x4f 0x5a 0x45 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x52 0x4f 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x4d 0x4f 0x4c 0x54 0x45 0x4e 0x90 0x16 '  H:                  %   3 L"     TEMPERATURE:     %         A H  _     2 `       TO H   L"   GAS  L"   LIQUID  L"   FROZEN  L"   ROCK  L"   MOLTEN  '

// ================================================
// 0xf0e1: WORD '(.SURF)' codep=0x4a4f parp=0xf0ed
// ================================================
// 0xf0ed: db 0x05 0x00 0x62 0xec 0x01 0x00 0xa7 0xf0 0x02 0x00 0xb1 0xf0 0x03 0x00 0xbe 0xf0 0x05 0x00 0xcb 0xf0 0x04 0x00 0xd6 0xf0 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x15 0x50 0x52 0x45 0x44 0x4f 0x4d 0x49 0x4e 0x41 0x4e 0x54 0x20 0x53 0x55 0x52 0x46 0x41 0x43 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xc5 0xeb 0x92 0x0c 0xeb 0xf0 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x09 0x47 0x52 0x41 0x56 0x49 0x54 0x59 0x3a 0x20 0xc7 0xed 0x41 0x0e 0xe7 0x58 0x76 0x6d 0xfa 0x15 0x46 0x00 0xcd 0xeb 0xae 0x0b 0x41 0x0e 0x5d 0x17 0x20 0x03 0x2d 0x12 0xfa 0x15 0x18 0x00 0x5d 0x17 0x20 0x03 0x92 0x0f 0x20 0x0f 0xa5 0x4b 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x5d 0x17 0x20 0x03 0x72 0x0f 0x5d 0x17 0x64 0x00 0x60 0x0f 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2e 0x5d 0x17 0x0a 0x00 0x60 0x0f 0x20 0x0f 0xe1 0x27 0xb8 0x27 0xdc 0x1b 0x01 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x54 0x48 0x49 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x91 0xf1 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x54 0x48 0x49 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0xb9 0xf1 0x90 0x16 '  b                     L"     PREDOMINANT SURFACE:               L"     GRAVITY:   A  Xvm  F     A ]   -     ]        K]     ]   r ] d `    '   .]   `    ' '   G  L"   THIN  L"   VERY     L"   MODERATE  L"   THICK  L"   VERY     '

// ================================================
// 0xf1d3: WORD '(.ATMO)' codep=0x4a4f parp=0xf1df
// ================================================
// 0xf1df: db 0x05 0x00 0x76 0xee 0x01 0x00 0x9e 0xf1 0x02 0x00 0x93 0xf1 0x03 0x00 0xac 0xf1 0x04 0x00 0xbb 0xf1 0x05 0x00 0xc7 0xf1 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x15 0x41 0x54 0x4d 0x4f 0x53 0x50 0x48 0x45 0x52 0x49 0x43 0x20 0x44 0x45 0x4e 0x53 0x49 0x54 0x59 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xe5 0xeb 0x92 0x0c 0xdd 0xf1 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x43 0x41 0x4c 0x4d 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x3b 0xf2 0x90 0x16 '  v                     L"     ATMOSPHERIC DENSITY:               L"   CALM  L"   MODERATE  L"   VIOLENT  L"   VERY ;   '

// ================================================
// 0xf257: WORD '(.WEATH)' codep=0x4a4f parp=0xf264
// ================================================
// 0xf264: db 0x04 0x00 0x76 0xee 0x01 0x00 0x23 0xf2 0x02 0x00 0x2e 0xf2 0x03 0x00 0x3d 0xf2 0x04 0x00 0x4b 0xf2 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x10 0x47 0x4c 0x4f 0x42 0x41 0x4c 0x20 0x57 0x45 0x41 0x54 0x48 0x45 0x52 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xdd 0xeb 0xae 0x0b 0x62 0xf2 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x11 0x20 0x53 0x50 0x45 0x43 0x54 0x52 0x41 0x4c 0x20 0x43 0x4c 0x41 0x53 0x53 0x3a 0x20 0x28 0xa5 0x30 0x75 0x6b 0x06 0x90 0x16 0x29 0x1d 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 0x4c 0x22 0xb4 0x0d 0x3d 0x0f 0x93 0x3b 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0xbd 0xf2 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x6e 0x0e 0x5f 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0xea 0xff 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0c 0x20 0x45 0x43 0x4f 0x53 0x50 0x48 0x45 0x52 0x45 0x3a 0x20 0x30 0x75 0xc6 0xf2 0x41 0x0e 0x28 0xa5 0x25 0x10 0xb8 0x27 0xdc 0x1b 0x02 0x2d 0x20 0x9b 0x3b 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x08 0x20 0x53 0x54 0x41 0x54 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0xb8 0x00 0xfd 0xeb 0xae 0x0b 0x72 0x5e 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xb4 0x0d 0x2e 0x0f 0x5d 0x17 0x8f 0x01 0x57 0x40 0x07 0x13 0x7a 0x56 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x25 0x00 0xdc 0x1b 0x07 0x53 0x54 0x41 0x42 0x4c 0x45 0x20 0x02 0xec 0xfa 0x15 0x11 0x00 0xdc 0x1b 0x0c 0x28 0x50 0x4f 0x53 0x54 0x2d 0x46 0x4c 0x41 0x52 0x45 0x29 0x60 0x16 0x6f 0x00 0x50 0x0e 0x5d 0x17 0x3c 0x00 0x2d 0x12 0xfa 0x15 0x1e 0x00 0xab 0x4f 0x17 0x85 0xdc 0x1b 0x11 0x53 0x4c 0x49 0x47 0x48 0x54 0x4c 0x59 0x20 0x55 0x4e 0x53 0x54 0x41 0x42 0x4c 0x45 0x60 0x16 0x47 0x00 0x93 0x4f 0x17 0x85 0xd3 0xa4 0xdc 0x1b 0x25 0x20 0x20 0x55 0x4e 0x53 0x54 0x41 0x42 0x4c 0x45 0x20 0x2d 0x20 0x45 0x53 0x54 0x49 0x4d 0x41 0x54 0x45 0x44 0x20 0x54 0x49 0x4d 0x45 0x20 0x54 0x4f 0x20 0x46 0x4c 0x41 0x52 0x45 0x3a 0xd3 0xa4 0x3d 0x0f 0xa5 0x29 0x50 0x0e 0xb8 0x27 0xdc 0x1b 0x0a 0x41 0x52 0x54 0x48 0x20 0x44 0x41 0x59 0x53 0x2e 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x70 0xed 0x90 0x16 0x4c 0x22 0x8c 0xef 0x90 0x16 0x4c 0x22 0x59 0xee 0x70 0xed 0x7f 0xee 0x05 0xef 0x90 0x16 '  v   #   .   =   K L"     GLOBAL WEATHER:           b   L"      SPECTRAL CLASS: ( 0uk   ) MKGFABOL"  =  ;        P r   n _     J       2   L"      ECOSPHERE: 0u  A ( %  '   -  ;   '  L"      STATE:           r^    A   . ]   W@  zV  >   %    STABLE          (POST-FLARE)` o P ] < -      O     SLIGHTLY UNSTABLE` G  O      %  UNSTABLE - ESTIMATED TIME TO FLARE:  =  )P  '   ARTH DAYS.  2   L"p   L"    L"Y p      '

// ================================================
// 0xf401: WORD '(.V/P-OBJ)' codep=0x4a4f parp=0xf410
// ================================================
// 0xf410: db 0x02 0x00 0xf7 0xf3 0x16 0x00 0xeb 0xf3 0x18 0x00 0xf1 0xf3 0x4c 0x22 0x30 0x75 0x0e 0xf4 0x90 0x16 0x4c 0x22 0xc3 0xef 0x05 0xf1 0x2f 0xf1 0xf7 0xf1 0x66 0xf0 0x78 0xf2 0x90 0x16 0x4c 0x22 0x9d 0xf2 0xf0 0xf2 0x24 0xec 0xbb 0xc7 0xae 0x0b 0xfa 0x15 0x04 0x00 0x1c 0xf3 0x90 0x16 '            L"0u    L"    /   f x   L"    $             '

// ================================================
// 0xf448: WORD '(.ANALYSIS)' codep=0x4a4f parp=0xf458
// ================================================
// 0xf458: db 0x03 0x00 0x6e 0x3a 0x20 0x00 0x26 0xf4 0x17 0x00 0x36 0xf4 0x19 0x00 0x1e 0xf4 '  n:  &   6     '

// ================================================
// 0xf468: WORD '(/ANALYSIS)' codep=0x224c parp=0xf478
// ================================================
// entry

void _ro__slash_ANALYSIS_rc_() // (/ANALYSIS)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x0002); Pust(0x0000);
  D_gt_(); // D>
  if (Pop() == 0) goto label1;
  _gt_C_plus_S(); // >C+S
  UNK_0xed19(); // UNK_0xed19
  _at_INST_dash_CLASS(); // @INST-CLASS
  Case((.ANALYSIS));
  ICLOSE(); // ICLOSE
  Push(0x1b58); Pust(0x0000);
  goto label2;

  label1:
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  PRINT("I SAID THERE'S NOTHING THERE!", 29); // (.")
  goto label4;

  label3:
  PRINT("I NEED A CURRENT SENSOR READING.", 32); // (.")

  label4:
  Pop(); // DROP
  Push(0x05dc); Pust(0x0000);

  label2:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  D_ex_(); // D!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}

// 0xf50b: db 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x39 0x2f 0x31 0x30 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'AN-VOC__________________________rlay Suffix-------------9/10/85)1155DOCTOR----------- '
  