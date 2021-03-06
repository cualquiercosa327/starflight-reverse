// ====== OVERLAY 'PLSET-OV' ======
// store offset = 0xec00
// overlay size   = 0x0960

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEC16  codep:0x2214 wordp:0xec16 size:0x0002 C-string:'WEC16'
//           WEC1A  codep:0x2214 wordp:0xec1a size:0x0002 C-string:'WEC1A'
//           WEC1E  codep:0x2214 wordp:0xec1e size:0x0002 C-string:'WEC1E'
//           WEC22  codep:0x73ea wordp:0xec22 size:0x0006 C-string:'WEC22'
//           WEC2A  codep:0x73ea wordp:0xec2a size:0x0006 C-string:'WEC2A'
//           WEC32  codep:0x73ea wordp:0xec32 size:0x0006 C-string:'WEC32'
//           WEC3A  codep:0x73ea wordp:0xec3a size:0x0006 C-string:'WEC3A'
//           WEC42  codep:0x73ea wordp:0xec42 size:0x0006 C-string:'WEC42'
//           WEC4A  codep:0x73ea wordp:0xec4a size:0x0006 C-string:'WEC4A'
//           WEC52  codep:0x73ea wordp:0xec52 size:0x0006 C-string:'WEC52'
//        SURFTYPE  codep:0x73ea wordp:0xec5a size:0x0006 C-string:'SURFTYPE'
//           WEC62  codep:0x73ea wordp:0xec62 size:0x0006 C-string:'WEC62'
//           WEC6A  codep:0x73ea wordp:0xec6a size:0x0006 C-string:'WEC6A'
//   ATMO.ACTIVITY  codep:0x73ea wordp:0xec72 size:0x0006 C-string:'ATMO_dot_ACTIVITY'
//    ATMO.DENSITY  codep:0x73ea wordp:0xec7a size:0x0006 C-string:'ATMO_dot_DENSITY'
//           WEC82  codep:0x73ea wordp:0xec82 size:0x0006 C-string:'WEC82'
//           WEC8A  codep:0x73ea wordp:0xec8a size:0x0006 C-string:'WEC8A'
//           WEC92  codep:0x73ea wordp:0xec92 size:0x0006 C-string:'WEC92'
//           WEC9A  codep:0x224c wordp:0xec9a size:0x0015 C-string:'WEC9A'
//           WECB1  codep:0x224c wordp:0xecb1 size:0x000a C-string:'WECB1'
//           WECBD  codep:0x224c wordp:0xecbd size:0x000a C-string:'WECBD'
//           WECC9  codep:0x224c wordp:0xecc9 size:0x0014 C-string:'WECC9'
//           WECDF  codep:0x224c wordp:0xecdf size:0x0006 C-string:'WECDF'
//           WECE7  codep:0x224c wordp:0xece7 size:0x000a C-string:'WECE7'
//           WECF3  codep:0x744d wordp:0xecf3 size:0x0003 C-string:'WECF3'
//           WECF8  codep:0x224c wordp:0xecf8 size:0x0034 C-string:'WECF8'
//           WED2E  codep:0x224c wordp:0xed2e size:0x005e C-string:'WED2E'
//           WED8E  codep:0x224c wordp:0xed8e size:0x001a C-string:'WED8E'
//         LO-MASS  codep:0xeca2 wordp:0xedb4 size:0x0010 C-string:'LO_dash_MASS'
//         HI-MASS  codep:0xeca2 wordp:0xedd0 size:0x0010 C-string:'HI_dash_MASS'
//           WEDE2  codep:0x224c wordp:0xede2 size:0x0014 C-string:'WEDE2'
//           WEDF8  codep:0x224c wordp:0xedf8 size:0x002e C-string:'WEDF8'
//           WEE28  codep:0x224c wordp:0xee28 size:0x001c C-string:'WEE28'
//           WEE46  codep:0x224c wordp:0xee46 size:0x004a C-string:'WEE46'
//           WEE92  codep:0x224c wordp:0xee92 size:0x0054 C-string:'WEE92'
//           WEEE8  codep:0x224c wordp:0xeee8 size:0x0090 C-string:'WEEE8'
//           WEF7A  codep:0x224c wordp:0xef7a size:0x000e C-string:'WEF7A'
//           WEF8A  codep:0x224c wordp:0xef8a size:0x005e C-string:'WEF8A'
//           WEFEA  codep:0x224c wordp:0xefea size:0x0030 C-string:'WEFEA'
//           WF01C  codep:0x224c wordp:0xf01c size:0x0020 C-string:'WF01C'
//           WF03E  codep:0x224c wordp:0xf03e size:0x002e C-string:'WF03E'
//           WF06E  codep:0x224c wordp:0xf06e size:0x0016 C-string:'WF06E'
//           WF086  codep:0x224c wordp:0xf086 size:0x000c C-string:'WF086'
//           WF094  codep:0x224c wordp:0xf094 size:0x000e C-string:'WF094'
//        SUBHYDRO  codep:0x1d29 wordp:0xf0af size:0x0005 C-string:'SUBHYDRO'
//        TEMPHYDR  codep:0x1d29 wordp:0xf0c1 size:0x0007 C-string:'TEMPHYDR'
//        INFHYDRO  codep:0x1d29 wordp:0xf0d5 size:0x0007 C-string:'INFHYDRO'
//         SUBATMO  codep:0x1d29 wordp:0xf0e8 size:0x0005 C-string:'SUBATMO'
//        TEMPATMO  codep:0x1d29 wordp:0xf0fa size:0x0009 C-string:'TEMPATMO'
//         INFATMO  codep:0x1d29 wordp:0xf10f size:0x0007 C-string:'INFATMO'
//           WF118  codep:0x224c wordp:0xf118 size:0x000e C-string:'WF118'
//           WF128  codep:0x224c wordp:0xf128 size:0x0038 C-string:'WF128'
//           WF162  codep:0x224c wordp:0xf162 size:0x002a C-string:'WF162'
//           WF18E  codep:0x224c wordp:0xf18e size:0x0038 C-string:'WF18E'
//           WF1C8  codep:0x224c wordp:0xf1c8 size:0x001c C-string:'WF1C8'
//           WF1E6  codep:0x224c wordp:0xf1e6 size:0x004c C-string:'WF1E6'
//           WF234  codep:0x224c wordp:0xf234 size:0x0018 C-string:'WF234'
//           WF24E  codep:0x224c wordp:0xf24e size:0x0030 C-string:'WF24E'
//           WF280  codep:0x224c wordp:0xf280 size:0x002e C-string:'WF280'
//            RUGS  codep:0x1d29 wordp:0xf2b7 size:0x0020 C-string:'RUGS'
//           WF2D9  codep:0x224c wordp:0xf2d9 size:0x0012 C-string:'WF2D9'
//            SETC  codep:0x224c wordp:0xf2f4 size:0x0014 C-string:'SETC'
//           WF30A  codep:0x224c wordp:0xf30a size:0x000e C-string:'WF30A'
//           WF31A  codep:0x224c wordp:0xf31a size:0x0010 C-string:'WF31A'
//          CLIST1  codep:0x1d29 wordp:0xf335 size:0x0014 C-string:'CLIST1'
//          CLIST2  codep:0x1d29 wordp:0xf354 size:0x0014 C-string:'CLIST2'
//          CLIST3  codep:0x1d29 wordp:0xf373 size:0x0014 C-string:'CLIST3'
//           WF389  codep:0x224c wordp:0xf389 size:0x0014 C-string:'WF389'
//          (SAND)  codep:0x1d29 wordp:0xf3a8 size:0x0010 C-string:'_ro_SAND_rc_'
//           WF3BA  codep:0x224c wordp:0xf3ba size:0x0052 C-string:'WF3BA'
//           WF40E  codep:0x224c wordp:0xf40e size:0x000c C-string:'WF40E'
//           WF41C  codep:0x224c wordp:0xf41c size:0x0016 C-string:'WF41C'
//           WF434  codep:0x224c wordp:0xf434 size:0x0012 C-string:'WF434'
//        (TERRAIN  codep:0x4a4f wordp:0xf453 size:0x0018 C-string:'_ro_TERRAIN'
//           WF46D  codep:0x224c wordp:0xf46d size:0x0008 C-string:'WF46D'
//        PLAN-RUL  codep:0x224c wordp:0xf482 size:0x0000 C-string:'PLAN_dash_RUL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_PEAK; // PEAK
extern const unsigned short int pp_P_dash_COLOR; // P-COLOR
extern const unsigned short int pp_P_dash_PHRAS; // P-PHRAS
extern const unsigned short int pp_P_dash_CARP; // P-CARP
extern const unsigned short int pp_O_dash_COLOR; // O-COLOR
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _co_(); // ,
void PICK(); // PICK
void D_eq_(); // D=
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IFIND(); // IFIND
void StoreXYSEED(); // !XYSEED
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _1_dot_5_at_(); // 1.5@
void _ro_SLIPPER_rc_(); // (SLIPPER)
void CI(); // CI
void LO_dash_MASS(); // LO-MASS
void HI_dash_MASS(); // HI-MASS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_SUBHYDRO = 0xf0af; // SUBHYDRO size: 5
// {0x01, 0x02, 0x03, 0x04, 0x00}

