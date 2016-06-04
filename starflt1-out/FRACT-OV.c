// ====== OVERLAY 'FRACT-OV' ======

#include"interface.h"

// store offset = 0xe340
// overlay size   = 0x1220

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xe356  codep:0x1d29 parp:0xe356 size:0x0002 C-string:'UNK_0xe356'
// 1704:      UNK_0xe35a  codep:0x1d29 parp:0xe35a size:0x0002 C-string:'UNK_0xe35a'
// 1705:      UNK_0xe35e  codep:0x1d29 parp:0xe35e size:0x0004 C-string:'UNK_0xe35e'
// 1706:      UNK_0xe364  codep:0x2214 parp:0xe364 size:0x000a C-string:'UNK_0xe364'
// 1707:      UNK_0xe370  codep:0x1d29 parp:0xe370 size:0x0002 C-string:'UNK_0xe370'
// 1708:      UNK_0xe374  codep:0x1d29 parp:0xe374 size:0x000a C-string:'UNK_0xe374'
// 1709:      UNK_0xe380  codep:0x3b68 parp:0xe380 size:0x0004 C-string:'UNK_0xe380'
// 1710:      UNK_0xe386  codep:0x2214 parp:0xe386 size:0x0012 C-string:'UNK_0xe386'
// 1711:      UNK_0xe39a  codep:0x224c parp:0xe39a size:0x000a C-string:'UNK_0xe39a'
// 1712:      UNK_0xe3a6  codep:0x224c parp:0xe3a6 size:0x018f C-string:'UNK_0xe3a6'
// 1713:      UNK_0xe537  codep:0xe537 parp:0xe537 size:0x0008 C-string:'UNK_0xe537'
// 1714:      UNK_0xe541  codep:0x224c parp:0xe541 size:0x021b C-string:'UNK_0xe541'
// 1715:      UNK_0xe75e  codep:0xe75e parp:0xe75e size:0x0010 C-string:'UNK_0xe75e'
// 1716:      UNK_0xe770  codep:0xe770 parp:0xe770 size:0x001a C-string:'UNK_0xe770'
// 1717:      UNK_0xe78c  codep:0x224c parp:0xe78c size:0x001c C-string:'UNK_0xe78c'
// 1718:    MERCATOR-GEN  codep:0x224c parp:0xe7b9 size:0x003c C-string:'MERCATOR_minus_GEN'
// 1719:      UNK_0xe7f7  codep:0x3b68 parp:0xe7f7 size:0x0004 C-string:'UNK_0xe7f7'
// 1720:      UNK_0xe7fd  codep:0x2214 parp:0xe7fd size:0x0002 C-string:'UNK_0xe7fd'
// 1721:      UNK_0xe801  codep:0x224c parp:0xe801 size:0x000c C-string:'UNK_0xe801'
// 1722:      UNK_0xe80f  codep:0x224c parp:0xe80f size:0x005e C-string:'UNK_0xe80f'
// 1723:      UNK_0xe86f  codep:0x224c parp:0xe86f size:0x0030 C-string:'UNK_0xe86f'
// 1724:      UNK_0xe8a1  codep:0x224c parp:0xe8a1 size:0x0054 C-string:'UNK_0xe8a1'
// 1725:      UNK_0xe8f7  codep:0x224c parp:0xe8f7 size:0x0028 C-string:'UNK_0xe8f7'
// 1726:      UNK_0xe921  codep:0x224c parp:0xe921 size:0x002c C-string:'UNK_0xe921'
// 1727:      UNK_0xe94f  codep:0x224c parp:0xe94f size:0x0028 C-string:'UNK_0xe94f'
// 1728:      UNK_0xe979  codep:0x224c parp:0xe979 size:0x000a C-string:'UNK_0xe979'
// 1729:      UNK_0xe985  codep:0x224c parp:0xe985 size:0x009a C-string:'UNK_0xe985'
// 1730:      UNK_0xea21  codep:0x224c parp:0xea21 size:0x0014 C-string:'UNK_0xea21'
// 1731:      UNK_0xea37  codep:0x224c parp:0xea37 size:0x005e C-string:'UNK_0xea37'
// 1732:      UNK_0xea97  codep:0x224c parp:0xea97 size:0x0038 C-string:'UNK_0xea97'
// 1733:      UNK_0xead1  codep:0xead1 parp:0xead1 size:0x0009 C-string:'UNK_0xead1'
// 1734:      UNK_0xeadc  codep:0xeadc parp:0xeadc size:0x000c C-string:'UNK_0xeadc'
// 1735:      UNK_0xeaea  codep:0xeaea parp:0xeaea size:0x000c C-string:'UNK_0xeaea'
// 1736:      UNK_0xeaf8  codep:0xeaf8 parp:0xeaf8 size:0x000c C-string:'UNK_0xeaf8'
// 1737:      UNK_0xeb06  codep:0x224c parp:0xeb06 size:0x0006 C-string:'UNK_0xeb06'
// 1738:      UNK_0xeb0e  codep:0x224c parp:0xeb0e size:0x0006 C-string:'UNK_0xeb0e'
// 1739:      UNK_0xeb16  codep:0x224c parp:0xeb16 size:0x0008 C-string:'UNK_0xeb16'
// 1740:      UNK_0xeb20  codep:0x224c parp:0xeb20 size:0x0006 C-string:'UNK_0xeb20'
// 1741:      UNK_0xeb28  codep:0x224c parp:0xeb28 size:0x0006 C-string:'UNK_0xeb28'
// 1742:      UNK_0xeb30  codep:0x224c parp:0xeb30 size:0x0006 C-string:'UNK_0xeb30'
// 1743:      UNK_0xeb38  codep:0x224c parp:0xeb38 size:0x0008 C-string:'UNK_0xeb38'
// 1744:      UNK_0xeb42  codep:0x224c parp:0xeb42 size:0x0008 C-string:'UNK_0xeb42'
// 1745:      UNK_0xeb4c  codep:0x224c parp:0xeb4c size:0x0006 C-string:'UNK_0xeb4c'
// 1746:      UNK_0xeb54  codep:0x224c parp:0xeb54 size:0x0008 C-string:'UNK_0xeb54'
// 1747:      UNK_0xeb5e  codep:0x224c parp:0xeb5e size:0x0016 C-string:'UNK_0xeb5e'
// 1748:         POLYPTR  codep:0x1d29 parp:0xeb80 size:0x0002 C-string:'POLYPTR'
// 1749:      UNK_0xeb84  codep:0x1d29 parp:0xeb84 size:0x0002 C-string:'UNK_0xeb84'
// 1750:      UNK_0xeb88  codep:0x1d29 parp:0xeb88 size:0x0002 C-string:'UNK_0xeb88'
// 1751:      UNK_0xeb8c  codep:0x1d29 parp:0xeb8c size:0x0002 C-string:'UNK_0xeb8c'
// 1752:      UNK_0xeb90  codep:0x224c parp:0xeb90 size:0x006a C-string:'UNK_0xeb90'
// 1753:      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x0060 C-string:'UNK_0xebfc'
// 1754: POLYGON-EXTRACT  codep:0x224c parp:0xec70 size:0x0054 C-string:'POLYGON_minus_EXTRACT'
// 1755:      UNK_0xecc6  codep:0x224c parp:0xecc6 size:0x0068 C-string:'UNK_0xecc6'
// 1756:      UNK_0xed30  codep:0x1d29 parp:0xed30 size:0x0002 C-string:'UNK_0xed30'
// 1757:      UNK_0xed34  codep:0xed34 parp:0xed34 size:0x000e C-string:'UNK_0xed34'
// 1758:      UNK_0xed44  codep:0xed44 parp:0xed44 size:0x000a C-string:'UNK_0xed44'
// 1759:      UNK_0xed50  codep:0xed50 parp:0xed50 size:0x0010 C-string:'UNK_0xed50'
// 1760:      UNK_0xed62  codep:0xed62 parp:0xed62 size:0x0011 C-string:'UNK_0xed62'
// 1761:           FADDR  codep:0x1d29 parp:0xed7d size:0x0002 C-string:'FADDR'
// 1762:      UNK_0xed81  codep:0x1d29 parp:0xed81 size:0x0002 C-string:'UNK_0xed81'
// 1763:      UNK_0xed85  codep:0x1d29 parp:0xed85 size:0x0002 C-string:'UNK_0xed85'
// 1764:      UNK_0xed89  codep:0x1d29 parp:0xed89 size:0x0002 C-string:'UNK_0xed89'
// 1765:      UNK_0xed8d  codep:0x224c parp:0xed8d size:0x004a C-string:'UNK_0xed8d'
// 1766:      UNK_0xedd9  codep:0x224c parp:0xedd9 size:0x008a C-string:'UNK_0xedd9'
// 1767:      UNK_0xee65  codep:0xee65 parp:0xee65 size:0x002f C-string:'UNK_0xee65'
// 1768:      UNK_0xee96  codep:0xee96 parp:0xee96 size:0x002a C-string:'UNK_0xee96'
// 1769:      UNK_0xeec2  codep:0xeec2 parp:0xeec2 size:0x0008 C-string:'UNK_0xeec2'
// 1770:      UNK_0xeecc  codep:0xeecc parp:0xeecc size:0x0017 C-string:'UNK_0xeecc'
// 1771:      UNK_0xeee5  codep:0xeee5 parp:0xeee5 size:0x0013 C-string:'UNK_0xeee5'
// 1772:      UNK_0xeefa  codep:0x224c parp:0xeefa size:0x008a C-string:'UNK_0xeefa'
// 1773:      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0018 C-string:'UNK_0xef86'
// 1774:      MAKE-GLOBE  codep:0x224c parp:0xefad size:0x0006 C-string:'MAKE_minus_GLOBE'
// 1775:      UNK_0xefb5  codep:0x224c parp:0xefb5 size:0x0022 C-string:'UNK_0xefb5'
// 1776:      UNK_0xefd9  codep:0x224c parp:0xefd9 size:0x0020 C-string:'UNK_0xefd9'
// 1777:      UNK_0xeffb  codep:0x224c parp:0xeffb size:0x0026 C-string:'UNK_0xeffb'
// 1778:      UNK_0xf023  codep:0x224c parp:0xf023 size:0x0024 C-string:'UNK_0xf023'
// 1779:      UNK_0xf049  codep:0x224c parp:0xf049 size:0x0040 C-string:'UNK_0xf049'
// 1780:      UNK_0xf08b  codep:0x224c parp:0xf08b size:0x0040 C-string:'UNK_0xf08b'
// 1781:         SCRLCON  codep:0x224c parp:0xf0d7 size:0x0022 C-string:'SCRLCON'
// 1782:      NEWCONTOUR  codep:0x224c parp:0xf108 size:0x0458 C-string:'NEWCONTOUR'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe356[2] = {0x3a, 0x20}; // UNK_0xe356
unsigned char UNK_0xe35a[2] = {0x3a, 0x20}; // UNK_0xe35a
unsigned char UNK_0xe35e[4] = {0x56, 0x3a, 0x20, 0x6e}; // UNK_0xe35e
unsigned char UNK_0xe370[2] = {0x3a, 0x20}; // UNK_0xe370
unsigned char UNK_0xe374[10] = {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xe374
unsigned char POLYPTR[2] = {0x20, 0x4f}; // POLYPTR
unsigned char UNK_0xeb84[2] = {0x3a, 0x20}; // UNK_0xeb84
unsigned char UNK_0xeb88[2] = {0x3a, 0x20}; // UNK_0xeb88
unsigned char UNK_0xeb8c[2] = {0x3a, 0x20}; // UNK_0xeb8c
unsigned char UNK_0xed30[2] = {0x3a, 0x20}; // UNK_0xed30
unsigned char FADDR[2] = {0x20, 0x2d}; // FADDR
unsigned char UNK_0xed81[2] = {0x3a, 0x20}; // UNK_0xed81
unsigned char UNK_0xed85[2] = {0x3a, 0x20}; // UNK_0xed85
unsigned char UNK_0xed89[2] = {0x3a, 0x20}; // UNK_0xed89

const unsigned short int cc_UNK_0xe364 = 0xff80; // UNK_0xe364
const unsigned short int cc_UNK_0xe386 = 0x0075; // UNK_0xe386
const unsigned short int cc_UNK_0xe7fd = 0x0014; // UNK_0xe7fd


// 0xe352: db 0xde 0x00 '  '

// ================================================
// 0xe354: WORD 'UNK_0xe356' codep=0x1d29 parp=0xe356
// ================================================
// 0xe356: db 0x3a 0x20 ': '

// ================================================
// 0xe358: WORD 'UNK_0xe35a' codep=0x1d29 parp=0xe35a
// ================================================
// 0xe35a: db 0x3a 0x20 ': '

// ================================================
// 0xe35c: WORD 'UNK_0xe35e' codep=0x1d29 parp=0xe35e
// ================================================
// 0xe35e: db 0x56 0x3a 0x20 0x6e 'V: n'

// ================================================
// 0xe362: WORD 'UNK_0xe364' codep=0x2214 parp=0xe364
// ================================================
// 0xe364: db 0x80 0xff 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 '  ) : ) : '

// ================================================
// 0xe36e: WORD 'UNK_0xe370' codep=0x1d29 parp=0xe370
// ================================================
// 0xe370: db 0x3a 0x20 ': '

// ================================================
// 0xe372: WORD 'UNK_0xe374' codep=0x1d29 parp=0xe374
// ================================================
// 0xe374: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : ) : '

// ================================================
// 0xe37e: WORD 'UNK_0xe380' codep=0x3b68 parp=0xe380
// ================================================
// 0xe380: db 0xff 0x7f 0x92 0x51 '  Q'

// ================================================
// 0xe384: WORD 'UNK_0xe386' codep=0x2214 parp=0xe386
// ================================================
// 0xe386: db 0x75 0x00 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 'u ) : ) : ) : ) : '

// ================================================
// 0xe398: WORD 'UNK_0xe39a' codep=0x224c parp=0xe39a
// ================================================

void UNK_0xe39a() // UNK_0xe39a
{
  Push(pp_UNK_0xe35a); // UNK_0xe35a
  _ex_(); // !
  Push(pp_UNK_0xe35e); // UNK_0xe35e
  _2_ex_(); // 2!
}


// ================================================
// 0xe3a4: WORD 'UNK_0xe3a6' codep=0x224c parp=0xe3a6
// ================================================

void UNK_0xe3a6() // UNK_0xe3a6
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xe35a); // UNK_0xe35a
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  RRND(); // RRND
  i++;
  } while(i<imax); // (LOOP) 0xfff2

}

