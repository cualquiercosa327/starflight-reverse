// ====== OVERLAY 'SENT-OV' ======
// store offset = 0xe2b0
// overlay size   = 0x12b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE2C6  codep:0x2214 wordp:0xe2c6 size:0x0002 C-string:'WE2C6'
//           WE2CA  codep:0x2214 wordp:0xe2ca size:0x0002 C-string:'WE2CA'
//           WE2CE  codep:0x2214 wordp:0xe2ce size:0x0002 C-string:'WE2CE'
//           WE2D2  codep:0x2214 wordp:0xe2d2 size:0x0002 C-string:'WE2D2'
//           WE2D6  codep:0x2214 wordp:0xe2d6 size:0x0002 C-string:'WE2D6'
//           WE2DA  codep:0x2214 wordp:0xe2da size:0x0002 C-string:'WE2DA'
//           WE2DE  codep:0x224c wordp:0xe2de size:0x0006 C-string:'WE2DE'
//           WE2E6  codep:0x224c wordp:0xe2e6 size:0x000a C-string:'WE2E6'
//           WE2F2  codep:0x224c wordp:0xe2f2 size:0x000a C-string:'WE2F2'
//           WE2FE  codep:0x224c wordp:0xe2fe size:0x000a C-string:'WE2FE'
//           WE30A  codep:0x224c wordp:0xe30a size:0x0013 C-string:'WE30A'
//           CARDS  codep:0xe312 wordp:0xe327 size:0x003c C-string:'CARDS'
//        NICHE-SE  codep:0xe312 wordp:0xe370 size:0x002d C-string:'NICHE_dash_SE'
//           WE39F  codep:0x224c wordp:0xe39f size:0x002e C-string:'WE39F'
//           WE3CF  codep:0x224c wordp:0xe3cf size:0x001a C-string:'WE3CF'
//           WE3EB  codep:0x224c wordp:0xe3eb size:0x001a C-string:'WE3EB'
//           WE407  codep:0x224c wordp:0xe407 size:0x000a C-string:'WE407'
//           WE413  codep:0x224c wordp:0xe413 size:0x0008 C-string:'WE413'
//           WE41D  codep:0x224c wordp:0xe41d size:0x000a C-string:'WE41D'
//           WE429  codep:0x224c wordp:0xe429 size:0x0006 C-string:'WE429'
//           WE431  codep:0x2214 wordp:0xe431 size:0x0002 C-string:'WE431'
//           WE435  codep:0x224c wordp:0xe435 size:0x002e C-string:'WE435'
//        PROBABLE  codep:0x1d29 wordp:0xe470 size:0x0002 C-string:'PROBABLE'
//           WE474  codep:0x224c wordp:0xe474 size:0x0006 C-string:'WE474'
//           WE47C  codep:0x224c wordp:0xe47c size:0x000a C-string:'WE47C'
//           WE488  codep:0x224c wordp:0xe488 size:0x0015 C-string:'WE488'
//           WE49F  codep:0x73ea wordp:0xe49f size:0x0006 C-string:'WE49F'
//            HITS  codep:0x744d wordp:0xe4ae size:0x0003 C-string:'HITS'
//           WE4B3  codep:0x744d wordp:0xe4b3 size:0x0003 C-string:'WE4B3'
//           WE4B8  codep:0x73ea wordp:0xe4b8 size:0x0006 C-string:'WE4B8'
//           WE4C0  codep:0x73ea wordp:0xe4c0 size:0x0006 C-string:'WE4C0'
//           WE4C8  codep:0x73ea wordp:0xe4c8 size:0x0006 C-string:'WE4C8'
//           WE4D0  codep:0x73ea wordp:0xe4d0 size:0x0006 C-string:'WE4D0'
//           WE4D8  codep:0x73ea wordp:0xe4d8 size:0x0006 C-string:'WE4D8'
//           WE4E0  codep:0x73ea wordp:0xe4e0 size:0x0006 C-string:'WE4E0'
//           WE4E8  codep:0x73ea wordp:0xe4e8 size:0x0006 C-string:'WE4E8'
//           WE4F0  codep:0x73ea wordp:0xe4f0 size:0x0006 C-string:'WE4F0'
//           WE4F8  codep:0x73ea wordp:0xe4f8 size:0x0006 C-string:'WE4F8'
//           WE500  codep:0x73ea wordp:0xe500 size:0x0006 C-string:'WE500'
//           WE508  codep:0x73ea wordp:0xe508 size:0x0006 C-string:'WE508'
//           WE510  codep:0x73ea wordp:0xe510 size:0x0006 C-string:'WE510'
//           WE518  codep:0x73ea wordp:0xe518 size:0x0006 C-string:'WE518'
//           WE520  codep:0x73ea wordp:0xe520 size:0x0006 C-string:'WE520'
//           WE528  codep:0x73ea wordp:0xe528 size:0x0006 C-string:'WE528'
//           WE530  codep:0x73ea wordp:0xe530 size:0x0006 C-string:'WE530'
//           WE538  codep:0x73ea wordp:0xe538 size:0x0006 C-string:'WE538'
//           WE540  codep:0x73ea wordp:0xe540 size:0x0006 C-string:'WE540'
//           WE548  codep:0x73ea wordp:0xe548 size:0x0006 C-string:'WE548'
//           WE550  codep:0x73ea wordp:0xe550 size:0x0006 C-string:'WE550'
//           WE558  codep:0x73ea wordp:0xe558 size:0x0006 C-string:'WE558'
//           WE560  codep:0x73ea wordp:0xe560 size:0x0006 C-string:'WE560'
//           WE568  codep:0x73ea wordp:0xe568 size:0x0006 C-string:'WE568'
//           WE570  codep:0x73ea wordp:0xe570 size:0x0006 C-string:'WE570'
//           WE578  codep:0x73ea wordp:0xe578 size:0x0006 C-string:'WE578'
//           WE580  codep:0x73ea wordp:0xe580 size:0x0006 C-string:'WE580'
//           WE588  codep:0x73ea wordp:0xe588 size:0x0006 C-string:'WE588'
//           WE590  codep:0x73ea wordp:0xe590 size:0x0006 C-string:'WE590'
//           WE598  codep:0x73ea wordp:0xe598 size:0x0006 C-string:'WE598'
//           WE5A0  codep:0x73ea wordp:0xe5a0 size:0x0006 C-string:'WE5A0'
//           WE5A8  codep:0x73ea wordp:0xe5a8 size:0x0006 C-string:'WE5A8'
//           WE5B0  codep:0x73ea wordp:0xe5b0 size:0x0006 C-string:'WE5B0'
//           WE5B8  codep:0x73ea wordp:0xe5b8 size:0x0006 C-string:'WE5B8'
//           WE5C0  codep:0x73ea wordp:0xe5c0 size:0x0006 C-string:'WE5C0'
//           WE5C8  codep:0x73ea wordp:0xe5c8 size:0x0006 C-string:'WE5C8'
//           WE5D0  codep:0x73ea wordp:0xe5d0 size:0x0006 C-string:'WE5D0'
//           WE5D8  codep:0x73ea wordp:0xe5d8 size:0x0006 C-string:'WE5D8'
//           WE5E0  codep:0x73ea wordp:0xe5e0 size:0x0006 C-string:'WE5E0'
//           WE5E8  codep:0x73ea wordp:0xe5e8 size:0x0006 C-string:'WE5E8'
//           WE5F0  codep:0x73ea wordp:0xe5f0 size:0x0006 C-string:'WE5F0'
//           WE5F8  codep:0x73ea wordp:0xe5f8 size:0x0006 C-string:'WE5F8'
//           WE600  codep:0x73ea wordp:0xe600 size:0x0006 C-string:'WE600'
//           WE608  codep:0x73ea wordp:0xe608 size:0x0006 C-string:'WE608'
//           WE610  codep:0x73ea wordp:0xe610 size:0x0006 C-string:'WE610'
//           WE618  codep:0x73ea wordp:0xe618 size:0x0006 C-string:'WE618'
//           WE620  codep:0x73ea wordp:0xe620 size:0x0006 C-string:'WE620'
//           WE628  codep:0x73ea wordp:0xe628 size:0x0006 C-string:'WE628'
//           WE630  codep:0x73ea wordp:0xe630 size:0x0006 C-string:'WE630'
//           WE638  codep:0x73ea wordp:0xe638 size:0x0006 C-string:'WE638'
//           WE640  codep:0x73ea wordp:0xe640 size:0x0006 C-string:'WE640'
//           WE648  codep:0x73ea wordp:0xe648 size:0x0006 C-string:'WE648'
//           WE650  codep:0x73ea wordp:0xe650 size:0x0006 C-string:'WE650'
//           WE658  codep:0x73ea wordp:0xe658 size:0x0006 C-string:'WE658'
//           WE660  codep:0x73ea wordp:0xe660 size:0x0006 C-string:'WE660'
//           WE668  codep:0x73ea wordp:0xe668 size:0x0006 C-string:'WE668'
//           WE670  codep:0x73ea wordp:0xe670 size:0x0006 C-string:'WE670'
//           WE678  codep:0x73ea wordp:0xe678 size:0x0006 C-string:'WE678'
//           WE680  codep:0x744d wordp:0xe680 size:0x0003 C-string:'WE680'
//           WE685  codep:0x744d wordp:0xe685 size:0x0003 C-string:'WE685'
//           WE68A  codep:0x744d wordp:0xe68a size:0x0003 C-string:'WE68A'
//           WE68F  codep:0x224c wordp:0xe68f size:0x000c C-string:'WE68F'
//           WE69D  codep:0x224c wordp:0xe69d size:0x000c C-string:'WE69D'
//           WE6AB  codep:0x224c wordp:0xe6ab size:0x0012 C-string:'WE6AB'
//           WE6BF  codep:0x3b68 wordp:0xe6bf size:0x0004 C-string:'WE6BF'
//           WE6C5  codep:0x1d29 wordp:0xe6c5 size:0x0002 C-string:'WE6C5'
//           WE6C9  codep:0x1d29 wordp:0xe6c9 size:0x0191 C-string:'WE6C9'
//            SHOW  codep:0x1d29 wordp:0xe863 size:0x0002 C-string:'SHOW'
//           WE867  codep:0x224c wordp:0xe867 size:0x004e C-string:'WE867'
//           WE8B7  codep:0x224c wordp:0xe8b7 size:0x000e C-string:'WE8B7'
//           WE8C7  codep:0x224c wordp:0xe8c7 size:0x0074 C-string:'WE8C7'
//           WE93D  codep:0x224c wordp:0xe93d size:0x000c C-string:'WE93D'
//           WE94B  codep:0x224c wordp:0xe94b size:0x0096 C-string:'WE94B'
//           WE9E3  codep:0x224c wordp:0xe9e3 size:0x0028 C-string:'WE9E3'
//           WEA0D  codep:0x224c wordp:0xea0d size:0x000c C-string:'WEA0D'
//           WEA1B  codep:0x224c wordp:0xea1b size:0x0012 C-string:'WEA1B'
//           WEA2F  codep:0x3b68 wordp:0xea2f size:0x0004 C-string:'WEA2F'
//           WEA35  codep:0x224c wordp:0xea35 size:0x0006 C-string:'WEA35'
//           WEA3D  codep:0x224c wordp:0xea3d size:0x0008 C-string:'WEA3D'
//           WEA47  codep:0x224c wordp:0xea47 size:0x001a C-string:'WEA47'
//           WEA63  codep:0x1d29 wordp:0xea63 size:0x0002 C-string:'WEA63'
//           WEA67  codep:0x224c wordp:0xea67 size:0x001f C-string:'WEA67'
//             VTB  codep:0xea73 wordp:0xea8e size:0x0008 C-string:'VTB'
//        POSSESSI  codep:0xea73 wordp:0xeaa3 size:0x0008 C-string:'POSSESSI'
//         PRONOUN  codep:0xea73 wordp:0xeab7 size:0x0008 C-string:'PRONOUN'
//        DETERMIN  codep:0xea73 wordp:0xeacc size:0x0008 C-string:'DETERMIN'
//        POSSES.P  codep:0xea73 wordp:0xeae1 size:0x0008 C-string:'POSSES_dot_P'
//           WEAEB  codep:0x224c wordp:0xeaeb size:0x000e C-string:'WEAEB'
//           WEAFB  codep:0x224c wordp:0xeafb size:0x0050 C-string:'WEAFB'
//           WEB4D  codep:0x224c wordp:0xeb4d size:0x0010 C-string:'WEB4D'
//           WEB5F  codep:0x224c wordp:0xeb5f size:0x000e C-string:'WEB5F'
//           WEB6F  codep:0x224c wordp:0xeb6f size:0x0008 C-string:'WEB6F'
//           WEB79  codep:0x224c wordp:0xeb79 size:0x0010 C-string:'WEB79'
//           WEB8B  codep:0x224c wordp:0xeb8b size:0x0024 C-string:'WEB8B'
//           WEBB1  codep:0x224c wordp:0xebb1 size:0x001c C-string:'WEBB1'
//           WEBCF  codep:0x224c wordp:0xebcf size:0x000a C-string:'WEBCF'
//           WEBDB  codep:0x224c wordp:0xebdb size:0x005e C-string:'WEBDB'
//           WEC3B  codep:0x224c wordp:0xec3b size:0x0016 C-string:'WEC3B'
//           WEC53  codep:0x224c wordp:0xec53 size:0x0024 C-string:'WEC53'
//           WEC79  codep:0x224c wordp:0xec79 size:0x0028 C-string:'WEC79'
//           WECA3  codep:0x224c wordp:0xeca3 size:0x0020 C-string:'WECA3'
//           WECC5  codep:0x224c wordp:0xecc5 size:0x0036 C-string:'WECC5'
//           WECFD  codep:0x224c wordp:0xecfd size:0x002c C-string:'WECFD'
//           WED2B  codep:0x224c wordp:0xed2b size:0x002c C-string:'WED2B'
//           WED59  codep:0x224c wordp:0xed59 size:0x003a C-string:'WED59'
//           WED95  codep:0x224c wordp:0xed95 size:0x0056 C-string:'WED95'
//           WEDED  codep:0x224c wordp:0xeded size:0x0066 C-string:'WEDED'
//           WEE55  codep:0x1d29 wordp:0xee55 size:0x0010 C-string:'WEE55'
//           WEE67  codep:0x1d29 wordp:0xee67 size:0x0010 C-string:'WEE67'
//           WEE79  codep:0x1d29 wordp:0xee79 size:0x0010 C-string:'WEE79'
//           WEE8B  codep:0x1d29 wordp:0xee8b size:0x0010 C-string:'WEE8B'
//           WEE9D  codep:0x1d29 wordp:0xee9d size:0x0002 C-string:'WEE9D'
//           WEEA1  codep:0x224c wordp:0xeea1 size:0x0006 C-string:'WEEA1'
//           WEEA9  codep:0x1d29 wordp:0xeea9 size:0x0002 C-string:'WEEA9'
//           WEEAD  codep:0x224c wordp:0xeead size:0x001c C-string:'WEEAD'
//           WEECB  codep:0x224c wordp:0xeecb size:0x00b6 C-string:'WEECB'
//           WEF83  codep:0x224c wordp:0xef83 size:0x0042 C-string:'WEF83'
//        POSSIBIL  codep:0xe963 wordp:0xefd2 size:0x0018 C-string:'POSSIBIL'
//           WEFEC  codep:0x224c wordp:0xefec size:0x0080 C-string:'WEFEC'
//           WF06E  codep:0x224c wordp:0xf06e size:0x0056 C-string:'WF06E'
//           SAYIT  codep:0x224c wordp:0xf0ce size:0x0014 C-string:'SAYIT'
//         ANALOGS  codep:0xe963 wordp:0xf0ee size:0x0076 C-string:'ANALOGS'
//           WF166  codep:0x224c wordp:0xf166 size:0x0084 C-string:'WF166'
//           WF1EC  codep:0x224c wordp:0xf1ec size:0x0020 C-string:'WF1EC'
//           WF20E  codep:0x224c wordp:0xf20e size:0x000e C-string:'WF20E'
//           WF21E  codep:0x224c wordp:0xf21e size:0x0011 C-string:'WF21E'
//           WF231  codep:0x224c wordp:0xf231 size:0x0012 C-string:'WF231'
//           WF245  codep:0x224c wordp:0xf245 size:0x0034 C-string:'WF245'
//           WF27B  codep:0x224c wordp:0xf27b size:0x001c C-string:'WF27B'
//           WF299  codep:0x224c wordp:0xf299 size:0x0024 C-string:'WF299'
//           WF2BF  codep:0x224c wordp:0xf2bf size:0x000e C-string:'WF2BF'
//           WF2CF  codep:0x224c wordp:0xf2cf size:0x0011 C-string:'WF2CF'
//        CLASS>DE  codep:0x4a4f wordp:0xf2ed size:0x0024 C-string:'CLASS_gt_DE'
//        CLASS>TY  codep:0x4a4f wordp:0xf31e size:0x0024 C-string:'CLASS_gt_TY'
//           ?TALK  codep:0x224c wordp:0xf34c size:0x0000 C-string:'IsTALK'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TEXTC_slash_L; // TEXTC/L
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_PLANTS; // PLANTS
extern const unsigned short int pp_ANIMALS; // ANIMALS
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_LINE_dash_COUNT; // LINE-COUNT
extern const unsigned short int pp_PM_dash_PTR; // PM-PTR
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern LoadDataType SPEC_dash_NAME; // SPEC-NAME
extern LoadDataType ART_dash_NAME; // ART-NAME
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
void COUNT(); // COUNT
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _co_(); // ,
void ALLOT(); // ALLOT
void CFA(); // CFA
void HERE(); // HERE
void QUIT(); // QUIT
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetRECORD(); // @RECORD
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_ICON(); // POINT>ICON
void POS_dot_(); // POS.
void WLINE_dash_UP(); // WLINE-UP
void U_gt__do_(); // U>$
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void U_st_(); // U<
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void CARDS(); // CARDS
void NICHE_dash_SE(); // NICHE-SE
void POSSESSI(); // POSSESSI
void PRONOUN(); // PRONOUN
void POSSIBIL(); // POSSIBIL
void ANALOGS(); // ANALOGS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_PROBABLE = 0xe470; // PROBABLE size: 2
// {0x03, 0x9c}

