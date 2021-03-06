// ====== OVERLAY 'BLT-OV' ======
// store offset = 0xefe0
// overlay size   = 0x0580

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEFF6  codep:0x1d29 wordp:0xeff6 size:0x000e C-string:'WEFF6'
//           WF006  codep:0x1d29 wordp:0xf006 size:0x0013 C-string:'WF006'
//           WF01B  codep:0x1d29 wordp:0xf01b size:0x0029 C-string:'WF01B'
//           WF046  codep:0x224c wordp:0xf046 size:0x0010 C-string:'WF046'
//           WF058  codep:0x224c wordp:0xf058 size:0x000e C-string:'WF058'
//           WF068  codep:0x1d29 wordp:0xf068 size:0x0011 C-string:'WF068'
//           WF07B  codep:0x224c wordp:0xf07b size:0x0074 C-string:'WF07B'
//           WF0F1  codep:0x224c wordp:0xf0f1 size:0x001e C-string:'WF0F1'
//           WF111  codep:0x224c wordp:0xf111 size:0x0018 C-string:'WF111'
//           WF12B  codep:0x224c wordp:0xf12b size:0x0018 C-string:'WF12B'
//           WF145  codep:0x224c wordp:0xf145 size:0x0032 C-string:'WF145'
//           WF179  codep:0x224c wordp:0xf179 size:0x0010 C-string:'WF179'
//            LDAP  codep:0x224c wordp:0xf192 size:0x0044 C-string:'LDAP'
//           WF1D8  codep:0x224c wordp:0xf1d8 size:0x0026 C-string:'WF1D8'
//           WF200  codep:0x224c wordp:0xf200 size:0x000e C-string:'WF200'
//           WF210  codep:0x224c wordp:0xf210 size:0x0010 C-string:'WF210'
//           WF222  codep:0x224c wordp:0xf222 size:0x0036 C-string:'WF222'
//           WF25A  codep:0x224c wordp:0xf25a size:0x000e C-string:'WF25A'
//           WF26A  codep:0x224c wordp:0xf26a size:0x0014 C-string:'WF26A'
//           WF280  codep:0x224c wordp:0xf280 size:0x0088 C-string:'WF280'
//           WF30A  codep:0x224c wordp:0xf30a size:0x0044 C-string:'WF30A'
//            SETB  codep:0x224c wordp:0xf357 size:0x0036 C-string:'SETB'
//            ESTA  codep:0x2214 wordp:0xf396 size:0x000d C-string:'ESTA'
//            VSTA  codep:0x2214 wordp:0xf3ac size:0x000d C-string:'VSTA'
//           WF3BB  codep:0x224c wordp:0xf3bb size:0x005a C-string:'WF3BB'
//            LDSY  codep:0x224c wordp:0xf41e size:0x003e C-string:'LDSY'
//            @.HY  codep:0x224c wordp:0xf465 size:0x005c C-string:'Get_dot_HY'
//            .TPI  codep:0x224c wordp:0xf4ca size:0x0036 C-string:'DrawTPI'
//            .API  codep:0x224c wordp:0xf509 size:0x0000 C-string:'DrawAPI'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_DS; // DS
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_SKIPPED; // SKIPPED
extern const unsigned short int pp_CANSKIP; // CANSKIP
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_P_slash_B; // P/B
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_LSYSEG; // LSYSEG
extern const unsigned short int pp_MSYSEG; // MSYSEG
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_PIC_h_; // PIC^
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp_PCGA; // PCGA
extern const unsigned short int pp_SRC; // SRC
extern const unsigned short int pp_DST; // DST
extern const unsigned short int pp_SEGME; // SEGME
extern const unsigned short int pp_PLZ; // PLZ
void MAX(); // MAX
void _gt_TIB(); // >TIB
void NAM(); // NAM
void TYP(); // TYP
void RECSIZE(); // RECSIZE
void RELREC(); // RELREC
void DOS_dash_DTA(); // DOS-DTA
void READ_dash_RA(); // READ-RA
void USING(); // USING
void _ro_LDS_rc_(); // (LDS)
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMWIDE(); // BMWIDE
void BMBYTES(); // BMBYTES
void BMHIGH(); // BMHIGH
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void MOUNTB(); // MOUNTB
void FILE_st_(); // FILE<
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void Get_gt_C_plus_S(); // @>C+S
void SAVE_dash_OV(); // SAVE-OV
void PAD_v_16(); // PAD|16
void PAD_gt_SEG(); // PAD>SEG
void IsVGA(); // ?VGA
void IsCGA(); // ?CGA
void DARK(); // DARK
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void DrawRAW(); // .RAW
void V_gt_DISPL(); // V>DISPL
void DOS(); // DOS
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _4_star_(); // 4*
void L_at_(); // L@
void LC_at_(); // LC@
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void GRCALL(); // GRCALL
void _gt_PLANES(); // >PLANES


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEFF6 = 0xeff6; // WEFF6 size: 14
// {0x0c, 0x0c, 0x08, 0x02, 0x0b, 0x07, 0x04, 0x05, 0x06, 0x03, 0x0a, 0x09, 0x1e, 0x1f}