const unsigned short int pp_TEMPHYDR = 0xf0c1; // TEMPHYDR size: 7
// {0x05, 0x06, 0x07, 0x08, 0x00, 0x05, 0x05}

const unsigned short int pp_INFHYDRO = 0xf0d5; // INFHYDRO size: 7
// {0x09, 0x0a, 0x0b, 0x0c, 0x07, 0x0d, 0x00}

const unsigned short int pp_SUBATMO = 0xf0e8; // SUBATMO size: 5
// {0x0e, 0x0c, 0x07, 0x06, 0x00}

const unsigned short int pp_TEMPATMO = 0xf0fa; // TEMPATMO size: 9
// {0x0f, 0x10, 0x11, 0x0f, 0x12, 0x13, 0x14, 0x00, 0x0f}

const unsigned short int pp_INFATMO = 0xf10f; // INFATMO size: 7
// {0x0e, 0x15, 0x16, 0x0c, 0x07, 0x0d, 0x00}

const unsigned short int pp_RUGS = 0xf2b7; // RUGS size: 32
// {0x01, 0x00, 0x00, 0xe9, 0x01, 0x00, 0x15, 0xe9, 0x01, 0x00, 0x04, 0xc7, 0x01, 0x00, 0x2b, 0xe9, 0x01, 0x00, 0x2c, 0xd9, 0x01, 0x00, 0x00, 0xd0, 0x01, 0x00, 0xa4, 0xce, 0x01, 0x00, 0xdc, 0xcf}