// 0xe3be: db 0x29 0x1d ') '
// 0xe3c0: mov    ax,[4AB0]
// 0xe3c4: mov    cx,7ABD
// 0xe3c7: imul   cx
// 0xe3c9: add    ax,1B0F
// 0xe3cc: mov    [4AB0],ax
// 0xe3d0: pop    dx
// 0xe3d1: pop    bx
// 0xe3d2: pop    cx
// 0xe3d3: push   dx
// 0xe3d4: sub    bx,cx
// 0xe3d6: mul    bx
// 0xe3d8: add    dx,cx
// 0xe3da: pop    ax
// 0xe3db: push   dx
// 0xe3dc: push   ax
// 0xe3dd: ret    

// 0xe3de: db 0x29 0x1d ') '
// 0xe3e0: pop    bx
// 0xe3e1: pop    ax
// 0xe3e2: pop    cx
// 0xe3e3: add    ax,cx
// 0xe3e5: cmp    ax,007F
// 0xe3e8: jle    E3ED
// 0xe3ea: mov    ax,007F
// 0xe3ed: cmp    ax,FF81
// 0xe3f0: jns    E3F5
// 0xe3f2: mov    ax,FF81
// 0xe3f5: push   ax
// 0xe3f6: push   bx
// 0xe3f7: ret    

// 0xe3f8: db 0x29 0x1d ') '
// 0xe3fa: pop    bx
// 0xe3fb: pop    ax
// 0xe3fc: pop    cx
// 0xe3fd: push   bx
// 0xe3fe: mov    dx,[E356]
// 0xe402: or     dx,dx
// 0xe404: jle    E456
// 0xe406: add    cx,[E370]
// 0xe40a: add    ax,[E374]
// 0xe40e: jns    E419
// 0xe410: inc    ax
// 0xe411: neg    ax
// 0xe413: add    cx,0480
// 0xe417: jmp    E42B
// 0xe419: mov    dx,03C0
// 0xe41c: cmp    ax,dx
// 0xe41e: js     E42B
// 0xe420: sub    ax,dx
// 0xe422: neg    ax
// 0xe424: add    ax,dx
// 0xe426: inc    ax
// 0xe427: add    cx,0480
// 0xe42b: mov    [4AB0],ax
// 0xe42f: push   cx
// 0xe430: mov    ax,0001
// 0xe433: push   ax
// 0xe434: neg    ax
// 0xe436: push   ax
// 0xe437: call   E3C0
// 0xe43a: pop    cx
// 0xe43b: pop    word ptr [4AB0]
// 0xe43f: push   cx
// 0xe440: mov    ax,0001
// 0xe443: push   ax
// 0xe444: neg    ax
// 0xe446: push   ax
// 0xe447: call   E3C0
// 0xe44a: pop    ax
// 0xe44b: pop    cx
// 0xe44c: xor    ax,[5979]
// 0xe450: xor    ax,cx
// 0xe452: mov    [4AB0],ax
// 0xe456: mov    ax,[bp+0E]
// 0xe459: mov    cx,ax
// 0xe45b: neg    cx
// 0xe45d: push   cx
// 0xe45e: push   ax
// 0xe45f: call   E3C0
// 0xe462: pop    ax
// 0xe463: pop    cx
// 0xe464: push   ax
// 0xe465: push   cx
// 0xe466: ret    

// 0xe467: db 0x29 0x1d ') '
// 0xe469: pop    dx
// 0xe46a: pop    ax
// 0xe46b: pop    cx
// 0xe46c: or     ax,ax
// 0xe46e: jns    E47F
// 0xe470: inc    ax
// 0xe471: neg    ax
// 0xe473: mov    bx,[4CF1]
// 0xe477: mov    bx,[bx]
// 0xe479: shr    bx,1
// 0xe47b: add    cx,bx
// 0xe47d: jmp    E49B
// 0xe47f: mov    bx,[4CF1]
// 0xe483: mov    bx,[bx+02]
// 0xe486: cmp    ax,bx
// 0xe488: js     E49B
// 0xe48a: sub    ax,bx
// 0xe48c: neg    ax
// 0xe48e: add    ax,bx
// 0xe490: inc    ax
// 0xe491: mov    bx,[4CF1]
// 0xe495: mov    bx,[bx]
// 0xe497: shr    bx,1
// 0xe499: add    cx,bx
// 0xe49b: or     cx,cx
// 0xe49d: jns    E4A7
// 0xe49f: mov    bx,[4CF1]
// 0xe4a3: add    cx,[bx]
// 0xe4a5: jmp    E4B3
// 0xe4a7: mov    bx,[4CF1]
// 0xe4ab: mov    bx,[bx]
// 0xe4ad: cmp    cx,bx
// 0xe4af: js     E4B3
// 0xe4b1: sub    cx,bx
// 0xe4b3: push   cx
// 0xe4b4: push   ax
// 0xe4b5: push   dx
// 0xe4b6: ret    