const unsigned short int pp_WF006 = 0xf006; // WF006 size: 19
// {0x1a, 0x0c, 0x04, 0x11, 0x08, 0x02, 0x12, 0x10, 0x14, 0x0f, 0x0d, 0x16, 0x17, 0x19, 0x1b, 0x18, 0x13, 0x15, 0x0e}

const unsigned short int pp_WF01B = 0xf01b; // WF01B size: 41
// {0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x04, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x00}

const unsigned short int pp_WF068 = 0xf068; // WF068 size: 17
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x29, 0x92, 0x0c, 0xdb, 0x23, 0x5d, 0x17, 0x20}


const unsigned short int cc_ESTA = 0xf396; // ESTA
const unsigned short int cc_VSTA = 0xf3ac; // VSTA


// 0xeff2: db 0x57 0x00 'W '

// ================================================
// 0xeff4: WORD 'WEFF6' codep=0x1d29 wordp=0xeff6
// ================================================
// 0xeff6: db 0x0c 0x0c 0x08 0x02 0x0b 0x07 0x04 0x05 0x06 0x03 0x0a 0x09 0x1e 0x1f '              '

// ================================================
// 0xf004: WORD 'WF006' codep=0x1d29 wordp=0xf006
// ================================================
// 0xf006: db 0x1a 0x0c 0x04 0x11 0x08 0x02 0x12 0x10 0x14 0x0f 0x0d 0x16 0x17 0x19 0x1b 0x18 0x13 0x15 0x0e '                   '

// ================================================
// 0xf019: WORD 'WF01B' codep=0x1d29 wordp=0xf01b
// ================================================
// 0xf01b: db 0x00 0x00 0x01 0x02 0x02 0x02 0x03 0x00 0x04 0x05 0x06 0x06 0x06 0x06 0x06 0x06 0x06 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07 0x08 0x09 0x0a 0x0b 0x0c 0x0d 0x0e 0x0f 0x10 0x11 0x12 0x00 '                                         '

// ================================================
// 0xf044: WORD 'WF046' codep=0x224c wordp=0xf046
// ================================================

void WF046() // WF046
{
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf056: WORD 'WF058' codep=0x224c wordp=0xf058
// ================================================

void WF058() // WF058
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(pp_DTA_1); // DTA_1
  StoreD(); // D!
  DOS_dash_DTA(); // DOS-DTA
}


// ================================================
// 0xf066: WORD 'WF068' codep=0x1d29 wordp=0xf068
// ================================================
// 0xf068: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x29 0x92 0x0c 0xdb 0x23 0x5d 0x17 0x20 ':  ALLOT )   #]  '

// ================================================
// 0xf079: WORD 'WF07B' codep=0x224c wordp=0xf07b params=0 returns=0
// ================================================

