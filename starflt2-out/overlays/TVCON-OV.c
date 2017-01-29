// ====== OVERLAY 'TVCON-OV' ======
// store offset = 0xed50
// overlay size   = 0x0810

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xed9e  codep:0x224c parp:0xed9e size:0x0006 C-string:'UNK_0xed9e'
//      UNK_0xeda6  codep:0x224c parp:0xeda6 size:0x0006 C-string:'UNK_0xeda6'
//      UNK_0xedae  codep:0x224c parp:0xedae size:0x000a C-string:'UNK_0xedae'
//      UNK_0xedba  codep:0x224c parp:0xedba size:0x0008 C-string:'UNK_0xedba'
//      UNK_0xedc4  codep:0x7420 parp:0xedc4 size:0x0003 C-string:'UNK_0xedc4'
//      UNK_0xedc9  codep:0x7394 parp:0xedc9 size:0x0006 C-string:'UNK_0xedc9'
//      UNK_0xedd1  codep:0x7420 parp:0xedd1 size:0x0003 C-string:'UNK_0xedd1'
//      UNK_0xedd6  codep:0x7420 parp:0xedd6 size:0x000d C-string:'UNK_0xedd6'
//          ?ETIME  codep:0x224c parp:0xedee size:0x002a C-string:'IsETIME'
//      UNK_0xee1a  codep:0x224c parp:0xee1a size:0x003c C-string:'UNK_0xee1a'
//      UNK_0xee58  codep:0x224c parp:0xee58 size:0x0040 C-string:'UNK_0xee58'
//      UNK_0xee9a  codep:0x224c parp:0xee9a size:0x002a C-string:'UNK_0xee9a'
//          %STORM  codep:0x1d29 parp:0xeecf size:0x0005 C-string:'_pe_STORM'
//         ?.STORM  codep:0x224c parp:0xeee0 size:0x001c C-string:'Is_dot_STORM'
//      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x0028 C-string:'UNK_0xeefe'
//        DO-STORM  codep:0x224c parp:0xef33 size:0x006e C-string:'DO_dash_STORM'
//      UNK_0xefa3  codep:0x224c parp:0xefa3 size:0x0004 C-string:'UNK_0xefa3'
//      UNK_0xefa9  codep:0x224c parp:0xefa9 size:0x0006 C-string:'UNK_0xefa9'
//      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x0008 C-string:'UNK_0xefb1'
//      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x0014 C-string:'UNK_0xefbb'
//      UNK_0xefd1  codep:0x224c parp:0xefd1 size:0x0030 C-string:'UNK_0xefd1'
//      UNK_0xf003  codep:0x224c parp:0xf003 size:0x0008 C-string:'UNK_0xf003'
//      UNK_0xf00d  codep:0x224c parp:0xf00d size:0x0060 C-string:'UNK_0xf00d'
//      UNK_0xf06f  codep:0x224c parp:0xf06f size:0x003e C-string:'UNK_0xf06f'
//            FADE  codep:0x224c parp:0xf0b6 size:0x002a C-string:'FADE'
//      UNK_0xf0e2  codep:0x224c parp:0xf0e2 size:0x002a C-string:'UNK_0xf0e2'
//       .STARDATE  codep:0x224c parp:0xf11a size:0x0090 C-string:'DrawSTARDATE'
//      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x0016 C-string:'UNK_0xf1ac'
//      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0018 C-string:'UNK_0xf1c4'
//      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x0008 C-string:'UNK_0xf1de'
//      UNK_0xf1e8  codep:0x224c parp:0xf1e8 size:0x00e4 C-string:'UNK_0xf1e8'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0026 C-string:'UNK_0xf2ce'
//      UNK_0xf2f6  codep:0x224c parp:0xf2f6 size:0x0034 C-string:'UNK_0xf2f6'
//      UNK_0xf32c  codep:0x224c parp:0xf32c size:0x002c C-string:'UNK_0xf32c'
//         .ENERGY  codep:0x224c parp:0xf364 size:0x00a5 C-string:'DrawENERGY'
//          .CARGO  codep:0x224c parp:0xf414 size:0x003b C-string:'DrawCARGO'
//      UNK_0xf451  codep:0x224c parp:0xf451 size:0x0026 C-string:'UNK_0xf451'
//      UNK_0xf479  codep:0x224c parp:0xf479 size:0x0022 C-string:'UNK_0xf479'
//      UNK_0xf49d  codep:0x224c parp:0xf49d size:0x0022 C-string:'UNK_0xf49d'
//          .WHERE  codep:0x224c parp:0xf4ca size:0x0044 C-string:'DrawWHERE'
//       .DISTANCE  codep:0x224c parp:0xf51c size:0x0006 C-string:'DrawDISTANCE'
//          .STATS  codep:0x224c parp:0xf52d size:0x0000 C-string:'DrawSTATS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp__i_STORM; // 'STORM
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp_STAGES; // STAGES
extern const unsigned short int pp_ETIME; // ETIME
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp__n_ETIME; // #ETIME
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void DrawR(); // .R
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void ALL(); // ALL
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void POLY_dash_ER(); // POLY-ER
void DrawVIT(); // .VIT
void _2_at_(); // 2@
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _st__ex__gt_(); // <!>


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__pe_STORM = 0xeecf; // %STORM size: 5
// {0x00, 0x14, 0x28, 0x3c, 0x55}