// 0xe4b7: db 0x29 0x1d ') '
// 0xe4b9: pop    word ptr [E38A]
// 0xe4bd: mov    ax,[4CCA]
// 0xe4c1: or     ax,ax
// 0xe4c3: jle    E4C8
// 0xe4c5: call   E469
// 0xe4c8: mov    bx,[4CF1]
// 0xe4cc: mov    ax,[bx+06]
// 0xe4cf: mov    bx,[bx+04]
// 0xe4d2: pop    cx
// 0xe4d3: shl    cx,1
// 0xe4d5: add    bx,cx
// 0xe4d7: push   ds
// 0xe4d8: mov    ds,ax
// 0xe4da: mov    cx,[bx]
// 0xe4dc: pop    ds
// 0xe4dd: pop    dx
// 0xe4de: add    cx,dx
// 0xe4e0: mov    [E378],ax
// 0xe4e4: mov    [E37C],cx
// 0xe4e8: push   word ptr [E38A]
// 0xe4ec: ret    

// 0xe4ed: db 0x29 0x1d ') '
// 0xe4ef: pop    dx
// 0xe4f0: mov    bx,[E37C]
// 0xe4f4: push   ds
// 0xe4f5: push   word ptr [E378]
// 0xe4f9: pop    ds
// 0xe4fa: mov    al,[bx]
// 0xe4fc: pop    ds
// 0xe4fd: mov    cx,[4CD8]
// 0xe501: or     cx,cx
// 0xe503: jle    E508
// 0xe505: cbw    
// 0xe506: jmp    E50A
// 0xe508: xor    ah,ah
// 0xe50a: push   ax
// 0xe50b: push   dx
// 0xe50c: ret    

// 0xe50d: db 0x29 0x1d ') '
// 0xe50f: pop    word ptr [E38E]
// 0xe513: call   E4B9
// 0xe516: call   E4EF
// 0xe519: pop    ax
// 0xe51a: cmp    ax,FF80
// 0xe51d: jnz    E52F
// 0xe51f: pop    ax
// 0xe520: push   ds
// 0xe521: push   word ptr [E378]
// 0xe525: mov    bx,[E37C]
// 0xe529: pop    ds
// 0xe52a: mov    [bx],al
// 0xe52c: pop    ds
// 0xe52d: jmp    E530
// 0xe52f: pop    ax
// 0xe530: push   word ptr [E38E]
// 0xe534: ret    


// ================================================
// 0xe535: WORD 'UNK_0xe537' codep=0xe537 parp=0xe537
// ================================================
// 0xe537: call   E50F
// 0xe53a: lodsw
// 0xe53b: mov    bx,ax
// 0xe53d: jmp    word ptr [bx]

// ================================================
// 0xe53f: WORD 'UNK_0xe541' codep=0x224c parp=0xe541
// ================================================

void UNK_0xe541() // UNK_0xe541
{
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  UNK_0xe537(); // UNK_0xe537
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  UNK_0xe537(); // UNK_0xe537
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  UNK_0xe537(); // UNK_0xe537
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  UNK_0xe537(); // UNK_0xe537
}

// 0xe56b: db 0x29 0x1d ') '
// 0xe56d: pop    cx
// 0xe56e: pop    word ptr [E396]
// 0xe572: push   cx
// 0xe573: push   word ptr [bp+08]
// 0xe576: push   word ptr [E396]
// 0xe57a: call   E4B9
// 0xe57d: call   E4EF
// 0xe580: push   word ptr [bp+04]
// 0xe583: push   word ptr [E396]
// 0xe587: call   E4B9
// 0xe58a: call   E4EF
// 0xe58d: pop    ax
// 0xe58e: pop    cx
// 0xe58f: add    ax,cx
// 0xe591: sar    ax,1
// 0xe593: push   ax
// 0xe594: mov    bx,[bp+08]
// 0xe597: add    bx,[bp+04]
// 0xe59a: sar    bx,1
// 0xe59c: push   bx
// 0xe59d: push   word ptr [E396]
// 0xe5a1: call   E3FA
// 0xe5a4: call   E3E0
// 0xe5a7: push   word ptr [bp+0C]
// 0xe5aa: push   word ptr [E396]
// 0xe5ae: call   E50F
// 0xe5b1: ret    

// 0xe5b2: db 0x29 0x1d ') '
// 0xe5b4: pop    cx
// 0xe5b5: pop    word ptr [E396]
// 0xe5b9: push   cx
// 0xe5ba: push   word ptr [E396]
// 0xe5be: push   word ptr [bp+06]
// 0xe5c1: call   E4B9
// 0xe5c4: call   E4EF
// 0xe5c7: push   word ptr [E396]
// 0xe5cb: push   word ptr [bp+02]
// 0xe5ce: call   E4B9
// 0xe5d1: call   E4EF
// 0xe5d4: pop    ax
// 0xe5d5: pop    cx
// 0xe5d6: add    ax,cx
// 0xe5d8: sar    ax,1
// 0xe5da: push   ax
// 0xe5db: push   word ptr [E396]
// 0xe5df: mov    bx,[bp+06]
// 0xe5e2: add    bx,[bp+02]
// 0xe5e5: sar    bx,1
// 0xe5e7: push   bx
// 0xe5e8: call   E3FA
// 0xe5eb: call   E3E0
// 0xe5ee: push   word ptr [E396]
// 0xe5f2: push   word ptr [bp+0A]
// 0xe5f5: call   E50F
// 0xe5f8: ret    

// 0xe5f9: db 0x29 0x1d ') '
// 0xe5fb: mov    ax,[E368]
// 0xe5ff: or     ax,ax
// 0xe601: jle    E614
// 0xe603: mov    ax,[bp+08]
// 0xe606: or     ax,ax
// 0xe608: jnz    E60E
// 0xe60a: push   ax
// 0xe60b: call   E5B4
// 0xe60e: push   word ptr [bp+04]
// 0xe611: call   E5B4
// 0xe614: mov    ax,[E36C]
// 0xe618: or     ax,ax
// 0xe61a: jle    E62D
// 0xe61c: mov    ax,[bp+06]
// 0xe61f: or     ax,ax
// 0xe621: jnz    E627
// 0xe623: push   ax
// 0xe624: call   E56D
// 0xe627: push   word ptr [bp+02]
// 0xe62a: call   E56D
// 0xe62d: ret    

// 0xe62e: db 0x29 0x1d ') '
// 0xe630: mov    ax,[E368]
// 0xe634: and    ax,[E36C]
// 0xe638: jle    E68E
// 0xe63a: push   word ptr [bp+0C]
// 0xe63d: push   word ptr [bp+06]
// 0xe640: call   E4B9
// 0xe643: call   E4EF
// 0xe646: push   word ptr [bp+0C]
// 0xe649: push   word ptr [bp+02]
// 0xe64c: call   E4B9
// 0xe64f: call   E4EF
// 0xe652: push   word ptr [bp+08]
// 0xe655: push   word ptr [bp+0A]
// 0xe658: call   E4B9
// 0xe65b: call   E4EF
// 0xe65e: push   word ptr [bp+04]
// 0xe661: push   word ptr [bp+0A]
// 0xe664: call   E4B9
// 0xe667: call   E4EF
// 0xe66a: pop    ax
// 0xe66b: pop    cx
// 0xe66c: add    ax,cx
// 0xe66e: pop    cx
// 0xe66f: add    ax,cx
// 0xe671: pop    cx
// 0xe672: add    ax,cx
// 0xe674: sar    ax,1
// 0xe676: sar    ax,1
// 0xe678: push   ax
// 0xe679: push   word ptr [bp+0C]
// 0xe67c: push   word ptr [bp+0A]
// 0xe67f: call   E3FA
// 0xe682: call   E3E0
// 0xe685: push   word ptr [bp+0C]
// 0xe688: push   word ptr [bp+0A]
// 0xe68b: call   E50F
// 0xe68e: ret    

// 0xe68f: db 0x29 0x1d ') '
// 0xe691: mov    ax,[bp+08]
// 0xe694: add    ax,[bp+04]
// 0xe697: sar    ax,1
// 0xe699: mov    [bp+0C],ax
// 0xe69c: mov    ax,[bp+06]
// 0xe69f: add    ax,[bp+02]
// 0xe6a2: sar    ax,1
// 0xe6a4: mov    [bp+0A],ax
// 0xe6a7: ret    

// 0xe6a8: db 0x29 0x1d ') '
// 0xe6aa: mov    ax,[bp+0E]
// 0xe6ad: mul    word ptr [E360]
// 0xe6b1: div    word ptr [E35E]
// 0xe6b5: or     ax,ax
// 0xe6b7: jg     E6BC
// 0xe6b9: mov    ax,0001
// 0xe6bc: mov    [bp+0E],ax
// 0xe6bf: ret    