const unsigned short int pp_WE6C5 = 0xe6c5; // WE6C5 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE6C9 = 0xe6c9; // WE6C9 size: 401
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd9, 0x01, 0x30, 0xc6, 0xd9, 0x01, 0x39, 0xdb, 0xd9, 0x01, 0x43, 0xf8, 0xd9, 0x01, 0x64, 0x1c, 0xda, 0x01, 0x09, 0x2c, 0xd9, 0x01, 0x12, 0x01, 0xd5, 0x01, 0x1b, 0x2e, 0xda, 0x01, 0x23, 0x5a, 0xd9, 0x01, 0x2c, 0x6e, 0xd9, 0x01, 0x35, 0x81, 0xd9, 0x01, 0x3d, 0x5a, 0xd5, 0x01, 0x46, 0xc6, 0xd9, 0x31, 0x35, 0x32, 0x30, 0x01, 0x05, 0x65, 0xd8, 0x01, 0x09, 0x75, 0xd8, 0x01, 0x0d, 0x8b, 0xd8, 0x01, 0x11, 0xc0, 0xd4, 0x01, 0x15, 0xa1, 0xd8, 0x01, 0x19, 0x18, 0xd4, 0x01, 0x1d, 0xb4, 0xd8, 0x01, 0x21, 0xdd, 0xd8, 0x01, 0x24, 0xf2, 0xd8, 0x01, 0x27, 0xd5, 0xd4, 0x01, 0x2a, 0x05, 0xd9, 0x01, 0x2d, 0x1a, 0xd9, 0x01, 0x30, 0x2f, 0xd4, 0x01, 0x33, 0x81, 0xd9, 0x01, 0x36, 0xb2, 0xd9, 0x01, 0x39, 0xc6, 0xd9, 0x01, 0x3d, 0xc7, 0xd8, 0x01, 0x41, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x07, 0xc6, 0xd3, 0x01, 0x0e, 0x28, 0xd8, 0x01, 0x15, 0xe0, 0xd3, 0x01, 0x1b, 0x00, 0xd4, 0x01, 0x21, 0x51, 0xd8, 0x01, 0x28, 0x1a, 0xd9, 0x01, 0x2f, 0x2f, 0xd4, 0x01, 0x35, 0x6e, 0xd9, 0x01, 0x3b, 0x81, 0xd9, 0x01, 0x42, 0x05, 0xd9, 0x01, 0x49, 0x3d, 0xd8, 0x01, 0x64, 0xd5, 0xd4, 0x01, 0x0a, 0x5a, 0xd9, 0x01, 0x14, 0x6e, 0xd9, 0x01, 0x1d, 0x98, 0xd9, 0x01, 0x26, 0xb2, 0xd9, 0x01, 0x30, 0x5a, 0xd5, 0x01, 0x39, 0xc6, 0xd9, 0x01, 0x43, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x07, 0xe9, 0xd7, 0x01, 0x0e, 0x96, 0xd3, 0x01, 0x15, 0x00, 0xd8, 0x01, 0x1b, 0x14, 0xd8, 0x01, 0x21, 0xdd, 0xd8, 0x01, 0x28, 0xf2, 0xd8, 0x01, 0x2f, 0x1a, 0xd9, 0x01, 0x35, 0x2f, 0xd4, 0x01, 0x3b, 0x5a, 0xd9, 0x01, 0x42, 0xf8, 0xd9, 0x01, 0x49, 0xaf, 0xd3, 0x01, 0x64, 0x6e, 0xd9, 0x01, 0x06, 0x59, 0xd7, 0x01, 0x0a, 0x73, 0xd7, 0x01, 0x0e, 0x86, 0xd7, 0x01, 0x13, 0x98, 0xd7, 0x01, 0x17, 0xac, 0xd7, 0x01, 0x1b, 0xbf, 0xd7, 0x01, 0x20, 0xd7, 0xd7, 0x01, 0x24, 0x00, 0xd8, 0x01, 0x28, 0x14, 0xd8, 0x01, 0x2d, 0xc7, 0xd8, 0x01, 0x31, 0x7c, 0xd3, 0x01, 0x35, 0xdd, 0xd8, 0x01, 0x3a, 0xf2, 0xd8, 0x01, 0x3f, 0x2f, 0xd4, 0x01, 0x43, 0x5a, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x09, 0x86, 0xd7, 0x01, 0x10, 0x98, 0xd7, 0x01, 0x18, 0xac, 0xd7, 0x01, 0x1f, 0xbf, 0xd7, 0x01, 0x27, 0xd7, 0xd7, 0x01, 0x2e, 0x14, 0xd8, 0x01, 0x36, 0xf2, 0xd8, 0x01, 0x3d, 0x5a, 0xd9, 0x01, 0x45, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x0a, 0xac, 0xd7, 0x01, 0x14, 0xbf, 0xd7, 0x01, 0x1d, 0xd7, 0xd7, 0x01, 0x26, 0x14, 0xd8, 0x01, 0x30, 0xb4, 0xd8, 0x01, 0x39, 0xb2, 0xd9, 0x01, 0x43, 0xc6, 0xd9, 0x01, 0x64, 0xdb}