const unsigned short int pp_CLIST1 = 0xf335; // CLIST1 size: 20
// {0x01, 0x00, 0x41, 0xe5, 0x01, 0x00, 0xce, 0xe7, 0x01, 0x00, 0x00, 0xe8, 0x01, 0x00, 0x2d, 0xe8, 0x01, 0x00, 0x56, 0xe8}

const unsigned short int pp_CLIST2 = 0xf354; // CLIST2 size: 20
// {0x01, 0x00, 0x64, 0xe5, 0x01, 0x00, 0x9a, 0xe8, 0x01, 0x00, 0xfc, 0xe4, 0x01, 0x00, 0xca, 0xe3, 0x01, 0x00, 0x83, 0xe8}

const unsigned short int pp_CLIST3 = 0xf373; // CLIST3 size: 20
// {0x01, 0x00, 0x53, 0xe5, 0x01, 0x00, 0x18, 0xe8, 0x01, 0x00, 0x43, 0xe8, 0x01, 0x00, 0x6f, 0xe8, 0x01, 0x00, 0x64, 0xe5}

const unsigned short int pp__ro_SAND_rc_ = 0xf3a8; // (SAND) size: 16
// {0x01, 0x00, 0x24, 0xe7, 0x01, 0x00, 0x3a, 0xe7, 0x01, 0x00, 0x69, 0xe7, 0x01, 0x00, 0x51, 0xe7}


const unsigned short int cc_WEC16 = 0xec16; // WEC16
const unsigned short int cc_WEC1A = 0xec1a; // WEC1A
const unsigned short int cc_WEC1E = 0xec1e; // WEC1E


// 0xec12: db 0x8b 0x00 '  '

// ================================================
// 0xec14: WORD 'WEC16' codep=0x2214 wordp=0xec16
// ================================================
// 0xec16: dw 0x0020

// ================================================
// 0xec18: WORD 'WEC1A' codep=0x2214 wordp=0xec1a
// ================================================
// orphan
// 0xec1a: dw 0x0043

// ================================================
// 0xec1c: WORD 'WEC1E' codep=0x2214 wordp=0xec1e
// ================================================
// orphan
// 0xec1e: dw 0x0044

// ================================================
// 0xec20: WORD 'WEC22' codep=0x73ea wordp=0xec22
// ================================================
LoadDataType WEC22 = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xec28: WORD 'WEC2A' codep=0x73ea wordp=0xec2a
// ================================================
LoadDataType WEC2A = {PLANETIDX, 0x0d, 0x01, 0x16, 0x658f};

// ================================================
// 0xec30: WORD 'WEC32' codep=0x73ea wordp=0xec32
// ================================================
LoadDataType WEC32 = {PLANETIDX, 0x0e, 0x01, 0x16, 0x658f};

// ================================================
// 0xec38: WORD 'WEC3A' codep=0x73ea wordp=0xec3a
// ================================================
LoadDataType WEC3A = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xec40: WORD 'WEC42' codep=0x73ea wordp=0xec42
// ================================================
LoadDataType WEC42 = {PLANETIDX, 0x00, 0x01, 0x16, 0x658f};