// 0xe6c0: db 0x29 0x1d ') '
// 0xe6c2: mov    bp,sp
// 0xe6c4: mov    ax,[bp+04]
// 0xe6c7: sub    ax,[bp+08]
// 0xe6ca: dec    ax
// 0xe6cb: jle    E6D2
// 0xe6cd: mov    ax,0001
// 0xe6d0: jmp    E6D4
// 0xe6d2: xor    ax,ax
// 0xe6d4: mov    [E36C],ax
// 0xe6d8: mov    cx,[bp+02]
// 0xe6db: sub    cx,[bp+06]
// 0xe6de: dec    cx
// 0xe6df: jle    E6E6
// 0xe6e1: mov    cx,0001
// 0xe6e4: jmp    E6E8
// 0xe6e6: xor    cx,cx
// 0xe6e8: mov    [E368],cx
// 0xe6ec: or     ax,cx
// 0xe6ee: jle    E754
// 0xe6f0: call   E691
// 0xe6f3: call   E5FB
// 0xe6f6: call   E630
// 0xe6f9: call   E6AA
// 0xe6fc: xor    ax,ax
// 0xe6fe: push   word ptr [bp+0E]
// 0xe701: push   ax
// 0xe702: push   ax
// 0xe703: push   word ptr [bp+08]
// 0xe706: push   word ptr [bp+06]
// 0xe709: push   word ptr [bp+0C]
// 0xe70c: push   word ptr [bp+0A]
// 0xe70f: call   E6C2
// 0xe712: xor    ax,ax
// 0xe714: push   word ptr [bp+0E]
// 0xe717: push   ax
// 0xe718: push   ax
// 0xe719: push   word ptr [bp+0C]
// 0xe71c: push   word ptr [bp+06]
// 0xe71f: push   word ptr [bp+04]
// 0xe722: push   word ptr [bp+0A]
// 0xe725: call   E6C2
// 0xe728: xor    ax,ax
// 0xe72a: push   word ptr [bp+0E]
// 0xe72d: push   ax
// 0xe72e: push   ax
// 0xe72f: push   word ptr [bp+08]
// 0xe732: push   word ptr [bp+0A]
// 0xe735: push   word ptr [bp+0C]
// 0xe738: push   word ptr [bp+02]
// 0xe73b: call   E6C2
// 0xe73e: xor    ax,ax
// 0xe740: push   word ptr [bp+0E]
// 0xe743: push   ax
// 0xe744: push   ax
// 0xe745: push   word ptr [bp+0C]
// 0xe748: push   word ptr [bp+0A]
// 0xe74b: push   word ptr [bp+04]
// 0xe74e: push   word ptr [bp+02]
// 0xe751: call   E6C2
// 0xe754: pop    ax
// 0xe755: add    sp,0E
// 0xe758: mov    bp,sp
// 0xe75a: push   ax
// 0xe75b: ret    


// ================================================
// 0xe75c: WORD 'UNK_0xe75e' codep=0xe75e parp=0xe75e
// ================================================
// 0xe75e: mov    [E392],bp
// 0xe762: call   E6C2
// 0xe765: mov    bp,[E392]
// 0xe769: lodsw
// 0xe76a: mov    bx,ax
// 0xe76c: jmp    word ptr [bx]

// ================================================
// 0xe76e: WORD 'UNK_0xe770' codep=0xe770 parp=0xe770
// ================================================
// 0xe770: pop    ax
// 0xe771: mov    bx,[4CF1]
// 0xe775: mov    cx,[bx+04]
// 0xe778: mov    bx,[bx+06]
// 0xe77b: push   es
// 0xe77c: push   di
// 0xe77d: mov    es,bx
// 0xe77f: xor    di,di
// 0xe781: repz   
// 0xe782: stosb
// 0xe783: pop    di
// 0xe784: pop    es
// 0xe785: lodsw
// 0xe786: mov    bx,ax
// 0xe788: jmp    word ptr [bx]

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x224c parp=0xe78c
// ================================================

void UNK_0xe78c() // UNK_0xe78c
{
  Push(pp_UNK_0xe35a); // UNK_0xe35a
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0); // 0
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  UNK_0xe75e(); // UNK_0xe75e
}


// ================================================
// 0xe7a8: WORD 'MERCATOR-GEN' codep=0x224c parp=0xe7b9
// ================================================

void MERCATOR_minus_GEN() // MERCATOR-GEN
{
  DUP(); // DUP
  Push(pp_SEED); // SEED
  _ex_(); // !
  Push(pp_GLOBALS); // GLOBALS
  _ex_(); // !
  Push(pp_UNK_0xe356); // UNK_0xe356
  OFF(); // OFF
  UNK_0xe380(); // UNK_0xe380
  Push(cc_UNK_0xe386); // UNK_0xe386
  UNK_0xe39a(); // UNK_0xe39a
  Push(pp_SPHEREW); // SPHEREW
  ON(); // ON
  Push(pp_SIGNEXT); // SIGNEXT
  ON(); // ON
  Push(0x6a99);
  SETLARR(); // SETLARR
  Push(0); // 0
  Push(0); // 0
  Push(0x0030);
  Push(0x0017);
  SETREGI(); // SETREGI
  Push(cc_UNK_0xe364); // UNK_0xe364
  UNK_0xe770(); // UNK_0xe770
  UNK_0xe3a6(); // UNK_0xe3a6
  UNK_0xe541(); // UNK_0xe541
  UNK_0xe78c(); // UNK_0xe78c
}


// ================================================
// 0xe7f5: WORD 'UNK_0xe7f7' codep=0x3b68 parp=0xe7f7
// ================================================
// 0xe7f7: db 0xff 0x7f 0x92 0x51 '  Q'

// ================================================
// 0xe7fb: WORD 'UNK_0xe7fd' codep=0x2214 parp=0xe7fd
// ================================================
// 0xe7fd: db 0x14 0x00 '  '

// ================================================
// 0xe7ff: WORD 'UNK_0xe801' codep=0x224c parp=0xe801
// ================================================

void UNK_0xe801() // UNK_0xe801
{
  Push(0x6ac1);
  SETLARR(); // SETLARR
  Push(cc_UNK_0xe364); // UNK_0xe364
  UNK_0xe770(); // UNK_0xe770
}


// ================================================
// 0xe80d: WORD 'UNK_0xe80f' codep=0x224c parp=0xe80f
// ================================================

void UNK_0xe80f() // UNK_0xe80f
{
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(0x0028);
  _slash_(); // /
  Push(pp_Y2); // Y2
  _ex_(); // !
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(0x0030);
  _slash_(); // /
  Push(pp_X2); // X2
  _ex_(); // !
  Push(pp_SPHEREW); // SPHEREW
  ON(); // ON
  Push(0x6a99);
  SETLARR(); // SETLARR
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(pp_X2); // X2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_Y2); // Y2
  Push(Read16(Pop())); // @
  Push(i); // J
  Push(Pop() + Pop()); // +
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  CONANCH(); // CONANCH
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffdc

  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xe86d: WORD 'UNK_0xe86f' codep=0x224c parp=0xe86f
// ================================================

void UNK_0xe86f() // UNK_0xe86f
{
  _2OVER(); // 2OVER
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  _gt_R(); // >R
  _2DUP(); // 2DUP
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  _gt_R(); // >R
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  R_gt_(); // R>
  R_gt_(); // R>
  ROT(); // ROT
  ROT(); // ROT
  ACELLAD(); // ACELLAD
  A_ex_(); // A!
}


// ================================================
// 0xe89f: WORD 'UNK_0xe8a1' codep=0x224c parp=0xe8a1
// ================================================

void UNK_0xe8a1() // UNK_0xe8a1
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(2); // 2
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  OVER(); // OVER
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  UNK_0xe86f(); // UNK_0xe86f
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  OVER(); // OVER
  Push(2); // 2
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  UNK_0xe86f(); // UNK_0xe86f
  Push(j); // I
  Push(Pop()+1); // 1+
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  OVER(); // OVER
  Push(2); // 2
  _minus_(); // -
  OVER(); // OVER
  UNK_0xe86f(); // UNK_0xe86f
  j++;
  } while(j<jmax); // (LOOP) 0xffc0

  i++;
  } while(i<imax); // (LOOP) 0xffb6

}


// ================================================
// 0xe8f5: WORD 'UNK_0xe8f7' codep=0x224c parp=0xe8f7
// ================================================

void UNK_0xe8f7() // UNK_0xe8f7
{
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  OVER(); // OVER
  OVER(); // OVER
  Push(Pop()+2); // 2+
  UNK_0xe86f(); // UNK_0xe86f
  j++;
  } while(j<jmax); // (LOOP) 0xffec

  i++;
  } while(i<imax); // (LOOP) 0xffe2

}


// ================================================
// 0xe91f: WORD 'UNK_0xe921' codep=0x224c parp=0xe921
// ================================================

void UNK_0xe921() // UNK_0xe921
{
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(2); // 2
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  UNK_0xe86f(); // UNK_0xe86f
  j++;
  } while(j<jmax); // (LOOP) 0xffe8

  i++;
  } while(i<imax); // (LOOP) 0xffde

}


// ================================================
// 0xe94d: WORD 'UNK_0xe94f' codep=0x224c parp=0xe94f
// ================================================

void UNK_0xe94f() // UNK_0xe94f
{
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__4); // 4
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(i); // J
  Push(Pop()*2); // 2*
  OVER(); // OVER
  OVER(); // OVER
  Push(Pop()+2); // 2+
  UNK_0xe86f(); // UNK_0xe86f
  j++;
  } while(j<jmax); // (LOOP) 0xffec

  i++;
  } while(i<imax); // (LOOP) 0xffe2

}


// ================================================
// 0xe977: WORD 'UNK_0xe979' codep=0x224c parp=0xe979
// ================================================

void UNK_0xe979() // UNK_0xe979
{
  Push(pp_UNK_0xe374); // UNK_0xe374
  _ex_(); // !
  Push(pp_UNK_0xe370); // UNK_0xe370
  _ex_(); // !
}


// ================================================
// 0xe983: WORD 'UNK_0xe985' codep=0x224c parp=0xe985
// ================================================