const unsigned short int pp_SHOW = 0xe863; // SHOW size: 2
// {0x00, 0x00}

const unsigned short int pp_WEA63 = 0xea63; // WEA63 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEE55 = 0xee55; // WEE55 size: 16
// {0x00, 0xe5, 0x08, 0xe5, 0xc8, 0xe5, 0xd0, 0xe5, 0xd8, 0xe5, 0xe0, 0xe5, 0xe8, 0xe5, 0xf0, 0xe5}

const unsigned short int pp_WEE67 = 0xee67; // WEE67 size: 16
// {0x10, 0xe5, 0x18, 0xe5, 0x98, 0xe5, 0xa0, 0xe5, 0xa8, 0xe5, 0xb0, 0xe5, 0xb8, 0xe5, 0xc0, 0xe5}

const unsigned short int pp_WEE79 = 0xee79; // WEE79 size: 16
// {0x30, 0xe5, 0x38, 0xe5, 0x28, 0xe6, 0x30, 0xe6, 0x38, 0xe6, 0x40, 0xe6, 0x48, 0xe6, 0x50, 0xe6}

const unsigned short int pp_WEE8B = 0xee8b; // WEE8B size: 16
// {0x20, 0xe5, 0x28, 0xe5, 0xf8, 0xe5, 0x00, 0xe6, 0x08, 0xe6, 0x10, 0xe6, 0x18, 0xe6, 0x20, 0xe6}

const unsigned short int pp_WEE9D = 0xee9d; // WEE9D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEEA9 = 0xeea9; // WEEA9 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE2C6 = 0xe2c6; // WE2C6
const unsigned short int cc_WE2CA = 0xe2ca; // WE2CA
const unsigned short int cc_WE2CE = 0xe2ce; // WE2CE
const unsigned short int cc_WE2D2 = 0xe2d2; // WE2D2
const unsigned short int cc_WE2D6 = 0xe2d6; // WE2D6
const unsigned short int cc_WE2DA = 0xe2da; // WE2DA
const unsigned short int cc_WE431 = 0xe431; // WE431


// 0xe2c2: db 0x10 0x01 '  '

// ================================================
// 0xe2c4: WORD 'WE2C6' codep=0x2214 wordp=0xe2c6
// ================================================
// orphan
// 0xe2c6: dw 0x0020

// ================================================
// 0xe2c8: WORD 'WE2CA' codep=0x2214 wordp=0xe2ca
// ================================================
// orphan
// 0xe2ca: dw 0x0018

// ================================================
// 0xe2cc: WORD 'WE2CE' codep=0x2214 wordp=0xe2ce
// ================================================
// orphan
// 0xe2ce: dw 0x0043

// ================================================
// 0xe2d0: WORD 'WE2D2' codep=0x2214 wordp=0xe2d2
// ================================================
// 0xe2d2: dw 0x0044

// ================================================
// 0xe2d4: WORD 'WE2D6' codep=0x2214 wordp=0xe2d6
// ================================================
// orphan
// 0xe2d6: dw 0x001c

// ================================================
// 0xe2d8: WORD 'WE2DA' codep=0x2214 wordp=0xe2da
// ================================================
// orphan
// 0xe2da: dw 0x0039

// ================================================
// 0xe2dc: WORD 'WE2DE' codep=0x224c wordp=0xe2de
// ================================================
// orphan

void WE2DE() // WE2DE
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe2e4: WORD 'WE2E6' codep=0x224c wordp=0xe2e6 params=0 returns=2
// ================================================

void WE2E6() // WE2E6
{
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Push(Read16(pp_FILE_n_)); // FILE# @
}


// ================================================
// 0xe2f0: WORD 'WE2F2' codep=0x224c wordp=0xe2f2 params=2 returns=0
// ================================================

void WE2F2() // WE2F2
{
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xe2fc: WORD 'WE2FE' codep=0x224c wordp=0xe2fe params=2 returns=0
// ================================================
// orphan

void WE2FE() // WE2FE
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe308: WORD 'WE30A' codep=0x224c wordp=0xe30a
// ================================================
// orphan

void WE30A() // WE30A
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  WE2FE(); // WE2FE
  CODE(); // (;CODE) inlined assembler code
// 0xe312: call   1649
  SWAP(); // SWAP
  _3_star_(); // 3*
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe31d: WORD 'CARDS' codep=0xe312 wordp=0xe327
// ================================================
// 0xe327: db 0x13 0x00 0x00 0xbb 0xc3 0x01 0xd0 0xc3 0x01 0xe2 0xc3 0x01 0x00 0xc4 0x01 0x12 0xc4 0x01 0x29 0xc4 0x01 0x40 0xc4 0x01 0x5c 0xc4 0x01 0x70 0xc4 0x01 0x85 0xc4 0x01 0x9b 0xc4 0x01 0xb1 0xc4 0x01 0xc8 0xc4 0x01 0xdd 0xc4 0x01 0xf3 0xc4 0x01 0x09 0xc5 0x01 0x20 0xc5 0x01 0x36 0xc5 0x01 0x51 0xc5 0x01 '                  )  @  \  p                          6  Q  '

// ================================================
// 0xe363: WORD 'NICHE-SE' codep=0xe312 wordp=0xe370
// ================================================
// 0xe370: db 0x0e 0x00 0x00 0x61 0xc7 0x01 0x7d 0xc7 0x01 0x00 0x00 0x00 0x92 0xc7 0x01 0x00 0x00 0x00 0xa8 0xc7 0x01 0x00 0x00 0x00 0xc9 0xc7 0x01 0x00 0x00 0x00 0xdf 0xc7 0x01 0x00 0x00 0x00 0x00 0xc8 0x01 0x00 0x00 0x00 0x15 0xc8 0x01 '   a  }                                      '

// ================================================
// 0xe39d: WORD 'WE39F' codep=0x224c wordp=0xe39f params=2 returns=3
// ================================================

void WE39F() // WE39F
{
  unsigned short int a, b;
  WE2E6(); // WE2E6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(((Read16(0x63ef+PHR_dash_CNT.offset)&0xFF) - 1) + (0x63ef+PHRASE_dash_MEM.offset))&0xFF)==0x0053?1:0); // PHR-CNT<IFIELD> C@ 1- PHRASE-MEM<IFIELD> + C@ 0x0053 =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  WE2F2(); // WE2F2
}


// ================================================
// 0xe3cd: WORD 'WE3CF' codep=0x224c wordp=0xe3cf params=2 returns=3
// ================================================

void WE3CF() // WE3CF
{
  unsigned short int a, b;
  WE2E6(); // WE2E6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==5?1:0); //  5 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  WE2F2(); // WE2F2
}


// ================================================
// 0xe3e9: WORD 'WE3EB' codep=0x224c wordp=0xe3eb params=2 returns=3
// ================================================
// orphan

void WE3EB() // WE3EB
{
  unsigned short int a, b;
  WE2E6(); // WE2E6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==3?1:0); //  3 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  WE2F2(); // WE2F2
}


// ================================================
// 0xe405: WORD 'WE407' codep=0x224c wordp=0xe407 params=0 returns=1
// ================================================
// orphan

void WE407() // WE407
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xe411: WORD 'WE413' codep=0x224c wordp=0xe413 params=0 returns=1
// ================================================

void WE413() // WE413
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe41b: WORD 'WE41D' codep=0x224c wordp=0xe41d params=0 returns=1
// ================================================

void WE41D() // WE41D
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe427: WORD 'WE429' codep=0x224c wordp=0xe429 params=3 returns=1
// ================================================
// orphan

void WE429() // WE429
{
  MIN(); // MIN
  MAX(); // MAX
}


// ================================================
// 0xe42f: WORD 'WE431' codep=0x2214 wordp=0xe431
// ================================================
// 0xe431: dw 0x002e

// ================================================
// 0xe433: WORD 'WE435' codep=0x224c wordp=0xe435 params=3 returns=2
// ================================================

void WE435() // WE435
{
  Push(0xe431); // 'WE431'
  Store_3(); // !_3
  Push(0xe431); // 'WE431'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
  _dash_TRAILING(); // -TRAILING
  Push(0x099a); // 'BL'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
}


// ================================================
// 0xe463: WORD 'PROBABLE' codep=0x1d29 wordp=0xe470
// ================================================
// 0xe470: db 0x03 0x9c '  '

// ================================================
// 0xe472: WORD 'WE474' codep=0x224c wordp=0xe474 params=1 returns=0
// ================================================

void WE474() // WE474
{
  Push(pp_PROBABLE); // PROBABLE
  Store_3(); // !_3
}


// ================================================
// 0xe47a: WORD 'WE47C' codep=0x224c wordp=0xe47c params=0 returns=1
// ================================================

void WE47C() // WE47C
{
  WE41D(); // WE41D
  Push(Read16(pp_PROBABLE)); // PROBABLE @
  _st_(); // <
}


// ================================================
// 0xe486: WORD 'WE488' codep=0x224c wordp=0xe488
// ================================================
// orphan

void WE488() // WE488
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xe490: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe49d: WORD 'WE49F' codep=0x73ea wordp=0xe49f
// ================================================
// orphan
LoadDataType WE49F = {STARIDX, 0x00, 0x03, 0x00, 0x0000};

// ================================================
// 0xe4a5: WORD 'HITS' codep=0x744d wordp=0xe4ae
// ================================================
IFieldType HITS = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe4b1: WORD 'WE4B3' codep=0x744d wordp=0xe4b3
// ================================================
// orphan
IFieldType WE4B3 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xe4b6: WORD 'WE4B8' codep=0x73ea wordp=0xe4b8
// ================================================
LoadDataType WE4B8 = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x650a};