// 0xed62: db 0x81 0x00 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x4c 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x7f 0x3b 0x8c 0x21 0x32 0x6d 0x90 0x16 0x4c 0x22 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x90 0x16 '  L"  >         L"  L~  L" "; !2m  L"  =  K  L"  ] d  K  '

// ================================================
// 0xed9c: WORD 'UNK_0xed9e' codep=0x224c parp=0xed9e
// ================================================

void UNK_0xed9e() // UNK_0xed9e
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xeda4: WORD 'UNK_0xeda6' codep=0x224c parp=0xeda6
// ================================================

void UNK_0xeda6() // UNK_0xeda6
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xedac: WORD 'UNK_0xedae' codep=0x224c parp=0xedae
// ================================================

void UNK_0xedae() // UNK_0xedae
{
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
}


// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x224c parp=0xedba
// ================================================

void UNK_0xedba() // UNK_0xedba
{
  UNK_0xeda6(); // UNK_0xeda6
  UNK_0xedae(); // UNK_0xedae
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x7420 parp=0xedc4
// ================================================
IFieldType UNK_0xedc4 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xedc7: WORD 'UNK_0xedc9' codep=0x7394 parp=0xedc9
// ================================================
LoadDataType UNK_0xedc9 = {PLANETIDX, 0x11, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedcf: WORD 'UNK_0xedd1' codep=0x7420 parp=0xedd1
// ================================================
IFieldType UNK_0xedd1 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xedd4: WORD 'UNK_0xedd6' codep=0x7420 parp=0xedd6
// ================================================
IFieldType UNK_0xedd6 = {CREWMEMBERIDX, 0x1b, 0x01};
// 0xedd9: db 0x20 0x74 0x10 0x20 0x02 0x20 0x74 0x10 0x1f 0x01 ' t    t   '

// ================================================
// 0xede3: WORD '?ETIME' codep=0x224c parp=0xedee
// ================================================

void IsETIME() // ?ETIME
{
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  Push(0x03e8);
  M_star_(); // M*
  D_plus_(); // D+
  D_gt_(); // D>
  if (Pop() == 0) return;
  Push(0xceb6); // probable 'RECAL'
  MODULE(); // MODULE
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x224c parp=0xee1a
// ================================================

void UNK_0xee1a() // UNK_0xee1a
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0);
    return;
  }
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  Push(a); // R>
}


// ================================================
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58
// ================================================

void UNK_0xee58() // UNK_0xee58
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(7);
  Push(0x000a);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(7);
    Push(pp_STARDAT); // STARDAT
    Push(Read16(Pop())); // @
    Push(0x001e);
    MOD(); // MOD
    Push(0x000a);
    _slash_(); // /
    Push(Pop() + Pop()); // +
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      Push(0xc014); // probable 'BLDLI'
      MODULE(); // MODULE
    }
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee98: WORD 'UNK_0xee9a' codep=0x224c parp=0xee9a
// ================================================