void UNK_0xe985() // UNK_0xe985
{
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(0x0030);
  MOD(); // MOD
  Push(0x000c);
  _slash_(); // /
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(0x0028);
  MOD(); // MOD
  Push(0x0014);
  _slash_(); // /
  OVER(); // OVER
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(0x0030);
  _slash_(); // /
  Push(0x0030);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(0x0028);
  _slash_(); // /
  Push(0x0028);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  Push(0x0014);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  SWAP(); // SWAP
  UNK_0xe979(); // UNK_0xe979
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  OVER(); // OVER
  Push(j); // I
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(i); // J
  Push(Pop() + Pop()); // +
  CONANCH(); // CONANCH
  LC_at_(); // LC@
  Push(j); // I
  Push(0x000c);
  Push(Pop() * Pop()); // *
  Push(i); // J
  Push(0x0014);
  Push(Pop() * Pop()); // *
  CONTOUR(); // CONTOUR
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffda

  i++;
  } while(i<imax); // (LOOP) 0xffd0

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea1f: WORD 'UNK_0xea21' codep=0x224c parp=0xea21
// ================================================

void UNK_0xea21() // UNK_0xea21
{
  UNK_0xe80f(); // UNK_0xe80f
  Push(0x6aad);
  SETLARR(); // SETLARR
  UNK_0xe8a1(); // UNK_0xe8a1
  UNK_0xe8f7(); // UNK_0xe8f7
  UNK_0xe921(); // UNK_0xe921
  UNK_0xe94f(); // UNK_0xe94f
  UNK_0xe985(); // UNK_0xe985
}


// ================================================
// 0xea35: WORD 'UNK_0xea37' codep=0x224c parp=0xea37
// ================================================

void UNK_0xea37() // UNK_0xea37
{
  Push(0x0014);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop()+1); // 1+
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(cc_UNK_0xe364); // UNK_0xe364
  _eq_(); // =
  _gt_R(); // >R
  OVER(); // OVER
  Push(0x000b);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x0013);
  Push(Pop() + Pop()); // +
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(cc_UNK_0xe364); // UNK_0xe364
  _eq_(); // =
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  Push(0x000c);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x0014);
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  UNK_0xe78c(); // UNK_0xe78c
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea95: WORD 'UNK_0xea97' codep=0x224c parp=0xea97
// ================================================

void UNK_0xea97() // UNK_0xea97
{
  Push(pp_SPHEREW); // SPHEREW
  OFF(); // OFF
  Push(pp_SIGNEXT); // SIGNEXT
  ON(); // ON
  Push(0x6ac1);
  SETLARR(); // SETLARR
  Push(pp_UNK_0xe356); // UNK_0xe356
  ON(); // ON
  UNK_0xe7f7(); // UNK_0xe7f7
  Push(cc_UNK_0xe7fd); // UNK_0xe7fd
  UNK_0xe39a(); // UNK_0xe39a
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__5); // 5
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  UNK_0xea37(); // UNK_0xea37
  j++;
  } while(j<jmax); // (LOOP) 0xfff8

  i++;
  } while(i<imax); // (LOOP) 0xffee

}

// 0xeacb: db 0x29 0x1d 0x3a 0x20 ') : '

// ================================================
// 0xeacf: WORD 'UNK_0xead1' codep=0xead1 parp=0xead1
// ================================================
// 0xead1: mov    [EACD],sp
// 0xead5: lodsw
// 0xead6: mov    bx,ax
// 0xead8: jmp    word ptr [bx]

// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0xeadc parp=0xeadc
// ================================================
// 0xeadc: add    sp,0E
// 0xeadf: mov    [EACD],sp
// 0xeae3: lodsw
// 0xeae4: mov    bx,ax
// 0xeae6: jmp    word ptr [bx]

// ================================================
// 0xeae8: WORD 'UNK_0xeaea' codep=0xeaea parp=0xeaea
// ================================================
// 0xeaea: pop    bx
// 0xeaeb: add    bx,[EACD]
// 0xeaef: push   word ptr [bx]
// 0xeaf1: lodsw
// 0xeaf2: mov    bx,ax
// 0xeaf4: jmp    word ptr [bx]

// ================================================
// 0xeaf6: WORD 'UNK_0xeaf8' codep=0xeaf8 parp=0xeaf8
// ================================================
// 0xeaf8: pop    bx
// 0xeaf9: add    bx,[EACD]
// 0xeafd: pop    word ptr [bx]
// 0xeaff: lodsw
// 0xeb00: mov    bx,ax
// 0xeb02: jmp    word ptr [bx]

// ================================================
// 0xeb04: WORD 'UNK_0xeb06' codep=0x224c parp=0xeb06
// ================================================