// ================================================
// 0xec48: WORD 'WEC4A' codep=0x73ea wordp=0xec4a
// ================================================
LoadDataType WEC4A = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xec50: WORD 'WEC52' codep=0x73ea wordp=0xec52
// ================================================
LoadDataType WEC52 = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xec58: WORD 'SURFTYPE' codep=0x73ea wordp=0xec5a
// ================================================
LoadDataType SURFTYPE = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xec60: WORD 'WEC62' codep=0x73ea wordp=0xec62
// ================================================
LoadDataType WEC62 = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xec68: WORD 'WEC6A' codep=0x73ea wordp=0xec6a
// ================================================
LoadDataType WEC6A = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xec70: WORD 'ATMO.ACTIVITY' codep=0x73ea wordp=0xec72
// ================================================
LoadDataType ATMO_dot_ACTIVITY = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xec78: WORD 'ATMO.DENSITY' codep=0x73ea wordp=0xec7a
// ================================================
LoadDataType ATMO_dot_DENSITY = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xec80: WORD 'WEC82' codep=0x73ea wordp=0xec82
// ================================================
LoadDataType WEC82 = {PLANETIDX, 0x14, 0x01, 0x16, 0x658f};

// ================================================
// 0xec88: WORD 'WEC8A' codep=0x73ea wordp=0xec8a
// ================================================
LoadDataType WEC8A = {PLANETIDX, 0x15, 0x01, 0x16, 0x658f};

// ================================================
// 0xec90: WORD 'WEC92' codep=0x73ea wordp=0xec92
// ================================================
LoadDataType WEC92 = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xec98: WORD 'WEC9A' codep=0x224c wordp=0xec9a
// ================================================
// orphan

void WEC9A() // WEC9A
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xeca2: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xecaf: WORD 'WECB1' codep=0x224c wordp=0xecb1 params=0 returns=1
// ================================================

void WECB1() // WECB1
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecbb: WORD 'WECBD' codep=0x224c wordp=0xecbd params=0 returns=1
// ================================================

void WECBD() // WECBD
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xecc7: WORD 'WECC9' codep=0x224c wordp=0xecc9 params=3 returns=1
// ================================================

void WECC9() // WECC9
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  _dash_(); // -
  Push(a); // R>
  Push(0x0100);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xecdd: WORD 'WECDF' codep=0x224c wordp=0xecdf
// ================================================

void WECDF() // WECDF
{
  WECB1(); // WECB1
  _ro_SLIPPER_rc_(); // (SLIPPER)
}


// ================================================
// 0xece5: WORD 'WECE7' codep=0x224c wordp=0xece7
// ================================================

void WECE7() // WECE7
{
  do
  {
    WECDF(); // WECDF
  } while(Pop() == 0);
  WECC9(); // WECC9
}


// ================================================
// 0xecf1: WORD 'WECF3' codep=0x744d wordp=0xecf3
// ================================================
IFieldType WECF3 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xecf6: WORD 'WECF8' codep=0x224c wordp=0xecf8
// ================================================

void WECF8() // WECF8
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_WEC16)); // WEC16
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0);
  while(1)
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==Read16(cc_WEC16)?1:0); //  WEC16 =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    CI(); // CI
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    INEXT(); // INEXT
  }
}


// ================================================
// 0xed2c: WORD 'WED2E' codep=0x224c wordp=0xed2e params=0 returns=1
// ================================================

void WED2E() // WED2E
{
  unsigned short int i, imax, a;
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WECF8(); // WECF8
    Push(0);
    ICLOSE(); // ICLOSE
    Push(Read16(0x63ef+WECF3.offset)&0xFF); // WECF3<IFIELD> C@

    i = 1;
    imax = 9;
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push(2);
      MOD(); // MOD
      if (Pop() != 0)
      {
        SWAP(); // SWAP
        Push(Pop() + 1); //  1+
        Push(3);
        PICK(); // PICK
        OVER(); // OVER
        Push((Pop()==Pop())?1:0); // =
        if (Pop() != 0)
        {
          Push(i); // I
          imax = i; // LEAVE
        }
        SWAP(); // SWAP
      }
      Push(Pop() >> 1); //  2/
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
    a = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Push(a); // R>
    ICLOSE(); // ICLOSE
    return;
  }
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed8c: WORD 'WED8E' codep=0x224c wordp=0xed8e params=0 returns=0
// ================================================

void WED8E() // WED8E
{
  WED2E(); // WED2E
  Push(pp_GLOBALSEED); // GLOBALSEED
  Store_3(); // !_3
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  StoreXYSEED(); // !XYSEED
}


// ================================================
// 0xeda8: WORD 'LO-MASS' codep=0xeca2 wordp=0xedb4
// ================================================
// 0xedb4: db 0x00 0x00 0x01 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x65 0x00 0x64 0x00 '    2 Z n   e d '

// ================================================
// 0xedc4: WORD 'HI-MASS' codep=0xeca2 wordp=0xedd0
// ================================================
// 0xedd0: db 0x00 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x10 0x27 0x66 0x00 0x65 0x00 '  2 Z n    'f e '

// ================================================
// 0xede0: WORD 'WEDE2' codep=0x224c wordp=0xede2
// ================================================