void UNK_0xee9a() // UNK_0xee9a
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(pp__i_INJURE); // 'INJURE
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xeec4: WORD '%STORM' codep=0x1d29 parp=0xeecf
// ================================================
// 0xeecf: db 0x00 0x14 0x28 0x3c 0x55 '  (<U'

// ================================================
// 0xeed4: WORD '?.STORM' codep=0x224c parp=0xeee0
// ================================================

void Is_dot_STORM() // ?.STORM
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(3);
  _gt_(); // >
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  UNK_0xed9e(); // UNK_0xed9e
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdc0); // probable '.STOR'
  MODULE(); // MODULE
}


// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe
// ================================================

void UNK_0xeefe() // UNK_0xeefe
{
  Push(1);
  LoadData(UNK_0xedc9); // from 'PLANET'
  Push(Read16(Pop())); // @
  Push(5);
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(pp_STORM); // STORM
  Store_2(); // !_2
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef26: WORD 'DO-STORM' codep=0x224c parp=0xef33
// ================================================
// entry

void DO_dash_STORM() // DO-STORM
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(pp_STORM); // STORM
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_STORM); // STORM
      _plus__ex__2(); // +!_2
      Is_dot_STORM(); // ?.STORM
    } else
    {
      Push(pp__ro_PLANET); // (PLANET
      Get_gt_C_plus_S(); // @>C+S
      LoadData(UNK_0xedc9); // from 'PLANET'
      Push(Read16(Pop())); // @
      Push(pp__pe_STORM); // %STORM
      Push(Pop() + Pop()); // +
      Push(Read8(Pop())&0xFF); // C@
      Push(1);
      Push(0x0064);
      RRND(); // RRND
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(pp__i_STORM); // 'STORM
        Push(Read16(Pop())); // @
        MODULE(); // MODULE
      } else
      {
        Push(1);
        Push(4);
        RRND(); // RRND
        Push(pp__n_STORM); // #STORM
        Store_2(); // !_2
        Push(0xcdc0); // probable '.STOR'
        MODULE(); // MODULE
        UNK_0xeefe(); // UNK_0xeefe
      }
      ICLOSE(); // ICLOSE
    }
    UNK_0xee9a(); // UNK_0xee9a
    return;
  }
  Push(pp__n_STORM); // #STORM
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xefa1: WORD 'UNK_0xefa3' codep=0x224c parp=0xefa3
// ================================================

void UNK_0xefa3() // UNK_0xefa3
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xefa7: WORD 'UNK_0xefa9' codep=0x224c parp=0xefa9
// ================================================

void UNK_0xefa9() // UNK_0xefa9
{
  Push(pp_STAGES); // STAGES
  Push(Pop()+2); // 2+
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  Push(pp_STAGES); // STAGES
  Push(6);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(pp_STAGES); // STAGES
  Push(8);
  Push(Pop() + Pop()); // +
}

// 0xefc3: db 0x4c 0x22 0x5a 0x62 0x5d 0x17 0x0a 0x00 0x72 0x0f 0x90 0x16 'L"Zb]   r   '

// ================================================
// 0xefcf: WORD 'UNK_0xefd1' codep=0x224c parp=0xefd1
// ================================================

void UNK_0xefd1() // UNK_0xefd1
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    OVER(); // OVER
    ON_2(); // ON_2
    SAVE_dash_OV(); // SAVE-OV
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf001: WORD 'UNK_0xf003' codep=0x224c parp=0xf003
// ================================================

void UNK_0xf003() // UNK_0xf003
{
  Push(0xc5da); // probable 'DO-CLOU'
  MODULE(); // MODULE
}


// ================================================
// 0xf00b: WORD 'UNK_0xf00d' codep=0x224c parp=0xf00d
// ================================================