void WF07B() // WF07B
{
  unsigned short int i, imax, j, jmax;
  Push(pp_WF068); // WF068
  Push(0x000f);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(pp_WF068); // WF068

  i = 0;
  imax = 8;
  do // (DO)
  {
    Push(i); // I
    DOS(); // DOS
    NAM(); // NAM
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Pop()==Read16(cc_BL)?1:0); //  BL =
    if (Pop() != 0)
    {
      Pop(); // DROP
      imax = i; // LEAVE
    } else
    {
      OVER(); // OVER
      C_ex__2(); // C!_2
      Push(Pop() + 1); //  1+
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(0x002e);
  OVER(); // OVER
  C_ex__2(); // C!_2
  Push(Pop() + 1); //  1+

  j = 0;
  jmax = 3;
  do // (DO)
  {
    Push(j); // I
    DOS(); // DOS
    TYP(); // TYP
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Pop()==Read16(cc_BL)?1:0); //  BL =
    if (Pop() != 0)
    {
      Pop(); // DROP
      jmax = j; // LEAVE
    } else
    {
      OVER(); // OVER
      C_ex__2(); // C!_2
      Push(Pop() + 1); //  1+
    }
    j++;
  } while(j<jmax); // (LOOP)

  Pop(); // DROP
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf0ef: WORD 'WF0F1' codep=0x224c wordp=0xf0f1
// ================================================
// orphan

void WF0F1() // WF0F1
{
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  GetDS(); // @DS
  Push(Read16(cc_DS)); // DS
  Store_2(); // !_2
  PAD_v_16(); // PAD|16
  Push(Read16(cc_BX)); // BX
  Store_2(); // !_2
  Push(9);
  Push(Read16(cc_AX)); // AX
  Store_2(); // !_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xf10f: WORD 'WF111' codep=0x224c wordp=0xf111
// ================================================

void WF111() // WF111
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(Pop() + pp_WEFF6)&0xFF); //  WEFF6 + C@
    BMPAL(); // BMPAL
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf129: WORD 'WF12B' codep=0x224c wordp=0xf12b
// ================================================

void WF12B() // WF12B
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(Pop() + pp_WF006)&0xFF); //  WF006 + C@
    BMPAL(); // BMPAL
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf143: WORD 'WF145' codep=0x224c wordp=0xf145
// ================================================

void WF145() // WF145
{
  unsigned short int a;
  WF07B(); // WF07B
  _gt_TIB(); // >TIB
  USING(); // USING
  Push(Read16(pp_SKIPPED)); // SKIPPED @
  a = Pop(); // >R
  RELREC(); // RELREC
  Store_2(); // !_2
  RELREC(); // RELREC
  Push(Pop() + 2); //  2+
  _099(); // 099
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  WF058(); // WF058
  READ_dash_RA(); // READ-RA
  Pop(); // DROP
  Push(pp_WF068); // WF068
  Push(0x000f);
  _gt_TIB(); // >TIB
  USING(); // USING
  Push(a); // R>
  Push(pp_SKIPPED); // SKIPPED
  Store_2(); // !_2
}


// ================================================
// 0xf177: WORD 'WF179' codep=0x224c wordp=0xf179 params=0 returns=1
// ================================================

void WF179() // WF179
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Read16(Pop() + pp_WF01B)&0xFF); //  WF01B + C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf189: WORD 'LDAP' codep=0x224c wordp=0xf192
// ================================================
// entry

void LDAP() // LDAP
{
  Push(0x0c1c);
  WF179(); // WF179
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("trpics.vga");
  } else
  {
    SET_STR_AS_PARAM("trpics.ega");
  }
  WF145(); // WF145
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(Read16(pp_PIC_h_)); // PIC^ @
  Push(0);
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  WF179(); // WF179
  WF12B(); // WF12B
}


// ================================================
// 0xf1d6: WORD 'WF1D8' codep=0x224c wordp=0xf1d8 params=0 returns=1
// ================================================

void WF1D8() // WF1D8
{
  unsigned short int a;
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); //  @
  Push(Read16(pp_P_slash_B)); // P/B @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() - 1); //  1-
  Push(Pop() + Pop()); // +
  Push(a); // R>
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() * Pop()); // *
  Push(pp_PLZ); // PLZ
  Store_2(); // !_2
}


// ================================================
// 0xf1fe: WORD 'WF200' codep=0x224c wordp=0xf200 params=0 returns=0
// ================================================