void WEDE2() // WEDE2
{
  LoadData(WEC42); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  LO_dash_MASS(); // LO-MASS
  SWAP(); // SWAP
  HI_dash_MASS(); // HI-MASS
  RRND(); // RRND
  LoadData(WEC4A); // from 'PLANET'
  Store_3(); // !_3
}


// ================================================
// 0xedf6: WORD 'WEDF8' codep=0x224c wordp=0xedf8 params=0 returns=1
// ================================================

void WEDF8() // WEDF8
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset) - 0x007d); // INST-X<IFIELD> @ 0x007d -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(0x63ef+INST_dash_Y.offset) - 0x0064); // INST-Y<IFIELD> @ 0x0064 -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee26: WORD 'WEE28' codep=0x224c wordp=0xee28 params=2 returns=1
// ================================================

void WEE28() // WEE28
{
  unsigned short int a;
  while(1)
  {
    _2DUP(); // 2DUP
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(Pop()==6?1:0); //  6 =
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0xee44: WORD 'WEE46' codep=0x224c wordp=0xee46
// ================================================

void WEE46() // WEE46
{
  Push(1);
  WEDF8(); // WEDF8
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + 5); //  5 +
  Push(0x0017);
  MIN(); // MIN
  _2DUP(); // 2DUP
  WEE28(); // WEE28
  LoadData(WEC22); // from 'PLANET'
  C_ex_(); // C!
  _2DUP(); // 2DUP
  WEE28(); // WEE28
  LoadData(WEC2A); // from 'PLANET'
  C_ex_(); // C!
  WEE28(); // WEE28
  LoadData(WEC32); // from 'PLANET'
  C_ex_(); // C!
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0017?1:0); //  0x0017 =
  if (Pop() == 0) return;
  Push(6);
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  LoadData(WEC22); // from 'PLANET'
  C_ex_(); // C!
  LoadData(WEC2A); // from 'PLANET'
  C_ex_(); // C!
  LoadData(WEC32); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xee90: WORD 'WEE92' codep=0x224c wordp=0xee92
// ================================================

void WEE92() // WEE92
{
  LoadData(WEC4A); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0046);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(5);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WECBD(); // WECBD
    Push(0x0032);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
  }
  Push(Read16(regsp)); // DUP
  Push(2);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WECBD(); // WECBD
    Push(0x0032);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Pop() - 1); //  1-
    }
  }
  LoadData(WEC52); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    MAX(); // MAX
  }
  LoadData(ATMO_dot_DENSITY); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xeee6: WORD 'WEEE8' codep=0x224c wordp=0xeee8 params=1 returns=0
// ================================================

void WEEE8() // WEEE8
{
  Push(0x004d);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push(0x004b);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(2);
    return;
  }
  Push(0x0047);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(3);
    return;
  }
  Push(0x0046);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    return;
  }
  Push(0x0041);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(5);
    return;
  }
  Push(0x0042);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(6);
    return;
  }
  Push(0x004f);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(7);
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef78: WORD 'WEF7A' codep=0x224c wordp=0xef7a params=0 returns=0
// ================================================

void WEF7A() // WEF7A
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  WEEE8(); // WEEE8
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef88: WORD 'WEF8A' codep=0x224c wordp=0xef8a params=1 returns=1
// ================================================