void UNK_0xf00d() // UNK_0xf00d
{
  UNK_0xefa3(); // UNK_0xefa3
  Push2Words("0.");
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() != 0)
  {
    Push(1);
    UNK_0xf003(); // UNK_0xf003
  }
  UNK_0xefa9(); // UNK_0xefa9
  Push(0xbff4); Push(0x0000);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() != 0)
  {
    Push(2);
    UNK_0xf003(); // UNK_0xf003
  }
  UNK_0xefb1(); // UNK_0xefb1
  Push(0x7fe8); Push(0x0001);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() != 0)
  {
    Push(4);
    UNK_0xf003(); // UNK_0xf003
  }
  UNK_0xefbb(); // UNK_0xefbb
  Push(0xffe0); Push(0x0001);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() == 0) return;
  Push(5);
  UNK_0xf003(); // UNK_0xf003
}

// 0xf053: db 0x4c 0x22 0x34 0x75 0x89 0x12 0xd9 0xed 0xae 0x0b 0x2e 0x0f 0xf5 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x53 0xf0 0x3e 0x13 0x90 0x16 'L"4u      .       L"S >   '

// ================================================
// 0xf06d: WORD 'UNK_0xf06f' codep=0x224c parp=0xf06f
// ================================================

void UNK_0xf06f() // UNK_0xf06f
{
  Push(0);
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf067);
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}

// 0xf083: db 0x4c 0x22 0x53 0xf0 0xfa 0x15 0x22 0x00 0x5d 0x17 0x10 0x00 0xd9 0xed 0x16 0x6d 0x20 0x0f 0xde 0xed 0x0a 0x6d 0x5d 0x17 0x8b 0xc1 0xd9 0x84 0x5d 0x17 0xb8 0xc1 0xd9 0x84 0x20 0x0f 0xd9 0xed 0x16 0x6d 0x90 0x16 'L"S   " ]      m     m]     ]          m  '

// ================================================
// 0xf0ad: WORD 'FADE' codep=0x224c parp=0xf0b6
// ================================================

void FADE() // FADE
{
  _gt_TVCT(); // >TVCT
  Push(6);
  Push(0xc5da); // probable 'DO-CLOU'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  StoreD(); // D!
  Push(0x0fa0);
  MS(); // MS
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf085);
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  DrawVIT(); // .VIT
}


// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x224c parp=0xf0e2
// ================================================

void UNK_0xf0e2() // UNK_0xf0e2
{
  UNK_0xf06f(); // UNK_0xf06f
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x3fdc); Push(0x0002);
  D_gt_(); // D>
  if (Pop() == 0) return;
  FADE(); // FADE
}


// ================================================
// 0xf10c: WORD '.STARDATE' codep=0x224c parp=0xf11a
// ================================================
// entry

void DrawSTARDATE() // .STARDATE
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(pp_STARDAT); // STARDAT
    Push(Read16(Pop())); // @
    Push(0x012c);
    _slash_MOD(); // /MOD
    Push(0x121f);
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    Push(0x001e);
    _slash_MOD(); // /MOD
    Push(Pop()+1); // 1+
    SWAP(); // SWAP
    Push(Pop()+1); // 1+
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      PRINT("0", 1); // (.")
    }
    Push(0);
    DrawR(); // .R
    PRINT("-", 1); // (.")
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      PRINT("0", 1); // (.")
    }
    Push(0);
    DrawR(); // .R
    PRINT("-", 1); // (.")
    Push(0);
    DrawR(); // .R
  } else
  {
    PRINT(" \?\?\?\?", 5); // (.")
  }
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  UNK_0xee58(); // UNK_0xee58
  IsETIME(); // ?ETIME
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xedd1.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xedd6.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  UNK_0xf1ac(); // UNK_0xf1ac
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1e6: WORD 'UNK_0xf1e8' codep=0x224c parp=0xf1e8
// ================================================

void UNK_0xf1e8() // UNK_0xf1e8
{
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTH", 5); // (.")
    return;
  }
  Push(1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHEAST", 9); // (.")
    return;
  }
  Push(1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("EAST", 4); // (.")
    return;
  }
  Push(1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHEAST", 9); // (.")
    return;
  }
  Push(0);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTH", 5); // (.")
    return;
  }
  Push(-1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHWEST", 9); // (.")
    return;
  }
  Push(-1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("WEST", 4); // (.")
    return;
  }
  Push(-1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHWEST", 9); // (.")
    return;
  }
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xedba(); // UNK_0xedba
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf2f4: WORD 'UNK_0xf2f6' codep=0x224c parp=0xf2f6
// ================================================