void WF200() // WF200
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(3);
  L_at_(); // L@
  BMWIDE(); // BMWIDE
  Store_2(); // !_2
}


// ================================================
// 0xf20e: WORD 'WF210' codep=0x224c wordp=0xf210 params=0 returns=0
// ================================================

void WF210() // WF210
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0x000a);
  LC_at_(); // LC@
  BMHIGH(); // BMHIGH
  C_ex__2(); // C!_2
}


// ================================================
// 0xf220: WORD 'WF222' codep=0x224c wordp=0xf222 params=0 returns=1
// ================================================

void WF222() // WF222
{
  WF200(); // WF200
  WF210(); // WF210
  WF1D8(); // WF1D8
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0x000d);
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    Push(2);
    Push(Read16(regsp)); // DUP
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMOFF(); // BMOFF
    Store_2(); // !_2
    WF046(); // WF046
    Push(pp_SEGME); // SEGME
    Store_2(); // !_2
  }
  Push(0);
  Push(pp_BMAP + 0x000c); // BMAP 0x000c +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf258: WORD 'WF25A' codep=0x224c wordp=0xf25a params=1 returns=1
// ================================================

void WF25A() // WF25A
{
  Push(Read16((Pop() & 0x000f) + pp_PCGA)&0xFF); //  0x000f AND PCGA + C@
}


// ================================================
// 0xf268: WORD 'WF26A' codep=0x224c wordp=0xf26a params=0 returns=2
// ================================================

void WF26A() // WF26A
{
  BMSEG(); // BMSEG
  Push(Read16(Pop())); //  @
  Push(Read16(pp_SRC)); // SRC @
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(pp_SRC); // SRC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf27e: WORD 'WF280' codep=0x224c wordp=0xf280 params=0 returns=0
// ================================================

void WF280() // WF280
{
  unsigned short int i, imax, a, b, c, d;
  BMOFF(); // BMOFF
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(pp_DST); // DST
  Store_2(); // !_2
  Push(pp_SRC); // SRC
  Store_2(); // !_2
  BMBYTES(); // BMBYTES
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1 >> 1); //  1+ 2/
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH

  i = 0;
  imax = Read16(Pop()); //  @
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    do
    {
      WF26A(); // WF26A
      Push(Pop() >> 4); //  16/
      WF25A(); // WF25A
      Push(Pop() * 0x0040); //  0x0040 *
      a = Pop(); // >R
      WF25A(); // WF25A
      Push(Pop() >> 4); //  16*
      b = Pop(); // >R
      Push(Pop() - 1); //  1-
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        WF26A(); // WF26A
        Push(Pop() >> 4); //  16/
        WF25A(); // WF25A
        _4_star_(); // 4*
        c = Pop(); // >R
        WF25A(); // WF25A
      } else
      {
        Push2Words("NULL");
        d = Pop(); // >R
      }
      Push(((Pop() | c) | b) | a); //  R> OR R> OR R> OR
      BMSEG(); // BMSEG
      Push(Read16(Pop())); //  @
      Push(Read16(pp_DST)); // DST @
      LC_ex_(); // LC!
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      Push(Pop() - 1); //  1-
      Push(0);
      MAX(); // MAX
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      Push(Pop()==0?1:0); //  0=
    } while(Pop() == 0);
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf308: WORD 'WF30A' codep=0x224c wordp=0xf30a
// ================================================