void WEF8A() // WEF8A
{
  Push(-2);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    return;
  }
  Push(-1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(3);
    return;
  }
  Push(0);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(2);
    return;
  }
  Push(1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(5);
  } else
  {
    Push(0);
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xefe8: WORD 'WEFEA' codep=0x224c wordp=0xefea
// ================================================

void WEFEA() // WEFEA
{
  WED2E(); // WED2E
  Push(Read16(regsp)); // DUP
  WEF7A(); // WEF7A
  _dash_(); // -
  WEF8A(); // WEF8A
  SWAP(); // SWAP
  LoadData(ATMO_dot_DENSITY); // from 'PLANET'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() != 0)
  {
    Push(4);
  } else
  {
    Push(2);
  }
  _dash_(); // -
  WEF7A(); // WEF7A
  _dash_(); // -
  WEF8A(); // WEF8A
  LoadData(WEC6A); // from 'PLANET'
  C_ex_(); // C!
  LoadData(WEC62); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xf01a: WORD 'WF01C' codep=0x224c wordp=0xf01c
// ================================================

void WF01C() // WF01C
{
  LoadData(ATMO_dot_DENSITY); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(4);
  MIN(); // MIN
  WECBD(); // WECBD
  Push(0x0032);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
  }
  Push(0);
  MAX(); // MAX
  LoadData(ATMO_dot_ACTIVITY); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xf03c: WORD 'WF03E' codep=0x224c wordp=0xf03e
// ================================================

void WF03E() // WF03E
{
  LoadData(WEC4A); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0064);
  _slash_(); // /
  Push(6);
  MIN(); // MIN
  Push(1);
  MAX(); // MAX
  Push(6);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  LoadData(WEC8A); // from 'PLANET'
  C_ex_(); // C!
  Push(Pop() + 8); //  8 +
  Push(0x000d);
  MIN(); // MIN
  LoadData(WEC82); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xf06c: WORD 'WF06E' codep=0x224c wordp=0xf06e
// ================================================

void WF06E() // WF06E
{
  Push(0x001e);
  Push(pp_PEAK); // PEAK
  Store_3(); // !_3
  Push(0);
  Push(0x00ff);
  WECE7(); // WECE7
  LoadData(WEC3A); // from 'PLANET'
  C_ex_(); // C!
}


// ================================================
// 0xf084: WORD 'WF086' codep=0x224c wordp=0xf086
// ================================================

void WF086() // WF086
{
  WEE46(); // WEE46
  WEE92(); // WEE92
  WF01C(); // WF01C
  WF03E(); // WF03E
  WEFEA(); // WEFEA
}


// ================================================
// 0xf092: WORD 'WF094' codep=0x224c wordp=0xf094
// ================================================

void WF094() // WF094
{
  Push(0);
  LoadData(WEC52); // from 'PLANET'
  C_ex_(); // C!
  WEDE2(); // WEDE2
  WF06E(); // WF06E
  WF086(); // WF086
}


// ================================================
// 0xf0a2: WORD 'SUBHYDRO' codep=0x1d29 wordp=0xf0af
// ================================================
// 0xf0af: db 0x01 0x02 0x03 0x04 0x00 '     '

// ================================================
// 0xf0b4: WORD 'TEMPHYDR' codep=0x1d29 wordp=0xf0c1
// ================================================
// 0xf0c1: db 0x05 0x06 0x07 0x08 0x00 0x05 0x05 '       '

// ================================================
// 0xf0c8: WORD 'INFHYDRO' codep=0x1d29 wordp=0xf0d5
// ================================================
// 0xf0d5: db 0x09 0x0a 0x0b 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf0dc: WORD 'SUBATMO' codep=0x1d29 wordp=0xf0e8
// ================================================
// 0xf0e8: db 0x0e 0x0c 0x07 0x06 0x00 '     '

// ================================================
// 0xf0ed: WORD 'TEMPATMO' codep=0x1d29 wordp=0xf0fa
// ================================================
// 0xf0fa: db 0x0f 0x10 0x11 0x0f 0x12 0x13 0x14 0x00 0x0f '         '

// ================================================
// 0xf103: WORD 'INFATMO' codep=0x1d29 wordp=0xf10f
// ================================================
// 0xf10f: db 0x0e 0x15 0x16 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf116: WORD 'WF118' codep=0x224c wordp=0xf118
// ================================================

void WF118() // WF118
{
  LoadData(WEC6A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEC62); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
}


// ================================================
// 0xf126: WORD 'WF128' codep=0x224c wordp=0xf128
// ================================================

void WF128() // WF128
{
  WF118(); // WF118
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
    Push(5);
    RRND(); // RRND
    Push(pp_SUBHYDRO); // SUBHYDRO
  } else
  {
    Push(Pop()==5?1:0); //  5 =
    if (Pop() != 0)
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_INFHYDRO); // INFHYDRO
    } else
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_TEMPHYDR); // TEMPHYDR
    }
  }
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf160: WORD 'WF162' codep=0x224c wordp=0xf162
// ================================================

void WF162() // WF162
{
  unsigned short int a;
  LoadData(SURFTYPE); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==2?1:0)); //  C@ 2 = NOT
  a = Pop(); // >R
  while(1)
  {
    WF128(); // WF128
    Push(Read16(regsp)); // DUP
    Push(Read16(a)); // R@
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
  Push(pp_HYDRO); // HYDRO
  Store_3(); // !_3
}


// ================================================
// 0xf18c: WORD 'WF18E' codep=0x224c wordp=0xf18e
// ================================================

void WF18E() // WF18E
{
  WF118(); // WF118
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
    Push(5);
    RRND(); // RRND
    Push(pp_SUBATMO); // SUBATMO
  } else
  {
    Push(Pop()==5?1:0); //  5 =
    if (Pop() != 0)
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_INFATMO); // INFATMO
    } else
    {
      Push(0);
      Push(9);
      RRND(); // RRND
      Push(pp_TEMPATMO); // TEMPATMO
    }
  }
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf1c6: WORD 'WF1C8' codep=0x224c wordp=0xf1c8
// ================================================

void WF1C8() // WF1C8
{
  LoadData(ATMO_dot_DENSITY); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    do
    {
      WF18E(); // WF18E
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
  } else
  {
    Push(0);
  }
  Push(pp_ATMO); // ATMO
  Store_3(); // !_3
}


