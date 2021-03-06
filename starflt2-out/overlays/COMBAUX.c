// ====== OVERLAY 'COMBAUX' ======
// store offset = 0xf2b0
// overlay size   = 0x02b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF2C6  codep:0x224c wordp:0xf2c6 size:0x0010 C-string:'WF2C6'
//           WF2D8  codep:0x224c wordp:0xf2d8 size:0x002e C-string:'WF2D8'
//           WF308  codep:0x224c wordp:0xf308 size:0x002c C-string:'WF308'
//           WF336  codep:0x224c wordp:0xf336 size:0x0056 C-string:'WF336'
//           WF38E  codep:0x224c wordp:0xf38e size:0x004a C-string:'WF38E'
//           WF3DA  codep:0x224c wordp:0xf3da size:0x0054 C-string:'WF3DA'
//           WF430  codep:0x1d29 wordp:0xf430 size:0x0002 C-string:'WF430'
//           WF434  codep:0x1d29 wordp:0xf434 size:0x0002 C-string:'WF434'
//           WF438  codep:0x224c wordp:0xf438 size:0x0022 C-string:'WF438'
//           WF45C  codep:0x224c wordp:0xf45c size:0x0022 C-string:'WF45C'
//           WF480  codep:0x224c wordp:0xf480 size:0x0044 C-string:'WF480'
//           WF4C6  codep:0x224c wordp:0xf4c6 size:0x001c C-string:'WF4C6'
//           WF4E4  codep:0x224c wordp:0xf4e4 size:0x0008 C-string:'WF4E4'
//          SET-SC  codep:0x224c wordp:0xf4f7 size:0x003c C-string:'SET_dash_SC'
//             @NF  codep:0x224c wordp:0xf53b size:0x0000 C-string:'GetNF'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void WITHIN(); // WITHIN
void SQRT(); // SQRT
void _099(); // 099
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void POINT_gt_I(); // POINT>I
void ROT(); // ROT
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void _st__ex__gt_(); // <!>


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF430 = 0xf430; // WF430 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF434 = 0xf434; // WF434 size: 2
// {0x3a, 0x20}




// 0xf2c2: db 0x2a 0x00 '* '

// ================================================
// 0xf2c4: WORD 'WF2C6' codep=0x224c wordp=0xf2c6 params=0 returns=2
// ================================================

void WF2C6() // WF2C6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2d6: WORD 'WF2D8' codep=0x224c wordp=0xf2d8
// ================================================

void WF2D8() // WF2D8
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  } else
  {
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf306: WORD 'WF308' codep=0x224c wordp=0xf308 params=0 returns=0
// ================================================

void WF308() // WF308
{
  Push(Read16(pp_IsUF)); // ?UF @
  if (Pop() != 0)
  {
    WF2D8(); // WF2D8
  } else
  {
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
  }
  Push(Pop() - 0x001e); //  0x001e -
  Push(pp_YVIS); // YVIS
  _st__ex__gt_(); // <!>
  Push(Pop() - 0x0012); //  0x0012 -
  Push(pp_XVIS); // XVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf334: WORD 'WF336' codep=0x224c wordp=0xf336 params=0 returns=0
// ================================================

void WF336() // WF336
{
  _gt_2ICONF(); // >2ICONF
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000a); // XVIS @ 0x000a +
  Push(Read16(pp_YVIS) + 0x000f); // YVIS @ 0x000f +
  Push(Read16(pp_XVIS) + 0x001a); // XVIS @ 0x001a +
  Push(Read16(pp_YVIS) + 0x002b); // YVIS @ 0x002b +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf38c: WORD 'WF38E' codep=0x224c wordp=0xf38e params=0 returns=0
// ================================================

void WF38E() // WF38E
{
  _gt_3ICONF(); // >3ICONF
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_XVIS) + 0x0022); // XVIS @ 0x0022 +
  Push(Read16(pp_YVIS) + 0x003a); // YVIS @ 0x003a +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf3d8: WORD 'WF3DA' codep=0x224c wordp=0xf3da params=0 returns=0
// ================================================

void WF3DA() // WF3DA
{
  _gt_1ICONF(); // >1ICONF
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0017); // YVIS @ 0x0017 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x002a); // YVIS @ 0x002a +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf42e: WORD 'WF430' codep=0x1d29 wordp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'WF434' codep=0x1d29 wordp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 ': '

// ================================================
// 0xf436: WORD 'WF438' codep=0x224c wordp=0xf438
// ================================================

void WF438() // WF438
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_WF434)); // WF434 @
  MIN(); // MIN
  Push(pp_WF434); // WF434
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf45a: WORD 'WF45C' codep=0x224c wordp=0xf45c
// ================================================

void WF45C() // WF45C
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_WF430)); // WF430 @
  MAX(); // MAX
  Push(pp_WF430); // WF430
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'WF480' codep=0x224c wordp=0xf480
// ================================================

void WF480() // WF480
{
  unsigned short int i, imax;
  Push(pp_WF430); // WF430
  _099(); // 099
  Push(0x03e8);
  Push(pp_WF434); // WF434
  _st__ex__gt_(); // <!>

  i = 0;
  imax = Read16(pp_IGLOBAL); // IGLOBAL @
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(0x0023);
    Push(0x002c);
    WITHIN(); // WITHIN
    GetID(); // @ID
    Push(Pop()==Read16(cc_INVIS_dash_I)?1:0); //  INVIS-I =
    Push(Pop() | Pop()); // OR
    GetID(); // @ID
    Push(Pop()==0x0060?1:0); //  0x0060 =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WF438(); // WF438
      WF45C(); // WF45C
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf4c4: WORD 'WF4C6' codep=0x224c wordp=0xf4c6 params=4 returns=1
// ================================================

void WF4C6() // WF4C6
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf4e2: WORD 'WF4E4' codep=0x224c wordp=0xf4e4
// ================================================

void WF4E4() // WF4E4
{
  WF2D8(); // WF2D8
  WF2C6(); // WF2C6
  WF4C6(); // WF4C6
}


// ================================================
// 0xf4ec: WORD 'SET-SC' codep=0x224c wordp=0xf4f7
// ================================================
// entry

void SET_dash_SC() // SET-SC
{
  WF308(); // WF308
  Push(Read16(pp_IsUF)); // ?UF @
  if (Pop() != 0)
  {
    WF4E4(); // WF4E4
  } else
  {
    WF480(); // WF480
    Push(Read16(pp_WF430)); // WF430 @
  }
  Push(Read16(regsp)); // DUP
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    WF3DA(); // WF3DA
    return;
  }
  Push(5);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WF336(); // WF336
    return;
  }
  WF38E(); // WF38E
}


// ================================================
// 0xf533: WORD '@NF' codep=0x224c wordp=0xf53b
// ================================================
// entry

void GetNF() // @NF
{
  WF480(); // WF480
  Push(Read16(pp_WF434)); // WF434 @
  Push(Read16(pp_WF430)); // WF430 @
}

// 0xf547: db 0x43 0x4f 0x4d 0x42 0x41 0x55 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'COMBAU___________________ '