void WF30A() // WF30A
{
  unsigned short int i, imax, j, jmax;
  BMHIGH(); // BMHIGH

  i = 0;
  imax = Read16(Pop())&0xFF; //  C@
  do // (DO)
  {
    Push(Read16(pp_SRC)); // SRC @
    Push(Read16(pp_DST)); // DST @
    BMBYTES(); // BMBYTES
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP

    j = 0;
    jmax = Pop();
    do // (DO)
    {
      _gt_PLANES(); // >PLANES
      Push(4);
      Push(pp_SRC); // SRC
      _plus__ex__2(); // +!_2
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      j++;
    } while(j<jmax); // (LOOP)

    Push(Pop() + Pop()); // +
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMWIDE(); // BMWIDE
    Push(Read16(Pop()) >> 1); //  @ 2/
    Push(Pop() + Pop()); // +
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf34e: WORD 'SETB' codep=0x224c wordp=0xf357
// ================================================
// entry

void SETB() // SETB
{
  WF222(); // WF222
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    WF30A(); // WF30A
    WF046(); // WF046
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  BMOFF(); // BMOFF
  Store_2(); // !_2
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push2Words("NULL");
  BMWIDE(); // BMWIDE
  Push(Pop() + 2); //  2+
  StoreD(); // D!
  IsCGA(); // ?CGA
  if (Pop() == 0) return;
  WF280(); // WF280
}


// ================================================
// 0xf38d: WORD 'ESTA' codep=0x2214 wordp=0xf396
// ================================================
// 0xf396: dw 0xf399
// 0xf398: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 ' stars.ega '

// ================================================
// 0xf3a3: WORD 'VSTA' codep=0x2214 wordp=0xf3ac
// ================================================
// 0xf3ac: dw 0xf3af
// 0xf3ae: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 ' stars.vga '

// ================================================
// 0xf3b9: WORD 'WF3BB' codep=0x224c wordp=0xf3bb
// ================================================

void WF3BB() // WF3BB
{
  unsigned short int a;
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x060d);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  a = Pop(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  Store_2(); // !_2
  Push(Read16(a)); // R@
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push(0);
  BMPAL(); // BMPAL
  Push(Pop() - 1); //  1-
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(Read16(a)); // R@
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    WF046(); // WF046
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  Push(a); // R>
  Push(0x0012);
  Push(0x078a);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf415: WORD 'LDSY' codep=0x224c wordp=0xf41e
// ================================================
// entry

void LDSY() // LDSY
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_VSTA)); // VSTA
  } else
  {
    Push(Read16(cc_ESTA)); // ESTA
  }
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
  Push(Read16(pp_LSYSEG)); // LSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x04e2);
  WF3BB(); // WF3BB
  Push(Read16(pp_MSYSEG)); // MSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x018d);
  WF3BB(); // WF3BB
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(Read16(regsp)); // DUP
  Push(0);
  WF3BB(); // WF3BB
}


// ================================================
// 0xf45c: WORD '@.HY' codep=0x224c wordp=0xf465
// ================================================
// entry

void Get_dot_HY() // @.HY
{
  unsigned short int a;
  Push(pp_CANSKIP); // CANSKIP
  ON_2(); // ON_2
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(Read16(regsp)); // DUP
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  Push(Pop() - 1); //  1-
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x21cd);
  SWAP(); // SWAP
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("cpics.vga");
  } else
  {
    SET_STR_AS_PARAM("cpics.ega");
  }
  WF145(); // WF145
  SETB(); // SETB
  Push(a); // R>
  WF111(); // WF111
  Push(4);
  Push(0x00bf);
  DrawRAW(); // .RAW
  Push(0);
  BMPAL(); // BMPAL
  C_ex__2(); // C!_2
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf4c1: WORD '.TPI' codep=0x224c wordp=0xf4ca
// ================================================
// entry

void DrawTPI() // .TPI
{
  Push(pp_CANSKIP); // CANSKIP
  ON_2(); // ON_2
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0021); //  0x0021 +
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  Push(0x0c1c);
  SWAP(); // SWAP
  SET_STR_AS_PARAM("strpics.raw");
  WF145(); // WF145
  SETB(); // SETB
  Push(4);
  Push(0x00c5);
  DrawRAW(); // .RAW
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf500: WORD '.API' codep=0x224c wordp=0xf509
// ================================================
// entry

void DrawAPI() // .API
{
  unsigned short int a;
  Push(Read16(Pop() + pp_WF01B)&0xFF); //  WF01B + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x000f); //  0x000f +
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  a = Pop(); // >R
  Push(Read16(pp_PIC_h_)); // PIC^ @
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  Push(a); // R>
  WF12B(); // WF12B
  Push(4);
  Push(0x00c5);
  DrawRAW(); // .RAW
  Push(0);
  BMPAL(); // BMPAL
  C_ex__2(); // C!_2
}

// 0xf545: db 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BLT-VOC____________________ '