// ================================================
// 0xf1e4: WORD 'WF1E6' codep=0x224c wordp=0xf1e6
// ================================================

void WF1E6() // WF1E6
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0012?1:0); //  0x0012 =
  SWAP(); // SWAP
  Push(Pop()==0x0022?1:0); //  0x0022 =
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(5);
    Push(pp_HYDRO); // HYDRO
    Store_3(); // !_3
    Push(0x000f);
    Push(pp_ATMO); // ATMO
    Store_3(); // !_3
    return;
  }
  LoadData(WEC52); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(5);
    Push(pp_HYDRO); // HYDRO
    Store_3(); // !_3
    do
    {
      WF1C8(); // WF1C8
      Push(Read16(pp_ATMO)); // ATMO @
    } while(Pop() == 0);
    return;
  }
  WF162(); // WF162
  WF1C8(); // WF1C8
}


// ================================================
// 0xf232: WORD 'WF234' codep=0x224c wordp=0xf234
// ================================================

void WF234() // WF234
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WEC62); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEC6A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'WF24E' codep=0x224c wordp=0xf24e
// ================================================

void WF24E() // WF24E
{
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x03c0);
    SWAP(); // SWAP
    _dash_(); // -
  }
  Push(0x01e0);
  WF234(); // WF234
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf27e: WORD 'WF280' codep=0x224c wordp=0xf280
// ================================================