// ================================================
// 0xe4be: WORD 'WE4C0' codep=0x73ea wordp=0xe4c0
// ================================================
// orphan
LoadDataType WE4C0 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe4c6: WORD 'WE4C8' codep=0x73ea wordp=0xe4c8
// ================================================
// orphan
LoadDataType WE4C8 = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe4ce: WORD 'WE4D0' codep=0x73ea wordp=0xe4d0
// ================================================
LoadDataType WE4D0 = {CREATUREIDX, 0x07, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4d6: WORD 'WE4D8' codep=0x73ea wordp=0xe4d8
// ================================================
// orphan
LoadDataType WE4D8 = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4de: WORD 'WE4E0' codep=0x73ea wordp=0xe4e0
// ================================================
LoadDataType WE4E0 = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4e6: WORD 'WE4E8' codep=0x73ea wordp=0xe4e8
// ================================================
// orphan
LoadDataType WE4E8 = {CREATUREIDX, 0x0d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4ee: WORD 'WE4F0' codep=0x73ea wordp=0xe4f0
// ================================================
// orphan
LoadDataType WE4F0 = {CREATUREIDX, 0x10, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4f6: WORD 'WE4F8' codep=0x73ea wordp=0xe4f8
// ================================================
LoadDataType WE4F8 = {CREATUREIDX, 0x13, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4fe: WORD 'WE500' codep=0x73ea wordp=0xe500
// ================================================
// orphan
LoadDataType WE500 = {CREATUREIDX, 0x16, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe506: WORD 'WE508' codep=0x73ea wordp=0xe508
// ================================================
// orphan
LoadDataType WE508 = {CREATUREIDX, 0x19, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe50e: WORD 'WE510' codep=0x73ea wordp=0xe510
// ================================================
// orphan
LoadDataType WE510 = {CREATUREIDX, 0x1a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe516: WORD 'WE518' codep=0x73ea wordp=0xe518
// ================================================
// orphan
LoadDataType WE518 = {CREATUREIDX, 0x1d, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe51e: WORD 'WE520' codep=0x73ea wordp=0xe520
// ================================================
// orphan
LoadDataType WE520 = {CREATUREIDX, 0x1e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe526: WORD 'WE528' codep=0x73ea wordp=0xe528
// ================================================
// orphan
LoadDataType WE528 = {CREATUREIDX, 0x21, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe52e: WORD 'WE530' codep=0x73ea wordp=0xe530
// ================================================
// orphan
LoadDataType WE530 = {CREATUREIDX, 0x22, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe536: WORD 'WE538' codep=0x73ea wordp=0xe538
// ================================================
// orphan
LoadDataType WE538 = {CREATUREIDX, 0x25, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe53e: WORD 'WE540' codep=0x73ea wordp=0xe540
// ================================================
LoadDataType WE540 = {CREATUREIDX, 0x26, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe546: WORD 'WE548' codep=0x73ea wordp=0xe548
// ================================================
LoadDataType WE548 = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe54e: WORD 'WE550' codep=0x73ea wordp=0xe550
// ================================================
// orphan
LoadDataType WE550 = {CREATUREIDX, 0x30, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe556: WORD 'WE558' codep=0x73ea wordp=0xe558
// ================================================
// orphan
LoadDataType WE558 = {CREATUREIDX, 0x31, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe55e: WORD 'WE560' codep=0x73ea wordp=0xe560
// ================================================
// orphan
LoadDataType WE560 = {CREATUREIDX, 0x32, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe566: WORD 'WE568' codep=0x73ea wordp=0xe568
// ================================================
LoadDataType WE568 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe56e: WORD 'WE570' codep=0x73ea wordp=0xe570
// ================================================
LoadDataType WE570 = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe576: WORD 'WE578' codep=0x73ea wordp=0xe578
// ================================================
LoadDataType WE578 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe57e: WORD 'WE580' codep=0x73ea wordp=0xe580
// ================================================
LoadDataType WE580 = {CREATUREIDX, 0x38, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe586: WORD 'WE588' codep=0x73ea wordp=0xe588
// ================================================
// orphan
LoadDataType WE588 = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe58e: WORD 'WE590' codep=0x73ea wordp=0xe590
// ================================================
LoadDataType WE590 = {CREATUREIDX, 0x3c, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe596: WORD 'WE598' codep=0x73ea wordp=0xe598
// ================================================
// orphan
LoadDataType WE598 = {CREATUREIDX, 0x3f, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe59e: WORD 'WE5A0' codep=0x73ea wordp=0xe5a0
// ================================================
// orphan
LoadDataType WE5A0 = {CREATUREIDX, 0x42, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5a6: WORD 'WE5A8' codep=0x73ea wordp=0xe5a8
// ================================================
// orphan
LoadDataType WE5A8 = {CREATUREIDX, 0x45, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ae: WORD 'WE5B0' codep=0x73ea wordp=0xe5b0
// ================================================
// orphan
LoadDataType WE5B0 = {CREATUREIDX, 0x48, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5b6: WORD 'WE5B8' codep=0x73ea wordp=0xe5b8
// ================================================
// orphan
LoadDataType WE5B8 = {CREATUREIDX, 0x4b, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5be: WORD 'WE5C0' codep=0x73ea wordp=0xe5c0
// ================================================
// orphan
LoadDataType WE5C0 = {CREATUREIDX, 0x4e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5c6: WORD 'WE5C8' codep=0x73ea wordp=0xe5c8
// ================================================
// orphan
LoadDataType WE5C8 = {CREATUREIDX, 0x51, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ce: WORD 'WE5D0' codep=0x73ea wordp=0xe5d0
// ================================================
// orphan
LoadDataType WE5D0 = {CREATUREIDX, 0x54, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5d6: WORD 'WE5D8' codep=0x73ea wordp=0xe5d8
// ================================================
// orphan
LoadDataType WE5D8 = {CREATUREIDX, 0x57, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5de: WORD 'WE5E0' codep=0x73ea wordp=0xe5e0
// ================================================
// orphan
LoadDataType WE5E0 = {CREATUREIDX, 0x5a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5e6: WORD 'WE5E8' codep=0x73ea wordp=0xe5e8
// ================================================
// orphan
LoadDataType WE5E8 = {CREATUREIDX, 0x5d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ee: WORD 'WE5F0' codep=0x73ea wordp=0xe5f0
// ================================================
// orphan
LoadDataType WE5F0 = {CREATUREIDX, 0x60, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5f6: WORD 'WE5F8' codep=0x73ea wordp=0xe5f8
// ================================================
// orphan
LoadDataType WE5F8 = {CREATUREIDX, 0x63, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5fe: WORD 'WE600' codep=0x73ea wordp=0xe600
// ================================================
// orphan
LoadDataType WE600 = {CREATUREIDX, 0x66, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe606: WORD 'WE608' codep=0x73ea wordp=0xe608
// ================================================
// orphan
LoadDataType WE608 = {CREATUREIDX, 0x69, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe60e: WORD 'WE610' codep=0x73ea wordp=0xe610
// ================================================
// orphan
LoadDataType WE610 = {CREATUREIDX, 0x6c, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe616: WORD 'WE618' codep=0x73ea wordp=0xe618
// ================================================
// orphan
LoadDataType WE618 = {CREATUREIDX, 0x6f, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe61e: WORD 'WE620' codep=0x73ea wordp=0xe620
// ================================================
// orphan
LoadDataType WE620 = {CREATUREIDX, 0x72, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe626: WORD 'WE628' codep=0x73ea wordp=0xe628
// ================================================
// orphan
LoadDataType WE628 = {CREATUREIDX, 0x75, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe62e: WORD 'WE630' codep=0x73ea wordp=0xe630
// ================================================
// orphan
LoadDataType WE630 = {CREATUREIDX, 0x78, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe636: WORD 'WE638' codep=0x73ea wordp=0xe638
// ================================================
// orphan
LoadDataType WE638 = {CREATUREIDX, 0x7b, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe63e: WORD 'WE640' codep=0x73ea wordp=0xe640
// ================================================
// orphan
LoadDataType WE640 = {CREATUREIDX, 0x7e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe646: WORD 'WE648' codep=0x73ea wordp=0xe648
// ================================================
// orphan
LoadDataType WE648 = {CREATUREIDX, 0x81, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe64e: WORD 'WE650' codep=0x73ea wordp=0xe650
// ================================================
// orphan
LoadDataType WE650 = {CREATUREIDX, 0x84, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe656: WORD 'WE658' codep=0x73ea wordp=0xe658
// ================================================
// orphan
LoadDataType WE658 = {CREATUREIDX, 0x87, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe65e: WORD 'WE660' codep=0x73ea wordp=0xe660
// ================================================
// orphan
LoadDataType WE660 = {CREATUREIDX, 0x8a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe666: WORD 'WE668' codep=0x73ea wordp=0xe668
// ================================================
// orphan
LoadDataType WE668 = {CREATUREIDX, 0x8d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe66e: WORD 'WE670' codep=0x73ea wordp=0xe670
// ================================================
// orphan
LoadDataType WE670 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe676: WORD 'WE678' codep=0x73ea wordp=0xe678
// ================================================
LoadDataType WE678 = {CREATUREIDX, 0x95, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe67e: WORD 'WE680' codep=0x744d wordp=0xe680
// ================================================
IFieldType WE680 = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xe683: WORD 'WE685' codep=0x744d wordp=0xe685
// ================================================
IFieldType WE685 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe688: WORD 'WE68A' codep=0x744d wordp=0xe68a
// ================================================
IFieldType WE68A = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe68d: WORD 'WE68F' codep=0x224c wordp=0xe68f params=1 returns=2
// ================================================

void WE68F() // WE68F
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  PICK(); // PICK
  Push(a); // R>
  PICK(); // PICK
}


// ================================================
// 0xe69b: WORD 'WE69D' codep=0x224c wordp=0xe69d params=2 returns=2
// ================================================

void WE69D() // WE69D
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe6a9: WORD 'WE6AB' codep=0x224c wordp=0xe6ab params=0 returns=0
// ================================================
// orphan

void WE6AB() // WE6AB
{
  Push(Read16(cc_WE2D2)); // WE2D2
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe6bd: WORD 'WE6BF' codep=0x3b68 wordp=0xe6bf
// ================================================
// 0xe6bf: dw 0x0001 0xdb28

// ================================================
// 0xe6c3: WORD 'WE6C5' codep=0x1d29 wordp=0xe6c5
// ================================================
// 0xe6c5: db 0x3a 0x20 ': '

// ================================================
// 0xe6c7: WORD 'WE6C9' codep=0x1d29 wordp=0xe6c9
// ================================================
// 0xe6c9: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd9 0x01 0x30 0xc6 0xd9 0x01 0x39 0xdb 0xd9 0x01 0x43 0xf8 0xd9 0x01 0x64 0x1c 0xda 0x01 0x09 0x2c 0xd9 0x01 0x12 0x01 0xd5 0x01 0x1b 0x2e 0xda 0x01 0x23 0x5a 0xd9 0x01 0x2c 0x6e 0xd9 0x01 0x35 0x81 0xd9 0x01 0x3d 0x5a 0xd5 0x01 0x46 0xc6 0xd9 0x31 0x35 0x32 0x30 0x01 0x05 0x65 0xd8 0x01 0x09 0x75 0xd8 0x01 0x0d 0x8b 0xd8 0x01 0x11 0xc0 0xd4 0x01 0x15 0xa1 0xd8 0x01 0x19 0x18 0xd4 0x01 0x1d 0xb4 0xd8 0x01 0x21 0xdd 0xd8 0x01 0x24 0xf2 0xd8 0x01 0x27 0xd5 0xd4 0x01 0x2a 0x05 0xd9 0x01 0x2d 0x1a 0xd9 0x01 0x30 0x2f 0xd4 0x01 0x33 0x81 0xd9 0x01 0x36 0xb2 0xd9 0x01 0x39 0xc6 0xd9 0x01 0x3d 0xc7 0xd8 0x01 0x41 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x07 0xc6 0xd3 0x01 0x0e 0x28 0xd8 0x01 0x15 0xe0 0xd3 0x01 0x1b 0x00 0xd4 0x01 0x21 0x51 0xd8 0x01 0x28 0x1a 0xd9 0x01 0x2f 0x2f 0xd4 0x01 0x35 0x6e 0xd9 0x01 0x3b 0x81 0xd9 0x01 0x42 0x05 0xd9 0x01 0x49 0x3d 0xd8 0x01 0x64 0xd5 0xd4 0x01 0x0a 0x5a 0xd9 0x01 0x14 0x6e 0xd9 0x01 0x1d 0x98 0xd9 0x01 0x26 0xb2 0xd9 0x01 0x30 0x5a 0xd5 0x01 0x39 0xc6 0xd9 0x01 0x43 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x07 0xe9 0xd7 0x01 0x0e 0x96 0xd3 0x01 0x15 0x00 0xd8 0x01 0x1b 0x14 0xd8 0x01 0x21 0xdd 0xd8 0x01 0x28 0xf2 0xd8 0x01 0x2f 0x1a 0xd9 0x01 0x35 0x2f 0xd4 0x01 0x3b 0x5a 0xd9 0x01 0x42 0xf8 0xd9 0x01 0x49 0xaf 0xd3 0x01 0x64 0x6e 0xd9 0x01 0x06 0x59 0xd7 0x01 0x0a 0x73 0xd7 0x01 0x0e 0x86 0xd7 0x01 0x13 0x98 0xd7 0x01 0x17 0xac 0xd7 0x01 0x1b 0xbf 0xd7 0x01 0x20 0xd7 0xd7 0x01 0x24 0x00 0xd8 0x01 0x28 0x14 0xd8 0x01 0x2d 0xc7 0xd8 0x01 0x31 0x7c 0xd3 0x01 0x35 0xdd 0xd8 0x01 0x3a 0xf2 0xd8 0x01 0x3f 0x2f 0xd4 0x01 0x43 0x5a 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x09 0x86 0xd7 0x01 0x10 0x98 0xd7 0x01 0x18 0xac 0xd7 0x01 0x1f 0xbf 0xd7 0x01 0x27 0xd7 0xd7 0x01 0x2e 0x14 0xd8 0x01 0x36 0xf2 0xd8 0x01 0x3d 0x5a 0xd9 0x01 0x45 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x0a 0xac 0xd7 0x01 0x14 0xbf 0xd7 0x01 0x1d 0xd7 0xd7 0x01 0x26 0x14 0xd8 0x01 0x30 0xb4 0xd8 0x01 0x39 0xb2 0xd9 0x01 0x43 0xc6 0xd9 0x01 0x64 0xdb ':  ALLOT   0   9   C   d    ,       .  #Z  ,n  5   =Z  F  1520  e   u                      !   $   '   *   -   0/  3   6   9   =   A   d        (          !Q  (   //  5n  ;   B   I=  d    Z   n      &   0Z  9   C   d                   !   (   /   5/  ;Z  B   I   dn   Y   s                      $   (   -   1|  5   :   ?/  CZ  d                   '   .   6   =Z  E   d               &   0   9   C   d '

// ================================================
// 0xe85a: WORD 'SHOW' codep=0x1d29 wordp=0xe863
// ================================================
// 0xe863: db 0x00 0x00 '  '

// ================================================
// 0xe865: WORD 'WE867' codep=0x224c wordp=0xe867 params=0 returns=0
// ================================================

void WE867() // WE867
{
  unsigned short int i, imax;
  Push(pp_WE6C9); // WE6C9
  Push(pp_PM_dash_PTR); // PM-PTR
  Store_3(); // !_3

  i = 0;
  imax = Read16(pp_LINE_dash_COUNT); // LINE-COUNT @
  do // (DO)
  {
    Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
    Push(Read16(pp_WE6C5)); // WE6C5 @
    Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0x03e8);
      MS(); // MS
    }
    Push(Read16(pp_SHOW)); // SHOW @
    if (Pop() != 0)
    {
      COUNT(); // COUNT
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    } else
    {
      WLINE_dash_UP(); // WLINE-UP
    }
    Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
    Push(pp_PM_dash_PTR); // PM-PTR
    _plus__ex__2(); // +!_2
    Push(1);
    Push(pp_WE6C5); // WE6C5
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8b5: WORD 'WE8B7' codep=0x224c wordp=0xe8b7 params=2 returns=1
// ================================================

void WE8B7() // WE8B7
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  _gt_(); // >
  Push(Pop() | a); //  R> OR
}


// ================================================
// 0xe8c5: WORD 'WE8C7' codep=0x224c wordp=0xe8c7 params=1 returns=0
// ================================================

void WE8C7() // WE8C7
{
  unsigned short int a;
  Push(Read16(pp_PM_dash_PTR) - pp_WE6C9); // PM-PTR @ WE6C9 -
  Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
  _slash_(); // /
  Push(Pop() * (Read16(cc_TEXTC_slash_L) + 1) + pp_WE6C9); //  TEXTC/L 1+ * WE6C9 +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() + 2); //  2+
  }
  Push(Pop() + Pop()); // +
  Push(Read16(cc_TEXTC_slash_L)); // TEXTC/L
  WE8B7(); // WE8B7
  if (Pop() != 0)
  {
    Push(Pop() + (Read16(cc_TEXTC_slash_L) + 1)); //  TEXTC/L 1+ +
    Push(Read16(regsp)); // DUP
    Push(0);
    SWAP(); // SWAP
    C_ex_(); // C!
    Push(Read16(regsp)); // DUP
    Push(Pop() + 1); //  1+
    Push(pp_PM_dash_PTR); // PM-PTR
    Store_3(); // !_3
    Push(1);
    Push(pp_LINE_dash_COUNT); // LINE-COUNT
    _plus__ex__2(); // +!_2
  }
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(a); // R>
  Push(pp_PM_dash_PTR); // PM-PTR
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe93b: WORD 'WE93D' codep=0x224c wordp=0xe93d params=1 returns=2
// ================================================
// orphan

void WE93D() // WE93D
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xe949: WORD 'WE94B' codep=0x224c wordp=0xe94b
// ================================================
// orphan

void WE94B() // WE94B
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_1(); // FILL_1
  CODE(); // (;CODE) inlined assembler code
// 0xe963: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  WE93D(); // WE93D

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xe9e1: WORD 'WE9E3' codep=0x224c wordp=0xe9e3 params=2 returns=2
// ================================================

void WE9E3() // WE9E3
{
  unsigned short int a;
  while(1)
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3 +
  }
}


// ================================================
// 0xea0b: WORD 'WEA0D' codep=0x224c wordp=0xea0d params=2 returns=2
// ================================================

void WEA0D() // WEA0D
{
  WE9E3(); // WE9E3
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xea19: WORD 'WEA1B' codep=0x224c wordp=0xea1b params=1 returns=1
// ================================================

void WEA1B() // WEA1B
{
  Push(4);
  MOD(); // MOD
  if (Pop() != 0)
  {
    Push(pp_PLANTS); // PLANTS
    return;
  }
  Push(pp_ANIMALS); // ANIMALS
}


// ================================================
// 0xea2d: WORD 'WEA2F' codep=0x3b68 wordp=0xea2f
// ================================================
// 0xea2f: dw 0x0001 0xdcac

// ================================================
// 0xea33: WORD 'WEA35' codep=0x224c wordp=0xea35 params=0 returns=2
// ================================================

void WEA35() // WEA35
{
  Push(-1);
  Push(-1);
}


// ================================================
// 0xea3b: WORD 'WEA3D' codep=0x224c wordp=0xea3d params=2 returns=3
// ================================================

void WEA3D() // WEA3D
{
  _2DUP(); // 2DUP
  WEA35(); // WEA35
  D_eq_(); // D=
}


// ================================================
// 0xea45: WORD 'WEA47' codep=0x224c wordp=0xea47 params=0 returns=0
// ================================================

void WEA47() // WEA47
{
  Push(2);
  WE474(); // WE474
  WE47C(); // WE47C
  if (Pop() == 0) return;
  Push2Words("WE6BF");
  Push(1);
  Push(0x0014);
  RRND(); // RRND
  CARDS(); // CARDS
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xea61: WORD 'WEA63' codep=0x1d29 wordp=0xea63
// ================================================
// 0xea63: db 0x00 0x00 '  '

// ================================================
// 0xea65: WORD 'WEA67' codep=0x224c wordp=0xea67
// ================================================
// orphan

void WEA67() // WEA67
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xea73: call   1649
  Push(Read16(pp_WEA63)); // WEA63 @
  if (Pop() != 0)
  {
    Push(Pop() + 4); //  4 +
  }
  _2_at_(); // 2@
}


// ================================================
// 0xea86: WORD 'VTB' codep=0xea73 wordp=0xea8e
// ================================================
// 0xea8e: db 0x01 0x00 0x53 0xda 0x01 0x00 0x62 0xda '  S   b '

// ================================================
// 0xea96: WORD 'POSSESSI' codep=0xea73 wordp=0xeaa3
// ================================================
// 0xeaa3: db 0x01 0x00 0xb2 0xda 0x01 0x00 0xa1 0xda '        '

// ================================================
// 0xeaab: WORD 'PRONOUN' codep=0xea73 wordp=0xeab7
// ================================================
// 0xeab7: db 0x01 0x00 0x92 0xda 0x01 0x00 0x81 0xda '        '

// ================================================
// 0xeabf: WORD 'DETERMIN' codep=0xea73 wordp=0xeacc
// ================================================
// 0xeacc: db 0x01 0x00 0xdf 0xda 0x01 0x00 0xed 0xda '        '

// ================================================
// 0xead4: WORD 'POSSES.P' codep=0xea73 wordp=0xeae1
// ================================================
// 0xeae1: db 0x01 0x00 0x90 0xdb 0x01 0x00 0x7e 0xdb '      ~ '

// ================================================
// 0xeae9: WORD 'WEAEB' codep=0x224c wordp=0xeaeb params=1 returns=1
// ================================================

void WEAEB() // WEAEB
{
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(0);
  MAX(); // MAX
  Push(pp_WEA63); // WEA63
  Store_3(); // !_3
}


// ================================================
// 0xeaf9: WORD 'WEAFB' codep=0x224c wordp=0xeafb params=2 returns=3
// ================================================

void WEAFB() // WEAFB
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push2Words("0.");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    Push(Read16(0x63ef+PHRASE_dash_MEM.offset)&0xFF); // PHRASE-MEM<IFIELD> C@
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(Pop()==0x0041?1:0); //  0x0041 =
    Push(Read16(a)); // R@
    Push(Pop()==0x0045?1:0); //  0x0045 =
    Push(Read16(a)); // R@
    Push(Pop()==0x0049?1:0); //  0x0049 =
    Push(Read16(a)); // R@
    Push((Pop()==0x004f?1:0) | (a==0x0055?1:0)); //  0x004f = R> 0x0055 = OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xeb4b: WORD 'WEB4D' codep=0x224c wordp=0xeb4d params=0 returns=0
// ================================================

void WEB4D() // WEB4D
{
  WE413(); // WE413
  if (Pop() == 0) return;
  Push2Words("WE6BF");
  Push(0xdcba); Push(0x0001); // 'MANY'
}


// ================================================
// 0xeb5d: WORD 'WEB5F' codep=0x224c wordp=0xeb5f params=2 returns=0
// ================================================

void WEB5F() // WEB5F
{
  WE69D(); // WE69D
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push2Words("WE6BF");
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xeb6d: WORD 'WEB6F' codep=0x224c wordp=0xeb6f params=2 returns=3
// ================================================

void WEB6F() // WEB6F
{
  _2DUP(); // 2DUP
  Push2Words("WEA2F");
  D_eq_(); // D=
}


// ================================================
// 0xeb77: WORD 'WEB79' codep=0x224c wordp=0xeb79 params=2 returns=2
// ================================================

void WEB79() // WEB79
{
  WEB6F(); // WEB6F
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0xdbc3); Push(0x0001); // ','
}


// ================================================
// 0xeb89: WORD 'WEB8B' codep=0x224c wordp=0xeb8b params=2 returns=2
// ================================================

void WEB8B() // WEB8B
{
  unsigned short int a;
  WE3CF(); // WE3CF
  Push(Pop()==0?1:0); //  0=
  a = Pop(); // >R
  WE39F(); // WE39F
  Push((Pop()==0?1:0) & a); //  0= R> AND
  if (Pop() == 0) return;
  Push(Read16(pp_WEA63)); // WEA63 @
  if (Pop() == 0) return;
  Push(0xdac2); Push(0x0001); // 'S'
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xebaf: WORD 'WEBB1' codep=0x224c wordp=0xebb1 params=2 returns=6
// ================================================

void WEBB1() // WEBB1
{
  WEAFB(); // WEAFB
  if (Pop() != 0)
  {
    Push(0xdad0); Push(0x0001); // 'AN'
  } else
  {
    Push(0xdadf); Push(0x0001); // 'A'
  }
  Push2Words("WE6BF");
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xebcd: WORD 'WEBCF' codep=0x224c wordp=0xebcf params=2 returns=2
// ================================================

void WEBCF() // WEBCF
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
}


// ================================================
// 0xebd9: WORD 'WEBDB' codep=0x224c wordp=0xebdb params=2 returns=2
// ================================================

void WEBDB() // WEBDB
{
  WEB6F(); // WEB6F
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  while(1)
  {
    Push2Words("WEA2F");
    _2OVER(); // 2OVER
    D_dash_(); // D-
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) break;

    WEA3D(); // WEA3D
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      U_gt__do_(); // U>$
      WE8C7(); // WE8C7
    } else
    {
      CI(); // CI
      Push2Words("WE6BF");
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(!((Read16(Read16(pp_PM_dash_PTR))&0xFF)==0?1:0)); // PM-PTR @ C@ 0= NOT
        if (Pop() != 0)
        {
          WEBCF(); // WEBCF
          WE8C7(); // WE8C7
          ICLOSE(); // ICLOSE
        } else
        {
          Pop(); Pop(); // 2DROP
        }
      } else
      {
        WEBCF(); // WEBCF
        WE8C7(); // WE8C7
        ICLOSE(); // ICLOSE
      }
    }
  }
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec39: WORD 'WEC3B' codep=0x224c wordp=0xec3b params=0 returns=0
// ================================================

void WEC3B() // WEC3B
{
  Push(1);
  Push(pp_LINE_dash_COUNT); // LINE-COUNT
  Store_3(); // !_3
  Push(0);
  Push(pp_WE6C9); // WE6C9
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  Push(pp_PM_dash_PTR); // PM-PTR
  Store_3(); // !_3
  C_ex_(); // C!
}


// ================================================
// 0xec51: WORD 'WEC53' codep=0x224c wordp=0xec53 params=0 returns=0
// ================================================

void WEC53() // WEC53
{
  unsigned short int a, b;
  Push(Read16(cc_TEXTC_slash_L)); // TEXTC/L
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_WE6C9); // WE6C9
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  C_ex_(); // C!
  Push(b + 1); // R> 1+
  Push(a); // R>
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(1);
  Push(pp_LINE_dash_COUNT); // LINE-COUNT
  Store_3(); // !_3
  Push(pp_WE6C9); // WE6C9
  WLINE_dash_UP(); // WLINE-UP
}


// ================================================
// 0xec77: WORD 'WEC79' codep=0x224c wordp=0xec79 params=2 returns=0
// ================================================

void WEC79() // WEC79
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  WEB6F(); // WEB6F
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WEC3B(); // WEC3B
    Pop(); Pop(); // 2DROP
    WE2E6(); // WE2E6
    a = Pop(); // >R
    b = Pop(); // >R
    WEBDB(); // WEBDB
    WE867(); // WE867
    Push(b); // R>
    Push(a); // R>
    WE2F2(); // WE2F2
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeca1: WORD 'WECA3' codep=0x224c wordp=0xeca3
// ================================================

void WECA3() // WECA3
{
  LoadData(WE4E0); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  WEA1B(); // WEA1B
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    Push(0xdb13); Push(0x0001); // 'LIFEFORM'
    return;
  }
  Push(0xdafe); Push(0x0001); // 'CREATURE'
}


// ================================================
// 0xecc3: WORD 'WECC5' codep=0x224c wordp=0xecc5
// ================================================

void WECC5() // WECC5
{
  unsigned short int a;
  LoadData(RESEMBLES); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  WE69D(); // WE69D
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    LoadData(SHAPE); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(0xdddc); Push(0x0001); // 'BILATERAL'
    D_eq_(); // D=
    a = Pop(); // >R
    LoadData(WE4E0); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    WEA1B(); // WEA1B
    Push((Pop()==pp_PLANTS?1:0) & a); //  PLANTS = R> AND
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
    }
  }
  Push2Words("WE6BF");
}


// ================================================
// 0xecfb: WORD 'WECFD' codep=0x224c wordp=0xecfd
// ================================================

void WECFD() // WECFD
{
  Push2Words("WE6BF");
  Push(0xdcf4); Push(0x0001); // 'WITH'
  Push2Words("WE6BF");
  WEB79(); // WEB79
  WECA3(); // WECA3
  Push2Words("WE6BF");
  WECC5(); // WECC5
  Push(0x0028);
  WE474(); // WE474
  WE47C(); // WE47C
  if (Pop() != 0)
  {
    LoadData(WE590); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    Push2Words("WE6BF");
  }
  LoadData(WE678); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  WEBB1(); // WEBB1
}


// ================================================
// 0xed29: WORD 'WED2B' codep=0x224c wordp=0xed2b params=3 returns=0
// ================================================

void WED2B() // WED2B
{
  unsigned short int a, b, c;
  WE47C(); // WE47C
  if (Pop() != 0)
  {
    ROT(); // ROT
    a = Pop(); // >R
    SWAP(); // SWAP
    b = Pop(); // >R
    c = Pop(); // >R
    Push2Words("WE6BF");
    Push(c); // R>
    IFLD_at_(); // IFLD@
    Push(b); // R>
    IFLD_at_(); // IFLD@
    WEB5F(); // WEB5F
    Push(a); // R>
    IFLD_at_(); // IFLD@
    WEB5F(); // WEB5F
    return;
  }
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed57: WORD 'WED59' codep=0x224c wordp=0xed59 params=1 returns=0
// ================================================

void WED59() // WED59
{
  unsigned short int a;
  Push(1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    WEBB1(); // WEBB1
    return;
  }
  Push(0x00ff);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    WEB4D(); // WEB4D
    return;
  }
  a = Pop(); // >R
  Push(Read16(a)); // R@
  if (Pop() != 0)
  {
    Push2Words("WE6BF");
    Push(Read16(a)); // R@
    WEA35(); // WEA35
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xed93: WORD 'WED95' codep=0x224c wordp=0xed95
// ================================================

void WED95() // WED95
{
  unsigned short int a, b, c, d;
  Push2Words("WEA2F");
  LoadData(WE4D0); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0xe668); // 'WE668'
  Push(0xe660); // 'WE660'
  Push(0xe658); // 'WE658'
  Push(0x003c);
  WE474(); // WE474
  WED2B(); // WED2B
  LoadData(WE4F8); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  WEB5F(); // WEB5F
  Push(b); // R>
  Push(a); // R>
  WE39F(); // WE39F
  Push(Pop()==0?1:0); //  0=
  c = Pop(); // >R
  WE3CF(); // WE3CF
  Push(Pop()==0?1:0); //  0=
  d = Pop(); // >R
  Push(0xdfb1); Push(0x0001); // 'BARK'
  D_eq_(); // D=
  Push(!Pop() & (d & c)); //  NOT R> R> AND AND
  if (Pop() != 0)
  {
    WEBB1(); // WEBB1
  }
  Push(0);
  Push(pp_WEA63); // WEA63
  Store_3(); // !_3
}


// ================================================
// 0xedeb: WORD 'WEDED' codep=0x224c wordp=0xeded
// ================================================

void WEDED() // WEDED
{
  Push2Words("WEA2F");
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0xcaa8); Push(0x0001); // 'DEAD'
  } else
  {
    Push(Read16(0x63ef+WE680.offset)&0xFF); // WE680<IFIELD> C@
    LoadData(WE568); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0xe262); Push(0x0001); // 'STUNNED'
    } else
    {
      Push((Read16(0x63ef+WE68A.offset)&0xFF) & 1); // WE68A<IFIELD> C@ 1 AND
      if (Pop() != 0)
      {
        Push(0xe24c); Push(0x0001); // 'ATTACKING'
      } else
      {
        Push(Read16(0x63ef+WE685.offset)&0xFF); // WE685<IFIELD> C@
        if (Pop() != 0)
        {
          LoadData(WE548); // from 'CREATURE'
          _1_dot_5_at_(); // 1.5@
        } else
        {
          LoadData(WE540); // from 'CREATURE'
          _1_dot_5_at_(); // 1.5@
        }
      }
    }
  }
  Push2Words("WE6BF");
  Push(0xdd05); Push(0x0001); // 'APPEARS TO BE'
  Push2Words("WE6BF");
  PRONOUN(); // PRONOUN
}


// ================================================
// 0xee53: WORD 'WEE55' codep=0x1d29 wordp=0xee55
// ================================================
// 0xee55: db 0x00 0xe5 0x08 0xe5 0xc8 0xe5 0xd0 0xe5 0xd8 0xe5 0xe0 0xe5 0xe8 0xe5 0xf0 0xe5 '                '

// ================================================
// 0xee65: WORD 'WEE67' codep=0x1d29 wordp=0xee67
// ================================================
// 0xee67: db 0x10 0xe5 0x18 0xe5 0x98 0xe5 0xa0 0xe5 0xa8 0xe5 0xb0 0xe5 0xb8 0xe5 0xc0 0xe5 '                '

// ================================================
// 0xee77: WORD 'WEE79' codep=0x1d29 wordp=0xee79
// ================================================
// 0xee79: db 0x30 0xe5 0x38 0xe5 0x28 0xe6 0x30 0xe6 0x38 0xe6 0x40 0xe6 0x48 0xe6 0x50 0xe6 '0 8 ( 0 8 @ H P '

// ================================================
// 0xee89: WORD 'WEE8B' codep=0x1d29 wordp=0xee8b
// ================================================
// 0xee8b: db 0x20 0xe5 0x28 0xe5 0xf8 0xe5 0x00 0xe6 0x08 0xe6 0x10 0xe6 0x18 0xe6 0x20 0xe6 '  (             '

// ================================================
// 0xee9b: WORD 'WEE9D' codep=0x1d29 wordp=0xee9d
// ================================================
// 0xee9d: db 0x3a 0x20 ': '

// ================================================
// 0xee9f: WORD 'WEEA1' codep=0x224c wordp=0xeea1 params=0 returns=1
// ================================================

void WEEA1() // WEEA1
{
  Push(Read16(pp_WEE9D)); // WEE9D @
}


// ================================================
// 0xeea7: WORD 'WEEA9' codep=0x1d29 wordp=0xeea9
// ================================================
// 0xeea9: db 0x3a 0x20 ': '

// ================================================
// 0xeeab: WORD 'WEEAD' codep=0x224c wordp=0xeead params=2 returns=2
// ================================================

void WEEAD() // WEEAD
{
  Push(Read16(pp_WEEA9)); // WEEA9 @
  if (Pop() != 0)
  {
    Push(0xdb5b); Push(0x0001); // 'AND'
    Push2Words("WE6BF");
  } else
  {
    WEB79(); // WEB79
  }
  Push(pp_WEEA9); // WEEA9
  OFF(); // OFF
}


// ================================================
// 0xeec9: WORD 'WEECB' codep=0x224c wordp=0xeecb
// ================================================

void WEECB() // WEECB
{
  unsigned short int a, b, c, d;
  WEEA1(); // WEEA1
  Push(Read16(Pop())); //  @
  IFLD_at_(); // IFLD@
  WE69D(); // WE69D
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _2OVER(); // 2OVER
    WEB6F(); // WEB6F
    a = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Push(a==0?1:0); // R> 0=
    if (Pop() != 0)
    {
      b = Pop(); // >R
      c = Pop(); // >R
      Push2Words("WE6BF");
      WEEAD(); // WEEAD
      Push(c); // R>
      Push(b); // R>
    } else
    {
      Push(pp_WEEA9); // WEEA9
      ON_3(); // ON_3
    }
    WEEA1(); // WEEA1
    Push(Read16(Pop() + 2)); //  2 + @
    IFLD_at_(); // IFLD@
    WEAEB(); // WEAEB
    Pop(); // DROP
    WEB8B(); // WEB8B
    WEEA1(); // WEEA1
    d = Pop(); // >R
    Push(Read16(d)); // R@
    Push(Read16(Pop() + 8)); //  8 + @
    Push(Read16(d)); // R@
    Push(Read16(Pop() + 6)); //  6 + @
    Push(Read16(d + 4)); // R> 4 + @
    Push(0x0032);
    WE474(); // WE474
    WED2B(); // WED2B
    WEA47(); // WEA47
    WEEA1(); // WEEA1
    Push(Read16(Pop() + 0x000a)); //  0x000a + @
    IFLD_at_(); // IFLD@
    WE69D(); // WE69D
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WE413(); // WE413
      if (Pop() != 0)
      {
        WEEA1(); // WEEA1
        Push(Read16(Pop() + 0x000c)); //  0x000c + @
        IFLD_at_(); // IFLD@
        WEB5F(); // WEB5F
      }
    } else
    {
      WEB5F(); // WEB5F
    }
    WEEA1(); // WEEA1
    Push(Read16(Pop() + 0x000e)); //  0x000e + @
    IFLD_at_(); // IFLD@
    WEB5F(); // WEB5F
    WEEA1(); // WEEA1
    Push(Read16(Pop() + 2)); //  2+ @
    IFLD_at_(); // IFLD@
    WED59(); // WED59
  }
  Push(pp_WEA63); // WEA63
  OFF(); // OFF
}


// ================================================
// 0xef81: WORD 'WEF83' codep=0x224c wordp=0xef83
// ================================================

void WEF83() // WEF83
{
  Push2Words("WEA2F");
  LoadData(WE578); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x001e);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(pp_WEE55); // WEE55
    Push(pp_WEE9D); // WEE9D
    Store_3(); // !_3
    WEECB(); // WEECB
  }
  Push(pp_WEE67); // WEE67
  Push(pp_WEE9D); // WEE9D
  Store_3(); // !_3
  WEECB(); // WEECB
  Push(pp_WEE8B); // WEE8B
  Push(pp_WEE9D); // WEE9D
  Store_3(); // !_3
  WEECB(); // WEECB
  Push(pp_WEE79); // WEE79
  Push(pp_WEE9D); // WEE9D
  Store_3(); // !_3
  WEECB(); // WEECB
  WEB6F(); // WEB6F
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push2Words("WE6BF");
  POSSESSI(); // POSSESSI
  Push2Words("WE6BF");
  PRONOUN(); // PRONOUN
}


// ================================================
// 0xefc5: WORD 'POSSIBIL' codep=0xe963 wordp=0xefd2
// ================================================
// 0xefd2: db 0x06 0x00 0x00 0x00 0x01 0x00 0xda 0xef 0x14 0x49 0xdb 0x01 0x27 0x68 0xdc 0x01 0x39 0x4e 0xdc 0x01 0x64 0x36 0xdb 0x01 '         I  'h  9N  d6  '

// ================================================
// 0xefea: WORD 'WEFEC' codep=0x224c wordp=0xefec params=0 returns=0
// ================================================

void WEFEC() // WEFEC
{
  unsigned short int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
  WE413(); // WE413
  if (Pop() == 0) return;
  WE41D(); // WE41D
  a = Pop(); // >R
  Push(9);
  WE68F(); // WE68F
  Push(0xdc9d); Push(0x0001); // 'M.'
  D_eq_(); // D=
  if (Pop() != 0)
  {
    b = Pop(); // >R
    c = Pop(); // >R
    d = Pop(); // >R
    e = Pop(); // >R
    f = Pop(); // >R
    g = Pop(); // >R
    h = Pop(); // >R
    i = Pop(); // >R
    j = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); // DROP
    Push(j); // R>
    Push(i); // R>
    Push(h); // R>
    Push(g); // R>
    Push(f); // R>
    Push(e); // R>
    Push(d); // R>
    Push(c); // R>
    Push(b); // R>
  }
  k = Pop(); // >R
  l = Pop(); // >R
  m = Pop(); // >R
  n = Pop(); // >R
  Push(0x000a);
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
    Push(Pop() * 0x000a); //  0x000a *
  }
  Push(n); // R>
  Push(m); // R>
  Push(l); // R>
  Push(k); // R>
  Push(a); // R>
  Push(0x0001); Push(0x0000);
  POSSIBIL(); // POSSIBIL
  WEA0D(); // WEA0D
  Push2Words("WE6BF");
}


// ================================================
// 0xf06c: WORD 'WF06E' codep=0x224c wordp=0xf06e
// ================================================

void WF06E() // WF06E
{
  unsigned short int a, b;
  Push2Words("WEA2F");
  Push(0xdc7c); Push(0x0001); // 'TALL'
  Push2Words("WE6BF");
  LoadData(WE580); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() != 0)
  {
    a = Pop(); // >R
    Push(0xdc8d); Push(0x0001); // 'CM.'
  } else
  {
    Push(0x0064);
    _slash_MOD(); // /MOD
    b = Pop(); // >R
    Push(0xdc8d); Push(0x0001); // 'CM.'
    Push2Words("WE6BF");
    Push(5);
    ROLL(); // ROLL
    WEA35(); // WEA35
    Push2Words("WE6BF");
    Push(0xdc9d); Push(0x0001); // 'M.'
  }
  Push2Words("WE6BF");
  Push(a); // R>
  WEA35(); // WEA35
  Push2Words("WE6BF");
  WEFEC(); // WEFEC
  Push(0xcab9); Push(0x0001); // 'HEIGHT:'
}


// ================================================
// 0xf0c4: WORD 'SAYIT' codep=0x224c wordp=0xf0ce
// ================================================

void SAYIT() // SAYIT
{
  Push(pp_WE6C5); // WE6C5
  OFF_2(); // OFF_2
  WED95(); // WED95
  WECFD(); // WECFD
  WEC79(); // WEC79
  WEF83(); // WEF83
  WEC79(); // WEC79
  WEDED(); // WEDED
  WEC79(); // WEC79
}


// ================================================
// 0xf0e2: WORD 'ANALOGS' codep=0xe963 wordp=0xf0ee
// ================================================
// 0xf0ee: db 0x0c 0x00 0x00 0x00 0x01 0x00 0xfc 0xf0 0x00 0x00 0x02 0x00 0x34 0xf1 0x05 0x35 0xc8 0x01 0x0a 0x47 0xc8 0x01 0x0f 0x58 0xc8 0x01 0x14 0x69 0xc8 0x01 0x1e 0x7e 0xc8 0x01 0x1f 0x90 0xc8 0x01 0x20 0xa0 0xc8 0x01 0x2d 0xb6 0xc8 0x01 0x3c 0xc8 0xc8 0x01 0x4b 0xdc 0xc8 0x01 0x55 0xed 0xc8 0x01 0x5a 0xff 0xc8 0x01 0x5f 0x13 0xc9 0x01 0x64 0x27 0xc9 0x01 0x04 0x3d 0xc9 0x01 0x08 0x50 0xc9 0x01 0x0c 0x74 0xc9 0x01 0x14 0x61 0xc9 0x01 0x1e 0x84 0xc9 0x01 0x1f 0x90 0xc8 0x01 0x20 0x96 0xc9 0x01 0x2d 0xaa 0xc9 0x01 0x3c 0xbd 0xc9 0x01 0x4b 0xcd 0xc9 0x01 0x5a 0xdd 0xc9 0x01 0x64 0xf0 0xc9 0x01 '            4  5   G   X   i   ~          -   <   K   U   Z   _   d'   =   P   t   a              -   <   K   Z   d   '

// ================================================
// 0xf164: WORD 'WF166' codep=0x224c wordp=0xf166
// ================================================

void WF166() // WF166
{
  unsigned short int a, b;
  WE2E6(); // WE2E6
  a = Pop(); // >R
  b = Pop(); // >R
  Push(pp_WE6C5); // WE6C5
  OFF(); // OFF
  WEC3B(); // WEC3B
  WF06E(); // WF06E
  WEC79(); // WEC79
  WEC3B(); // WEC3B
  Push(0xca39); Push(0x0001); // 'NICHE: '
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  LoadData(WE4E0); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  NICHE_dash_SE(); // NICHE-SE
  _1_dot_5_at_(); // 1.5@
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  WE867(); // WE867
  WEC3B(); // WEC3B
  Push(0xca66); Push(0x0001); // 'AGGRESSION ANALOG: '
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  LoadData(WE578); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0001); Push(0x0000);
  ANALOGS(); // ANALOGS
  WEA0D(); // WEA0D
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  WE867(); // WE867
  WEC3B(); // WEC3B
  Push(0xca86); Push(0x0001); // 'INTELLIGENCE ANALOG: '
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  LoadData(WE570); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0002); Push(0x0000);
  ANALOGS(); // ANALOGS
  WEA0D(); // WEA0D
  WEBCF(); // WEBCF
  WE8C7(); // WE8C7
  ICLOSE(); // ICLOSE
  WE867(); // WE867
  Push(3);
  Push(pp_WE6C5); // WE6C5
  _plus__ex__2(); // +!_2
  Push(b); // R>
  Push(a); // R>
  WE2F2(); // WE2F2
}


// ================================================
// 0xf1ea: WORD 'WF1EC' codep=0x224c wordp=0xf1ec params=2 returns=0
// ================================================

void WF1EC() // WF1EC
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf20c: WORD 'WF20E' codep=0x224c wordp=0xf20e params=0 returns=0
// ================================================

void WF20E() // WF20E
{
  Push(0);
  Push(6);
  WF1EC(); // WF1EC
  Push(1);
  Push(pp_WE6C5); // WE6C5
  Store_3(); // !_3
}


// ================================================
// 0xf21c: WORD 'WF21E' codep=0x224c wordp=0xf21e params=0 returns=0
// ================================================

void WF21E() // WF21E
{
  WF20E(); // WF20E
  PRINT("YOUR SHIP ", 10); // (.")
}


// ================================================
// 0xf22f: WORD 'WF231' codep=0x224c wordp=0xf231
// ================================================

void WF231() // WF231
{
  WF20E(); // WF20E
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  Push(0x0018);
  Push(0x002e);
  WE435(); // WE435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf243: WORD 'WF245' codep=0x224c wordp=0xf245
// ================================================

void WF245() // WF245
{
  WF20E(); // WF20E
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Draw(); // .
  PRINT("CUBIC METER(S) ", 15); // (.")
  LoadData(WE4B8); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  WE435(); // WE435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf279: WORD 'WF27B' codep=0x224c wordp=0xf27b params=0 returns=0
// ================================================

void WF27B() // WF27B
{
  WF20E(); // WF20E
  PRINT("YOUR TERRAIN VEHICLE ", 21); // (.")
}


// ================================================
// 0xf297: WORD 'WF299' codep=0x224c wordp=0xf299
// ================================================

void WF299() // WF299
{
  WF20E(); // WF20E
  PRINT("A ", 2); // (.")
  LoadData(SPEC_dash_NAME); // from 'SPECIMEN'
  Push(0x0010);
  Push(0x002e);
  WE435(); // WE435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" SPECIMEN ", 10); // (.")
}


// ================================================
// 0xf2bd: WORD 'WF2BF' codep=0x224c wordp=0xf2bf params=0 returns=0
// ================================================

void WF2BF() // WF2BF
{
  WF20E(); // WF20E
  PRINT("A RUIN ", 7); // (.")
}


// ================================================
// 0xf2cd: WORD 'WF2CF' codep=0x224c wordp=0xf2cf params=0 returns=0
// ================================================

void WF2CF() // WF2CF
{
  WF20E(); // WF20E
  PRINT("A MESSAGE ", 10); // (.")
}


// ================================================
// 0xf2e0: WORD 'CLASS>DE' codep=0x4a4f wordp=0xf2ed
// ================================================
// entry

void CLASS_gt_DE() // CLASS>DE
{
  switch(Pop()) // CLASS>DE
  {
  case 68:
    SAYIT(); // SAYIT
    break;
  case 42:
    WF27B(); // WF27B
    break;
  case 40:
    WF299(); // WF299
    break;
  case 20:
    WF21E(); // WF21E
    break;
  case 41:
    WF2BF(); // WF2BF
    break;
  case 26:
    WF245(); // WF245
    break;
  case 28:
    WF231(); // WF231
    break;
  case 27:
    WF2CF(); // WF2CF
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf311: WORD 'CLASS>TY' codep=0x4a4f wordp=0xf31e
// ================================================

void CLASS_gt_TY() // CLASS>TY
{
  switch(Pop()) // CLASS>TY
  {
  case 68:
    WF166(); // WF166
    break;
  case 42:
    WF27B(); // WF27B
    break;
  case 40:
    WF299(); // WF299
    break;
  case 20:
    WF21E(); // WF21E
    break;
  case 41:
    WF2BF(); // WF2BF
    break;
  case 26:
    WF245(); // WF245
    break;
  case 28:
    WF231(); // WF231
    break;
  case 27:
    WF2CF(); // WF2CF
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf342: WORD '?TALK' codep=0x224c wordp=0xf34c params=1 returns=0
// ================================================
// entry

void IsTALK() // ?TALK
{
  unsigned short int a, i, imax;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Read16(pp_NCRS)==3?1:0); // NCRS @ 3 =
      if (Pop() != 0)
      {
        CLASS_gt_DE(); // CLASS>DE case
      } else
      {
        CLASS_gt_TY(); // CLASS>TY case
      }
      ICLOSE(); // ICLOSE
      Push(imax); // I'
      Push(1);
      _gt_(); // >
      Push(Pop() & !(i + 1==imax?1:0)); //  I 1+ I' = NOT AND
      if (Pop() != 0)
      {
        Push(0x05dc);
        MS(); // MS
        WEC53(); // WEC53
        WEC53(); // WEC53
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}

// 0xf3aa: db 0x53 0x45 0x4e 0x54 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x60 0x16 0xfc 0x00 0xfc 0xe2 0x95 0x49 0x16 0x16 0x05 0xd9 0x01 0x00 0x39 0x40 0x4c 0xe3 0x95 0x49 0x16 0x16 0xba 0xcb 0x01 0x00 0x39 0x40 0xf5 0x12 0xfa 0x15 0x32 0x32 0x37 0x32 0xc4 0xc5 0x01 0x00 0x60 0x16 0xd4 0x00 0x24 0xe3 0x95 0x49 0x16 0x16 0xb6 0xce 0x01 0x00 0x39 0x40 0xfa 0x15 0x26 0x00 0x3c 0xe3 0x95 0x49 0x16 0x16 0x59 0xdf 0x01 0x00 0x39 0x40 0xfa 0x15 0x0c 0x00 0x16 0x16 0x90 0xc6 0x01 0x00 0x60 0x16 0x08 0x00 0x16 0x16 0x7a 0xc6 0x01 0x00 0x60 0x16 0xa0 0x00 0xfc 0xe2 0x95 0x49 0x16 0x16 0x00 0xe0 0x01 0x00 0x39 0x40 0xfa 0x15 0x8e 0x00 0x04 0xe3 0x73 0x3b 0x46 0x12 0xfa 0x15 0x0c 0x00 0x16 0x16 0x62 0xc6 0x01 0x00 0x60 0x16 0x76 0x00 0x5c 0xe3 0x95 0x49 0x16 0x16 0x17 0xcd 0x01 0x00 0x39 0x40 0xb4 0x0d 0x64 0xe3 0x92 0x0c 0x41 0x0e 0x73 0x3b 0x5f 0x12 0xf2 0x0e 0x7b 0x3b 0x5f 0x12 0x3e 0x13 0x90 0x0e 0xf5 0x12 0xfa 0x15 0x4c 0x00 0xbc 0xe3 0x95 0x49 0xf0 0x0d 0xf0 0x0d 0x16 0x16 0x59 0xe0 0x01 0x00 0x39 0x40 0x06 0x0e 0x16 0x16 0x6b 0xe0 0x01 0x00 0x39 0x40 0x3e 0x13 0xfa 0x15 0x0e 0x00 0x32 0x0e 0x16 0x16 0x36 0xc6 0x01 0x00 0x60 0x16 0x1c 0x00 0x20 0x0f 0x4d 0xe2 0x1f 0xe1 0x9b 0x3b 0x2d 0x12 0xfa 0x15 0x0c 0x00 0x16 0x16 0xaa 0xc5 0x01 0x00 0x60 0x16 0x04 0x00 0x58 0x51 0x60 0x16 0x04 0x00 0x58 0x51 0x60 0x16 0x04 0x00 0x58 0x51 0x90 0x16 0x4c 0x22 0x0c 0xe3 0x92 0x0c 0x7b 0x3b 0x9f 0x11 0xfa 0x15 0x08 0x00 0xb4 0xf1 0x60 0x16 0x0e 0x00 0x54 0xf2 0xc8 0x0d 0x89 0x12 0xfa 0x15 0x04 0x00 0x82 0xf3 0xa4 0xe4 0x92 0x6d 0x90 0x16 0xe8 0xe1 0x8a 0x53 0x50 0x45 0x43 0x2e 0x50 0x41 0x52 0xcd 0x4c 0x22 0xb4 0xe4 0x9b 0x54 0xae 0x0b 0xae 0x4a 0xfd 0x4b 0x60 0xf1 0xb1 0xeb 0x3d 0xec 0x7f 0xec 0x89 0xec 0x93 0xec 0x2f 0xef 0xae 0xf0 0x48 0xf1 0x78 0xf1 0xca 0xf4 0x35 0xed 0xad 0xed 0xd9 0xef 0x1c 0xf1 0x90 0x16 0x4c 0x4f 0x50 0x41 0x52 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x32 0x32 0x31 0x38 0x2d 0x2d 0x2d 0x2d 0x00 'SENTS___________________________`      I      9@L  I      9@    2272    `   $  I      9@  & <  I  Y   9@          `     z   `      I      9@      s;F       b   ` v \  I      9@  d   A s;_   {;_ >       L    I      Y   9@    k   9@>     2   6   `     M    ;-           `   XQ`   XQ`   XQ  L"    {;        `   T              m     SPEC.PAR L"   T   J K`   =      /   H x   5         LOPARMS________________________________---------2218---- '