void UNK_0xeb06() // UNK_0xeb06
{
  Push(cc__6); // 6
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb0c: WORD 'UNK_0xeb0e' codep=0x224c parp=0xeb0e
// ================================================

void UNK_0xeb0e() // UNK_0xeb0e
{
  Push(2); // 2
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb14: WORD 'UNK_0xeb16' codep=0x224c parp=0xeb16
// ================================================

void UNK_0xeb16() // UNK_0xeb16
{
  Push(0x000a);
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb1e: WORD 'UNK_0xeb20' codep=0x224c parp=0xeb20
// ================================================

void UNK_0xeb20() // UNK_0xeb20
{
  Push(cc__4); // 4
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb26: WORD 'UNK_0xeb28' codep=0x224c parp=0xeb28
// ================================================

void UNK_0xeb28() // UNK_0xeb28
{
  Push(0); // 0
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb2e: WORD 'UNK_0xeb30' codep=0x224c parp=0xeb30
// ================================================

void UNK_0xeb30() // UNK_0xeb30
{
  Push(cc__8); // 8
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb36: WORD 'UNK_0xeb38' codep=0x224c parp=0xeb38
// ================================================

void UNK_0xeb38() // UNK_0xeb38
{
  Push(0x000c);
  UNK_0xeaea(); // UNK_0xeaea
}


// ================================================
// 0xeb40: WORD 'UNK_0xeb42' codep=0x224c parp=0xeb42
// ================================================

void UNK_0xeb42() // UNK_0xeb42
{
  Push(0x000a);
  UNK_0xeaf8(); // UNK_0xeaf8
}


// ================================================
// 0xeb4a: WORD 'UNK_0xeb4c' codep=0x224c parp=0xeb4c
// ================================================

void UNK_0xeb4c() // UNK_0xeb4c
{
  Push(cc__8); // 8
  UNK_0xeaf8(); // UNK_0xeaf8
}


// ================================================
// 0xeb52: WORD 'UNK_0xeb54' codep=0x224c parp=0xeb54
// ================================================

void UNK_0xeb54() // UNK_0xeb54
{
  Push(0x000c);
  UNK_0xeaf8(); // UNK_0xeaf8
}


// ================================================
// 0xeb5c: WORD 'UNK_0xeb5e' codep=0x224c parp=0xeb5e
// ================================================

void UNK_0xeb5e() // UNK_0xeb5e
{
  UNK_0xeb06(); // UNK_0xeb06
  UNK_0xeb0e(); // UNK_0xeb0e
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  UNK_0xeb42(); // UNK_0xeb42
  UNK_0xeb20(); // UNK_0xeb20
  UNK_0xeb28(); // UNK_0xeb28
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  UNK_0xeb4c(); // UNK_0xeb4c
}


// ================================================
// 0xeb74: WORD 'POLYPTR' codep=0x1d29 parp=0xeb80
// ================================================
// 0xeb80: db 0x20 0x4f ' O'

// ================================================
// 0xeb82: WORD 'UNK_0xeb84' codep=0x1d29 parp=0xeb84
// ================================================
// 0xeb84: db 0x3a 0x20 ': '

// ================================================
// 0xeb86: WORD 'UNK_0xeb88' codep=0x1d29 parp=0xeb88
// ================================================
// 0xeb88: db 0x3a 0x20 ': '

// ================================================
// 0xeb8a: WORD 'UNK_0xeb8c' codep=0x1d29 parp=0xeb8c
// ================================================
// 0xeb8c: db 0x3a 0x20 ': '

// ================================================
// 0xeb8e: WORD 'UNK_0xeb90' codep=0x224c parp=0xeb90
// ================================================

void UNK_0xeb90() // UNK_0xeb90
{
  Push(pp_POLYPTR); // POLYPTR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  UNK_0xeb38(); // UNK_0xeb38
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  Push(h); // I
  LC_ex_(); // LC!
  UNK_0xeb06(); // UNK_0xeb06
  Push(pp_UNK_0xeb8c); // UNK_0xeb8c
  Push(Read16(Pop())); // @
  _minus_(); // -
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Pop()+1); // 1+
  LC_ex_(); // LC!
  Push(pp_UNK_0xeb88); // UNK_0xeb88
  Push(Read16(Pop())); // @
  UNK_0xeb20(); // UNK_0xeb20
  _minus_(); // -
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Pop()+2); // 2+
  LC_ex_(); // LC!
  UNK_0xeb0e(); // UNK_0xeb0e
  Push(pp_UNK_0xeb8c); // UNK_0xeb8c
  Push(Read16(Pop())); // @
  _minus_(); // -
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  LC_ex_(); // LC!
  Push(pp_UNK_0xeb88); // UNK_0xeb88
  Push(Read16(Pop())); // @
  UNK_0xeb28(); // UNK_0xeb28
  _minus_(); // -
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  LC_ex_(); // LC!
  Push(cc__5); // 5
  Push(pp_POLYPTR); // POLYPTR
  _plus__ex_(); // +!
  Push(1); // 1
  Push(pp_UNK_0xeb84); // UNK_0xeb84
  _plus__ex_(); // +!
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  UNK_0xeb06(); // UNK_0xeb06
  UNK_0xeb20(); // UNK_0xeb20
  Push(Pop()-1); // 1-
  MERCATO(); // MERCATO
  L_plus__minus__at_(); // L+-@
  COLORMA(); // COLORMA
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  UNK_0xeb54(); // UNK_0xeb54
  UNK_0xeb20(); // UNK_0xeb20
  UNK_0xeb28(); // UNK_0xeb28

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xeb0e(); // UNK_0xeb0e
  UNK_0xeb06(); // UNK_0xeb06

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  MERCATO(); // MERCATO
  L_plus__minus__at_(); // L+-@
  COLORMA(); // COLORMA
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  UNK_0xeb38(); // UNK_0xeb38
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0x03e7);
  UNK_0xeb54(); // UNK_0xeb54
  LEAVE(); // LEAVE

  label1:
  j++;
  } while(j<jmax); // (LOOP) 0xffde

  UNK_0xeb38(); // UNK_0xeb38
  Push(0x03e7);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  UNK_0xeb38(); // UNK_0xeb38
  Push(0x03e7);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xec5c: WORD 'POLYGON-EXTRACT' codep=0x224c parp=0xec70
// ================================================

void POLYGON_minus_EXTRACT() // POLYGON-EXTRACT
{
  UNK_0xead1(); // UNK_0xead1
  UNK_0xebfc(); // UNK_0xebfc
  if (Pop() == 0) goto label1;
  UNK_0xeb90(); // UNK_0xeb90
  goto label2;

  label1:
  UNK_0xeb5e(); // UNK_0xeb5e
  Push(0); // 0
  Push(0); // 0
  Push(0); // 0
  UNK_0xeb06(); // UNK_0xeb06
  UNK_0xeb20(); // UNK_0xeb20
  UNK_0xeb16(); // UNK_0xeb16
  UNK_0xeb30(); // UNK_0xeb30
  POLYGON_minus_EXTRACT(); // POLYGON-EXTRACT
  Push(0); // 0
  Push(0); // 0
  Push(0); // 0
  UNK_0xeb16(); // UNK_0xeb16
  UNK_0xeb20(); // UNK_0xeb20
  UNK_0xeb0e(); // UNK_0xeb0e
  UNK_0xeb30(); // UNK_0xeb30
  POLYGON_minus_EXTRACT(); // POLYGON-EXTRACT
  Push(0); // 0
  Push(0); // 0
  Push(0); // 0
  UNK_0xeb06(); // UNK_0xeb06
  UNK_0xeb30(); // UNK_0xeb30
  UNK_0xeb16(); // UNK_0xeb16
  UNK_0xeb28(); // UNK_0xeb28
  POLYGON_minus_EXTRACT(); // POLYGON-EXTRACT
  Push(0); // 0
  Push(0); // 0
  Push(0); // 0
  UNK_0xeb16(); // UNK_0xeb16
  UNK_0xeb30(); // UNK_0xeb30
  UNK_0xeb0e(); // UNK_0xeb0e
  UNK_0xeb28(); // UNK_0xeb28
  POLYGON_minus_EXTRACT(); // POLYGON-EXTRACT

  label2:
  UNK_0xeadc(); // UNK_0xeadc
}


// ================================================
// 0xecc4: WORD 'UNK_0xecc6' codep=0x224c parp=0xecc6
// ================================================

void UNK_0xecc6() // UNK_0xecc6
{
  Push(pp_POLYPTR); // POLYPTR
  OFF(); // OFF
  Push(0x0048);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(0); // 0
  Push(0); // 0
  Push(i); // I
  Push(0x000c);
  _slash_MOD(); // /MOD
  Push(cc__6); // 6
  SWAP(); // SWAP
  _minus_(); // -
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  DUP(); // DUP
  Push(pp_UNK_0xeb88); // UNK_0xeb88
  _ex_(); // !
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  Push(pp_UNK_0xeb8c); // UNK_0xeb8c
  _ex_(); // !
  SWAP(); // SWAP
  OVER(); // OVER
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(cc__4); // 4
  _minus_(); // -
  Push(pp_UNK_0xeb84); // UNK_0xeb84
  OFF(); // OFF
  Push(pp_POLYPTR); // POLYPTR
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(i); // I
  FACE(); // FACE
  L_ex_(); // L!
  POLYGON_minus_EXTRACT(); // POLYGON-EXTRACT
  Push(pp_UNK_0xeb84); // UNK_0xeb84
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(i); // I
  FACE(); // FACE
  LC_ex_(); // LC!
  i++;
  } while(i<imax); // (LOOP) 0xffa8

}


// ================================================
// 0xed2e: WORD 'UNK_0xed30' codep=0x1d29 parp=0xed30
// ================================================
// 0xed30: db 0x3a 0x20 ': '

// ================================================
// 0xed32: WORD 'UNK_0xed34' codep=0xed34 parp=0xed34
// ================================================
// 0xed34: mov    [ED30],sp
// 0xed38: pop    ax
// 0xed39: shl    ax,1
// 0xed3b: sub    sp,ax
// 0xed3d: lodsw
// 0xed3e: mov    bx,ax
// 0xed40: jmp    word ptr [bx]

// ================================================
// 0xed42: WORD 'UNK_0xed44' codep=0xed44 parp=0xed44
// ================================================
// 0xed44: pop    ax
// 0xed45: shl    ax,1
// 0xed47: add    sp,ax
// 0xed49: lodsw
// 0xed4a: mov    bx,ax
// 0xed4c: jmp    word ptr [bx]

// ================================================
// 0xed4e: WORD 'UNK_0xed50' codep=0xed50 parp=0xed50
// ================================================
// 0xed50: pop    bx
// 0xed51: shl    bx,1
// 0xed53: neg    bx
// 0xed55: add    bx,[ED30]
// 0xed59: push   word ptr [bx]
// 0xed5b: lodsw
// 0xed5c: mov    bx,ax
// 0xed5e: jmp    word ptr [bx]

// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0xed62 parp=0xed62
// ================================================
// 0xed62: pop    bx
// 0xed63: shl    bx,1
// 0xed65: neg    bx
// 0xed67: add    bx,[ED30]
// 0xed6b: pop    ax
// 0xed6c: mov    [bx],ax
// 0xed6e: lodsw
// 0xed6f: mov    bx,ax
// 0xed71: jmp    word ptr [bx]

// ================================================
// 0xed73: WORD 'FADDR' codep=0x1d29 parp=0xed7d
// ================================================
// 0xed7d: db 0x20 0x2d ' -'

// ================================================
// 0xed7f: WORD 'UNK_0xed81' codep=0x1d29 parp=0xed81
// ================================================
// 0xed81: db 0x3a 0x20 ': '

// ================================================
// 0xed83: WORD 'UNK_0xed85' codep=0x1d29 parp=0xed85
// ================================================
// 0xed85: db 0x3a 0x20 ': '

// ================================================
// 0xed87: WORD 'UNK_0xed89' codep=0x1d29 parp=0xed89
// ================================================
// 0xed89: db 0x3a 0x20 ': '

// ================================================
// 0xed8b: WORD 'UNK_0xed8d' codep=0x224c parp=0xed8d
// ================================================

void UNK_0xed8d() // UNK_0xed8d
{
  Push(0x0020);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(i); // I
  UNK_0xed50(); // UNK_0xed50
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(i); // I
  UNK_0xed62(); // UNK_0xed62
  Push(1); // 1
  Push(i); // I
  Push(Pop()+1); // 1+
  UNK_0xed62(); // UNK_0xed62
  LEAVE(); // LEAVE
  goto label2;

  label1:
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  Push(Pop()+1); // 1+
  DUP(); // DUP
  UNK_0xed50(); // UNK_0xed50
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  UNK_0xed62(); // UNK_0xed62
  LEAVE(); // LEAVE
  Pop(); // DROP

  label2:
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc2

}


// ================================================
// 0xedd7: WORD 'UNK_0xedd9' codep=0x224c parp=0xedd9
// ================================================

void UNK_0xedd9() // UNK_0xedd9
{
  _gt_R(); // >R
  _gt_R(); // >R
  Push(0x0022);
  UNK_0xed34(); // UNK_0xed34
  Push(pp_UNK_0xed30); // UNK_0xed30
  Push(Read16(Pop())); // @
  Push(0x0044);
  _minus_(); // -
  Push(0x0046);
  Push(0); // 0
  FILL(); // FILL
  R_gt_(); // R>
  R_gt_(); // R>
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  OVER(); // OVER
  LC_at_(); // LC@
  UNK_0xed8d(); // UNK_0xed8d
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  Pop(); // DROP
  Push(0x0020);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  UNK_0xed50(); // UNK_0xed50
  Push(j); // I
  Push(Pop()+1); // 1+
  UNK_0xed50(); // UNK_0xed50
  DUP(); // DUP
  Push(0x0021);
  UNK_0xed50(); // UNK_0xed50
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0021);
  UNK_0xed62(); // UNK_0xed62
  Push(0x0020);
  UNK_0xed62(); // UNK_0xed62
  goto label2;

  label1:
  Pop(); // DROP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  LEAVE(); // LEAVE

  label2:
  Push(2); // 2
  int step = Pop();
  j += step;
  } while(((step>=0) && (j<jmax)) || ((step<0) && (j>jmax))); // (+LOOP) 0xffca

  Push(0x0020);
  UNK_0xed50(); // UNK_0xed50
  _gt_R(); // >R
  Push(0x0022);
  UNK_0xed44(); // UNK_0xed44
  R_gt_(); // R>
}