void WF280() // WF280
{
  unsigned short int i, imax;
  WF24E(); // WF24E
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(0);
  LoadData(WEC92); // from 'REGIONS'
  Push(Read16(regsp)); // DUP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() | (Read16(i)&0xFF) & 1); //  I C@ 1 AND OR
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf2ae: WORD 'RUGS' codep=0x1d29 wordp=0xf2b7
// ================================================
// 0xf2b7: db 0x01 0x00 0x00 0xe9 0x01 0x00 0x15 0xe9 0x01 0x00 0x04 0xc7 0x01 0x00 0x2b 0xe9 0x01 0x00 0x2c 0xd9 0x01 0x00 0x00 0xd0 0x01 0x00 0xa4 0xce 0x01 0x00 0xdc 0xcf '              +   ,             '

// ================================================
// 0xf2d7: WORD 'WF2D9' codep=0x224c wordp=0xf2d9 params=0 returns=2
// ================================================

void WF2D9() // WF2D9
{
  Push(0);
  Push(8);
  RRND(); // RRND
  Push((Pop() * 2) * 2 + pp_RUGS); //  2* 2* RUGS +
  _2_at_(); // 2@
}


// ================================================
// 0xf2eb: WORD 'SETC' codep=0x224c wordp=0xf2f4
// ================================================
// entry

void SETC() // SETC
{
  WF280(); // WF280
  if (Pop() != 0)
  {
    WF2D9(); // WF2D9
  } else
  {
    Push2Words("0.");
  }
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf308: WORD 'WF30A' codep=0x224c wordp=0xf30a params=0 returns=0
// ================================================

void WF30A() // WF30A
{
  Push2Words("0.");
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex_(); // 1.5!
  Push2Words("0.");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf318: WORD 'WF31A' codep=0x224c wordp=0xf31a params=1 returns=2
// ================================================

void WF31A() // WF31A
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push((Pop() * 2) * 2); //  2* 2*
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf32a: WORD 'CLIST1' codep=0x1d29 wordp=0xf335
// ================================================
// 0xf335: db 0x01 0x00 0x41 0xe5 0x01 0x00 0xce 0xe7 0x01 0x00 0x00 0xe8 0x01 0x00 0x2d 0xe8 0x01 0x00 0x56 0xe8 '  A           -   V '

// ================================================
// 0xf349: WORD 'CLIST2' codep=0x1d29 wordp=0xf354
// ================================================
// 0xf354: db 0x01 0x00 0x64 0xe5 0x01 0x00 0x9a 0xe8 0x01 0x00 0xfc 0xe4 0x01 0x00 0xca 0xe3 0x01 0x00 0x83 0xe8 '  d                 '

// ================================================
// 0xf368: WORD 'CLIST3' codep=0x1d29 wordp=0xf373
// ================================================
// 0xf373: db 0x01 0x00 0x53 0xe5 0x01 0x00 0x18 0xe8 0x01 0x00 0x43 0xe8 0x01 0x00 0x6f 0xe8 0x01 0x00 0x64 0xe5 '  S       C   o   d '

// ================================================
// 0xf387: WORD 'WF389' codep=0x224c wordp=0xf389 params=0 returns=0
// ================================================

void WF389() // WF389
{
  Push(0xe6a9); Push(0x0001); // 'CRACKED PLAINS AND HILLS OF'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex_(); // 1.5!
  Push(pp_CLIST1); // CLIST1
  WF31A(); // WF31A
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf39d: WORD '(SAND)' codep=0x1d29 wordp=0xf3a8
// ================================================
// 0xf3a8: db 0x01 0x00 0x24 0xe7 0x01 0x00 0x3a 0xe7 0x01 0x00 0x69 0xe7 0x01 0x00 0x51 0xe7 '  $   :   i   Q '

// ================================================
// 0xf3b8: WORD 'WF3BA' codep=0x224c wordp=0xf3ba params=0 returns=0
// ================================================

void WF3BA() // WF3BA
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_CLIST3); // CLIST3
    WF31A(); // WF31A
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_ex_(); // 1.5!
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(0x001f);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0);
      Push(4);
      RRND(); // RRND
      Push((Pop() * 2) * 2 + pp__ro_SAND_rc_); //  2* 2* (SAND) +
      _2_at_(); // 2@
    } else
    {
      Push(0xe690); Push(0x0001); // 'ROCK AND DIRT'
    }
  } else
  {
    Push(0xe65e); Push(0x0001); // 'CRATERED ROCK AND DUST'
    Push2Words("0.");
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_ex_(); // 1.5!
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf40c: WORD 'WF40E' codep=0x224c wordp=0xf40e params=0 returns=0
// ================================================

void WF40E() // WF40E
{
  Push(pp_CLIST2); // CLIST2
  WF31A(); // WF31A
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_ex_(); // 1.5!
  WF3BA(); // WF3BA
}


// ================================================
// 0xf41a: WORD 'WF41C' codep=0x224c wordp=0xf41c params=0 returns=0
// ================================================

void WF41C() // WF41C
{
  Push(0xe6d0); Push(0x0001); // 'VOLCANIC ROCK, STEAMING VENTS,'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex_(); // 1.5!
  Push(0xe6fa); Push(0x0001); // 'BOILING POOLS AND FLOWING LAVA'
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf432: WORD 'WF434' codep=0x224c wordp=0xf434 params=0 returns=0
// ================================================

void WF434() // WF434
{
  Push(0xe797); Push(0x0001); // 'SMOOTH AND FEATURELESS'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf446: WORD '(TERRAIN' codep=0x4a4f wordp=0xf453
// ================================================

void _ro_TERRAIN() // (TERRAIN
{
  switch(Pop()) // (TERRAIN
  {
  case 1:
    WF30A(); // WF30A
    break;
  case 2:
    WF40E(); // WF40E
    break;
  case 3:
    WF389(); // WF389
    break;
  case 4:
    WF41C(); // WF41C
    break;
  case 5:
    WF3BA(); // WF3BA
    break;
  default:
    WF434(); // WF434
    break;

  }
}

// ================================================
// 0xf46b: WORD 'WF46D' codep=0x224c wordp=0xf46d
// ================================================

void WF46D() // WF46D
{
  LoadData(SURFTYPE); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_TERRAIN(); // (TERRAIN case
}


// ================================================
// 0xf475: WORD 'PLAN-RUL' codep=0x224c wordp=0xf482
// ================================================
// entry

void PLAN_dash_RUL() // PLAN-RUL
{
  WED8E(); // WED8E
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0011);
  _gt_(); // >
  if (Pop() != 0)
  {
    WF086(); // WF086
  } else
  {
    WF094(); // WF094
  }
  WF1E6(); // WF1E6
  WF46D(); // WF46D
  ICLOSE(); // ICLOSE
}

// 0xf4a6: db 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x91 0x75 0x60 0x16 0x04 0x00 0xbf 0xeb 0x91 0x75 0xc9 0x79 0x90 0x16 0x00 0x00 0x87 0x4f 0x50 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x03 0x00 0x48 0x3a 0x00 0x00 0x31 0x31 0x33 0x39 0x7a 0xf4 0x02 0x00 0x09 0x13 0xd6 0xf4 0x86 0x28 0x55 0x2d 0x4f 0x50 0xa9 0x4c 0x22 0x35 0xe6 0xcc 0x5c 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x5d 0x17 0xe8 0x03 0xef 0x2a 0x78 0xf4 0x38 0xaa 0xf2 0x0e 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x0c 0x00 0xac 0x5b 0x83 0x6d 0x8a 0xe5 0x3a 0xac 0x32 0x0e 0x20 0x0f 0x50 0xaa 0xfa 0x15 0x08 0x00 0xac 0x5b 0xae 0x0b 0xde 0xf4 0xfa 0x15 0xda 0xff 0x90 0x16 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'SETTER__________________________ u`      u y     OP-CAS OJ  H:  1139z        (U-OP L"5  \      ]    *x 8   2        [ m  : 2   P      [          OP-VOC__________________________          '