void UNK_0xf2f6() // UNK_0xf2f6
{
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(8);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() != 0)
  {
    UNK_0xf2ce(); // UNK_0xf2ce
    Push(5);
    DrawR(); // .R
    PRINT("KM.", 3); // (.")
    return;
  }
  PRINT("LOST!", 5); // (.")
}


// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c() // UNK_0xf32c
{
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() == 0) return;
  UNK_0xedba(); // UNK_0xedba
  UNK_0xedae(); // UNK_0xedae
  ICLOSE(); // ICLOSE
  UNK_0xee1a(); // UNK_0xee1a
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  UNK_0xf1e8(); // UNK_0xf1e8
}


// ================================================
// 0xf358: WORD '.ENERGY' codep=0x224c parp=0xf364
// ================================================
// entry

void DrawENERGY() // .ENERGY
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(7);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xeda6(); // UNK_0xeda6
  Push(0x65e1+INST_dash_QT.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    SetColor("YELLOW");
    StoreCOLOR(); // !COLOR
    PRINT("NONE", 4); // (.")
    return;
  }
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(0x07d0);
  _dash_(); // -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(pp_COLOR); // COLOR
    Push(Read16(Pop())); // @
    SetColor("PINK");
    StoreCOLOR(); // !COLOR
    PRINT("RESERVE", 7); // (.")
    StoreCOLOR(); // !COLOR
  } else
  {
    Push(3);
    DrawR(); // .R
    PRINT("%", 1); // (.")
  }
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(3);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(4);
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf409: WORD '.CARGO' codep=0x224c parp=0xf414
// ================================================
// entry

void DrawCARGO() // .CARGO
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(3);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xedc4.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(5);
    MAX(); // MAX
    Push(5);
    _slash_(); // /
  }
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(3);
  DrawR(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf44f: WORD 'UNK_0xf451' codep=0x224c parp=0xf451
// ================================================

void UNK_0xf451() // UNK_0xf451
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xf477: WORD 'UNK_0xf479' codep=0x224c parp=0xf479
// ================================================

void UNK_0xf479() // UNK_0xf479
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("W", 1); // (.")
    } else
    {
      PRINT("E", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf49b: WORD 'UNK_0xf49d' codep=0x224c parp=0xf49d
// ================================================

void UNK_0xf49d() // UNK_0xf49d
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("S", 1); // (.")
    } else
    {
      PRINT("N", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf4bf: WORD '.WHERE' codep=0x224c parp=0xf4ca
// ================================================
// entry

void DrawWHERE() // .WHERE
{
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() == 0) return;
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  UNK_0xedba(); // UNK_0xedba
  UNK_0xf451(); // UNK_0xf451
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(4);
  DrawR(); // .R
  UNK_0xf49d(); // UNK_0xf49d
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(0);
  DrawR(); // .R
  UNK_0xf479(); // UNK_0xf479
}


// ================================================
// 0xf50e: WORD '.DISTANCE' codep=0x224c parp=0xf51c
// ================================================
// entry

void DrawDISTANCE() // .DISTANCE
{
  UNK_0xf2f6(); // UNK_0xf2f6
  UNK_0xf32c(); // UNK_0xf32c
}


// ================================================
// 0xf522: WORD '.STATS' codep=0x224c parp=0xf52d
// ================================================
// entry

void DrawSTATS() // .STATS
{
  unsigned short int a;
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xf0e2(); // UNK_0xf0e2
    UNK_0xf00d(); // UNK_0xf00d
  }
  DrawSTARDATE(); // .STARDATE
  DrawWHERE(); // .WHERE
  DrawENERGY(); // .ENERGY
  DrawCARGO(); // .CARGO
  DrawDISTANCE(); // .DISTANCE
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
}

// 0xf557: db 0x54 0x56 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x00 'TVCON-V__ '