// ================================================
// 0xee63: WORD 'UNK_0xee65' codep=0xee65 parp=0xee65
// ================================================
// 0xee65: mov    cx,es
// 0xee67: mov    dx,[5DA3]
// 0xee6b: and    dx,01
// 0xee6e: jnz    EE76
// 0xee70: mov    dx,[55D8]
// 0xee74: jmp    EE7A
// 0xee76: mov    dx,[52B3]
// 0xee7a: mov    es,dx
// 0xee7c: xor    ax,ax
// 0xee7e: pop    bx
// 0xee7f: es:    
// 0xee80: mov    al,[bx]
// 0xee82: inc    bx
// 0xee83: es:    
// 0xee84: push   word ptr [bx]
// 0xee86: add    bx,02
// 0xee89: es:    
// 0xee8a: push   word ptr [bx]
// 0xee8c: push   ax
// 0xee8d: mov    es,cx
// 0xee8f: lodsw
// 0xee90: mov    bx,ax
// 0xee92: jmp    word ptr [bx]

// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0xee96 parp=0xee96
// ================================================
// 0xee96: mov    cx,es
// 0xee98: mov    dx,[5144]
// 0xee9c: mov    es,dx
// 0xee9e: mov    bx,[ED7D]
// 0xeea2: pop    ax
// 0xeea3: es:    
// 0xeea4: mov    [bx],al
// 0xeea6: add    bx,03
// 0xeea9: es:    
// 0xeeaa: pop    word ptr [bx]
// 0xeeac: sub    bx,02
// 0xeeaf: es:    
// 0xeeb0: pop    word ptr [bx]
// 0xeeb2: add    bx,04
// 0xeeb5: mov    [ED7D],bx
// 0xeeb9: mov    es,cx
// 0xeebb: lodsw
// 0xeebc: mov    bx,ax
// 0xeebe: jmp    word ptr [bx]

// ================================================
// 0xeec0: WORD 'UNK_0xeec2' codep=0xeec2 parp=0xeec2
// ================================================
// 0xeec2: add    sp,06
// 0xeec5: lodsw
// 0xeec6: mov    bx,ax
// 0xeec8: jmp    word ptr [bx]

// ================================================
// 0xeeca: WORD 'UNK_0xeecc' codep=0xeecc parp=0xeecc
// ================================================
// 0xeecc: xor    ax,ax
// 0xeece: pop    ax
// 0xeecf: push   ax
// 0xeed0: cmp    ax,[ED81]
// 0xeed4: jnz    EEDB
// 0xeed6: mov    ax,0001
// 0xeed9: jmp    EEDD
// 0xeedb: xor    ax,ax
// 0xeedd: push   ax
// 0xeede: lodsw
// 0xeedf: mov    bx,ax
// 0xeee1: jmp    word ptr [bx]

// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0xeee5 parp=0xeee5
// ================================================
// 0xeee5: xor    ax,ax
// 0xeee7: push   ax
// 0xeee8: mov    ax,0004
// 0xeeeb: mov    ah,al
// 0xeeed: push   ax
// 0xeeee: mov    ax,[ED81]
// 0xeef2: push   ax
// 0xeef3: lodsw
// 0xeef4: mov    bx,ax
// 0xeef6: jmp    word ptr [bx]

// ================================================
// 0xeef8: WORD 'UNK_0xeefa' codep=0x224c parp=0xeefa
// ================================================

void UNK_0xeefa() // UNK_0xeefa
{
  Push(0); // 0
  OVER(); // OVER
  FACE(); // FACE
  OVER(); // OVER
  OVER(); // OVER
  L_at_(); // L@
  Push(pp_UNK_0xed85); // UNK_0xed85
  _ex_(); // !
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  _gt_R(); // >R
  Push(pp_UNK_0xed85); // UNK_0xed85
  Push(Read16(Pop())); // @
  Push(h); // I
  UNK_0xedd9(); // UNK_0xedd9
  Push(pp_UNK_0xed81); // UNK_0xed81
  _ex_(); // !
  Push(h); // I
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xed85); // UNK_0xed85
  Push(Read16(Pop())); // @
  UNK_0xee65(); // UNK_0xee65
  Push(cc__5); // 5
  Push(pp_UNK_0xed85); // UNK_0xed85
  _plus__ex_(); // +!
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  Push(pp_FADDR); // FADDR
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xed85); // UNK_0xed85
  _ex_(); // !
  UNK_0xeee5(); // UNK_0xeee5
  Push(1); // 1
  Push(pp_UNK_0xed89); // UNK_0xed89
  _ex_(); // !
  UNK_0xee96(); // UNK_0xee96
  R_gt_(); // R>
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  UNK_0xeecc(); // UNK_0xeecc
  if (Pop() == 0) goto label1;
  UNK_0xeec2(); // UNK_0xeec2
  goto label2;

  label1:
  UNK_0xee96(); // UNK_0xee96
  Push(1); // 1
  Push(pp_UNK_0xed89); // UNK_0xed89
  _plus__ex_(); // +!

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffea

  Push(0); // 0
  SWAP(); // SWAP
  FACE(); // FACE
  OVER(); // OVER
  OVER(); // OVER
  Push(pp_UNK_0xed85); // UNK_0xed85
  Push(Read16(Pop())); // @
  ROT(); // ROT
  ROT(); // ROT
  L_ex_(); // L!
  Push(Pop()+2); // 2+
  Push(pp_UNK_0xed89); // UNK_0xed89
  Push(Read16(Pop())); // @
  ROT(); // ROT
  ROT(); // ROT
  LC_ex_(); // LC!
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(0); // 0
  Push(pp_FADDR); // FADDR
  _ex_(); // !
  Push(0x0048);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xeefa(); // UNK_0xeefa
  i++;
  } while(i<imax); // (LOOP) 0xfffa

}


// ================================================
// 0xef9e: WORD 'MAKE-GLOBE' codep=0x224c parp=0xefad
// ================================================

void MAKE_minus_GLOBE() // MAKE-GLOBE
{
  UNK_0xecc6(); // UNK_0xecc6
  UNK_0xef86(); // UNK_0xef86
}


// ================================================
// 0xefb3: WORD 'UNK_0xefb5' codep=0x224c parp=0xefb5
// ================================================

void UNK_0xefb5() // UNK_0xefb5
{
  Push(0); // 0
  Push(0); // 0
  ACELLAD(); // ACELLAD
  ROT(); // ROT
  Push(0); // 0
  SWAP(); // SWAP
  ACELLAD(); // ACELLAD
  Push(cc__3); // 3
  PICK(); // PICK
  OVER(); // OVER
  _minus_(); // -
  ABS(); // ABS
  _n_BYTES(); // #BYTES
  SWAP(); // SWAP
  _minus_(); // -
  _st_LCMOVE(); // <LCMOVE
}


// ================================================
// 0xefd7: WORD 'UNK_0xefd9' codep=0x224c parp=0xefd9
// ================================================

void UNK_0xefd9() // UNK_0xefd9
{
  Push(0); // 0
  SWAP(); // SWAP
  ACELLAD(); // ACELLAD
  Push(0); // 0
  Push(0); // 0
  ACELLAD(); // ACELLAD
  Push(cc__3); // 3
  PICK(); // PICK
  OVER(); // OVER
  _minus_(); // -
  ABS(); // ABS
  _n_BYTES(); // #BYTES
  SWAP(); // SWAP
  _minus_(); // -
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x224c parp=0xeffb
// ================================================

void UNK_0xeffb() // UNK_0xeffb
{
  _n_ROWZ(); // #ROWZ
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  ACELLAD(); // ACELLAD
  Push(cc__3); // 3
  PICK(); // PICK
  Push(i); // I
  ACELLAD(); // ACELLAD
  _n_COLZ(); // #COLZ
  Push(cc__6); // 6
  PICK(); // PICK
  _minus_(); // -
  _st_LCMOVE(); // <LCMOVE
  i++;
  } while(i<imax); // (LOOP) 0xffe6

  Pop(); // DROP
}


// ================================================
// 0xf021: WORD 'UNK_0xf023' codep=0x224c parp=0xf023
// ================================================

void UNK_0xf023() // UNK_0xf023
{
  _n_ROWZ(); // #ROWZ
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(i); // I
  ACELLAD(); // ACELLAD
  Push(0); // 0
  Push(i); // I
  ACELLAD(); // ACELLAD
  _n_COLZ(); // #COLZ
  Push(cc__6); // 6
  PICK(); // PICK
  _minus_(); // -
  LCMOVE(); // LCMOVE
  i++;
  } while(i<imax); // (LOOP) 0xffe8

  Pop(); // DROP
}


// ================================================
// 0xf047: WORD 'UNK_0xf049' codep=0x224c parp=0xf049
// ================================================

void UNK_0xf049() // UNK_0xf049
{
  Push(pp_DXCON); // DXCON
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(pp_DXCON); // DXCON
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  ABS(); // ABS
  UNK_0xeffb(); // UNK_0xeffb
  Push(0); // 0
  Push(0); // 0
  Push(0x000b);
  Push(0x0064);
  goto label2;

  label1:
  UNK_0xf023(); // UNK_0xf023
  Push(0x0031);
  Push(0); // 0
  Push(0x003c);
  Push(0x0064);

  label2:
  SETREGI(); // SETREGI
  Push(cc_UNK_0xe364); // UNK_0xe364
  FILLREG(); // FILLREG
}


// ================================================
// 0xf089: WORD 'UNK_0xf08b' codep=0x224c parp=0xf08b
// ================================================

void UNK_0xf08b() // UNK_0xf08b
{
  Push(pp_DYCON); // DYCON
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(pp_DYCON); // DYCON
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  ABS(); // ABS
  UNK_0xefb5(); // UNK_0xefb5
  Push(0); // 0
  Push(0); // 0
  Push(0x003c);
  Push(0x0013);
  goto label2;

  label1:
  UNK_0xefd9(); // UNK_0xefd9
  Push(0); // 0
  Push(0x0051);
  Push(0x003c);
  Push(0x0064);

  label2:
  SETREGI(); // SETREGI
  Push(cc_UNK_0xe364); // UNK_0xe364
  FILLREG(); // FILLREG
}


// ================================================
// 0xf0cb: WORD 'SCRLCON' codep=0x224c parp=0xf0d7
// ================================================

void SCRLCON() // SCRLCON
{
  Push(pp_DXCON); // DXCON
  Push(Read16(Pop())); // @
  Push(pp_DYCON); // DYCON
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_SPHEREW); // SPHEREW
  OFF(); // OFF
  Push(0x6ac1);
  SETLARR(); // SETLARR
  UNK_0xf049(); // UNK_0xf049
  UNK_0xf08b(); // UNK_0xf08b
  UNK_0xea21(); // UNK_0xea21
  UNK_0xea97(); // UNK_0xea97
}


// ================================================
// 0xf0f9: WORD 'NEWCONTOUR' codep=0x224c parp=0xf108
// ================================================

void NEWCONTOUR() // NEWCONTOUR
{
  UNK_0xe801(); // UNK_0xe801
  UNK_0xea21(); // UNK_0xea21
  UNK_0xea97(); // UNK_0xea97
}

// 0xf110: db 0x46 0x52 0x41 0x43 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x72 0x66 0x67 0x30 0x33 0x6a 0x75 0x6e 0x38 0x35 0x29 0xea 0x5d 0x17 0x31 0x32 0x32 0x32 0x6a 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xfc 0x18 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x98 0x19 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0xfa 0x15 0x3e 0x00 0x16 0x16 0xe5 0x19 0x02 0x00 0x8c 0xea 0xda 0xea 0x20 0x0f 0x20 0x0f 0xb4 0xee 0xfa 0x15 0x2a 0x00 0x5d 0x17 0xc8 0x00 0x8b 0x3b 0xe4 0xeb 0xfa 0x15 0x0c 0x00 0x9b 0x3b 0x82 0xea 0x5a 0xf1 0x60 0x16 0x12 0x00 0xc8 0xec 0xb7 0x6d 0x66 0xf1 0x5d 0x17 0x96 0x00 0xb8 0xec 0x8b 0x3b 0x6c 0xec 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x10 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x5d 0x17 0x0c 0x00 0xf5 0x12 0x5d 0x17 0x28 0x00 0x8b 0x3b 0xe4 0xeb 0xb3 0x0f 0xfa 0x15 0x5c 0x00 0xc4 0xf1 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x8b 0x3b 0xb3 0x0f 0x73 0x3b 0x72 0x0f 0x5d 0x17 0x30 0x00 0x72 0x0f 0x73 0x3b 0xae 0x3f 0x5d 0x17 0x82 0x00 0x72 0x0f 0x6a 0x6d 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x24 0x00 0xcc 0xeb 0xae 0x0b 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x5d 0x17 0x3c 0x00 0xb3 0x0f 0x5d 0x17 0x1e 0x00 0x72 0x0f 0xad 0x11 0x8b 0x3b 0x4c 0xec 0x60 0x16 0x08 0x00 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd4 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0xd2 0xad 0x41 0x0e 0xdb 0x23 0x5d 0x17 0x18 0x00 0xea 0x6d 0xac 0xeb 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x4e 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0x3b 0x00 0x72 0x0f 0x6a 0x6d 0x9c 0x67 0x5d 0x17 0x3d 0x00 0x72 0x0f 0x41 0x0e 0x5d 0x17 0x18 0x00 0x98 0x09 0xfd 0x6d 0xdb 0x23 0x5d 0x17 0x18 0x00 0x5d 0x17 0x2e 0x00 0x67 0xaf 0xe7 0x0f 0xb3 0x0e 0xf2 0x0e 0xea 0x6d 0x90 0x16 0x4c 0x22 0xe4 0xad 0xae 0x0b 0x20 0x0f 0x5d 0x17 0x21 0x00 0xeb 0x11 0x5d 0x17 0x0a 0x00 0x89 0x11 0xb8 0xec 0x41 0x0e 0x00 0xf0 0x76 0x6d 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x9c 0x67 0x5d 0x17 0x9b 0x00 0x72 0x0f 0x41 0x0e 0x7b 0x3b 0x98 0x09 0xfd 0x6d 0xf2 0x0e 0xea 0x6d 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x2d 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x53 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0xaf 0x00 0x72 0x0f 0x3d 0x0f 0xb3 0x0e 0xfd 0x6d 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x12 0x7e 0xfa 0x15 0x66 0x00 0x12 0x7a 0x2e 0x0f 0x5d 0x17 0x0a 0x00 0xd8 0x4a 0x20 0x0f 0xb8 0x15 0x84 0x7a 0xd0 0x15 0xfc 0xff 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0xfa 0x15 0x04 0x00 0xb5 0x7a 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0x07 0x13 0x41 0x0e 0xfa 0x15 0x2a 0x00 0x4c 0xf2 0xde 0x0d 0x58 0xf2 0xa8 0xf2 0x9c 0x67 0xcd 0x0c 0xda 0xea 0x20 0x0f 0x83 0x3b 0xb4 0xee 0xfa 0x15 0x12 0x00 0xc2 0xeb 0x48 0xbb 0xac 0x7e 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x8b 0x3b 0x6c 0xec 0x84 0x7a 0x60 0x7a 0x3e 0x13 0xfa 0x15 0xc0 0xff 0x34 0xec 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x00 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x94 0xf3 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x3c 0x00 0x28 0xa5 0x0a 0x4f 0x17 0x85 0xab 0x4f 0x5d 0x17 0x0c 0x4f 0x76 0x6d 0x81 0xa1 0x39 0x3f 0x0d 0x43 0x52 0x45 0x57 0x20 0x41 0x52 0x52 0x45 0x53 0x54 0x45 0x44 0x47 0xa5 0x39 0x3f 0x09 0x47 0x41 0x4d 0x45 0x20 0x4f 0x56 0x45 0x52 0x47 0xa5 0x1f 0xa9 0x32 0x0e 0xa9 0x48 0x32 0x0e 0xd7 0x8f 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd8 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x0f 0x1d 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xfa 0xf3 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xe7 0x5f 0xae 0x0b 0xce 0x84 0xcf 0x5f 0xae 0x0b 0x07 0x13 0xfa 0x15 0x1e 0x00 0x06 0xf4 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xc8 0xec 0xb7 0x6d 0x48 0x5a 0xb7 0x6d 0x20 0x0f 0x9e 0xea 0x6a 0x6d 0xc0 0x54 0xc5 0x6d 0xc9 0x79 0x90 0x16 0x29 0x1d 0x04 0x30 0xf1 0xa7 0xed 0xdb 0xed 0x74 0xf1 0x29 0x1d 0x05 0x3f 0xee 0x73 0xee 0x12 0xf0 0x12 0xf3 0xa6 0xf0 0x29 0x1d 0x03 0xc0 0xef 0x36 0xef 0xd2 0xf1 0x29 0x1d 0x01 0x17 0xee 0x29 0x1d 0x01 0xce 0xec 0x29 0x1d 0x02 0x14 0xf4 0xa2 0xf3 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x28 0x00 0xc8 0xec 0xc5 0x6d 0xcd 0x0c 0x05 0x10 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x37 0x3a 0xc8 0xec 0xae 0x0b 0xfa 0x15 0x04 0x00 0x4a 0x17 0x66 0xbf 0x3d 0x0f 0x5c 0x15 0xec 0xff 0x90 0x16 0x00 0x00 0x87 0x53 0x41 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x06 0x00 0x22 0x0f 0x01 0x00 0x54 0xf4 0x07 0x00 0x5f 0xf4 0x08 0x00 0x6c 0xf4 0x03 0x00 0x75 0xf4 0x0a 0x00 0x7a 0xf4 0x15 0x00 0x7f 0xf4 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x3e 0x62 0x38 0x0c 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xf0 0xff 0x90 0x16 0x00 0x00 0x87 0x28 0x58 0x43 0x4f 0x4d 0x4d 0xa9 0x4c 0x22 0xdc 0xf4 0xfd 0x62 0x02 0x7a 0x30 0x75 0xc9 0x79 0xbe 0xf4 0x84 0xf4 0xdc 0xf4 0x90 0x16 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'FRACT___________________________ -----------------rfg03jun85) ] 1222jm y  L"          L"          L"n x  T  = _   >                   * ]    ;       ;  Z `      mf ]      ;l    y  L"          L"n x  T  ]     ] (  ;      \    T   ;_  ;  s;r ] 0 r s; ?]   r jm    ] d     $      T   ;_ ] <   ]   r    ;L `      m   y  L"          L"  A  #]    m      ] N `      g] ; r jm g] = r A ]      m #]   ] . g        m  L"      ] !   ]       A   vm]   L   ]      g]   r A {;   m   m2     ]   -     ] S `      g]   r =    m  L"n x Pl y z]   ]    ~  f  z. ]    J     z    0u]   _      z0u]   _   A   * L   X    g       ;        H  ~2      ;l  z`z>     4  y  L"          L"n x       ] d     < (  O   O]  Ovm  9? CREW ARRESTEDG 9? GAME OVERG   2  H2      m   y  L"          L"          L"n x     ]    * _     _            ]    *   mHZ m    jm T m y  )  0     t )  ? s       )    6   )    )    )      L"    (    m     r     P 7:        J f = \        SA-CAS OJ  "   T   _   l   u   z    L" *8 >b8 F@  >          (XCOMM L"   b z0u y        XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '
  