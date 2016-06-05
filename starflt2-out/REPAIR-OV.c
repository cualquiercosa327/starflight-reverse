// ====== OVERLAY 'REPAIR-OV' ======

#include"interface.h"

// store offset = 0xeee0
// overlay size   = 0x0680

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:         WLD>SCR  codep:0x92d5 parp:0x92d5 size:0x000f C-string:'WLD_gt_SCR'
// 1870:      UNK_0x92e6  codep:0xf9f7 parp:0x92e6 size:0xffffffff C-string:'UNK_0x92e6'
// 1871:      UNK_0x92e7  codep:0x03f9 parp:0x92e7 size:0x000a C-string:'UNK_0x92e7'
// 1872:      UNK_0x92f3  codep:0x5cd6 parp:0x92f3 size:0x001a C-string:'UNK_0x92f3'
// 1873:         SCR>BLT  codep:0x9319 parp:0x9319 size:0x0014 C-string:'SCR_gt_BLT'
// 1874:         !VISWIN  codep:0x224c parp:0x9339 size:0x0030 C-string:'_ex_VISWIN'
// 1875:         >1ICONF  codep:0x224c parp:0x9375 size:0x0010 C-string:'_gt_1ICONF'
// 1876:         >2ICONF  codep:0x224c parp:0x9391 size:0x0012 C-string:'_gt_2ICONF'
// 1877:         >3ICONF  codep:0x224c parp:0x93af size:0x003e C-string:'_gt_3ICONF'
// 1878:             !IW  codep:0x93f5 parp:0x93f5 size:0x0014 C-string:'_ex_IW'
// 1879:             !IB  codep:0x9411 parp:0x9411 size:0x0012 C-string:'_ex_IB'
// 1880:             @IX  codep:0x224c parp:0x942b size:0x0008 C-string:'_at_IX'
// 1881:             @IY  codep:0x224c parp:0x943b size:0x0008 C-string:'_at_IY'
// 1882:             @ID  codep:0x224c parp:0x944b size:0x0008 C-string:'_at_ID'
// 1883:             @IC  codep:0x224c parp:0x945b size:0x0008 C-string:'_at_IC'
// 1884:             @IL  codep:0x224c parp:0x946b size:0x0008 C-string:'_at_IL'
// 1885:             @IH  codep:0x224c parp:0x947b size:0x0008 C-string:'_at_IH'
// 1886:             !IX  codep:0x224c parp:0x948b size:0x0008 C-string:'_ex_IX'
// 1887:             !IY  codep:0x224c parp:0x949b size:0x0008 C-string:'_ex_IY'
// 1888:             !ID  codep:0x224c parp:0x94ab size:0x0008 C-string:'_ex_ID'
// 1889:             !IC  codep:0x224c parp:0x94bb size:0x0008 C-string:'_ex_IC'
// 1890:             !IL  codep:0x224c parp:0x94cb size:0x0008 C-string:'_ex_IL'
// 1891:             !IH  codep:0x224c parp:0x94db size:0x0008 C-string:'_ex_IH'
// 1892:         INIT-IC  codep:0x224c parp:0x94ef size:0x000a C-string:'INIT_minus_IC'
// 1893:         .BACKGR  codep:0x224c parp:0x9505 size:0x0006 C-string:'_dot_BACKGR'
// 1894:          ?VCLIP  codep:0x224c parp:0x9516 size:0x00d2 C-string:'_ask_VCLIP'
// 1895:         .CIRCLE  codep:0x224c parp:0x95f4 size:0x0030 C-string:'_dot_CIRCLE'
// 1896:         SYSCASE  codep:0x4b3b parp:0x9630 size:0x008a C-string:'SYSCASE'
// 1897:         .ICONCA  codep:0x4b3b parp:0x96c6 size:0x0014 C-string:'_dot_ICONCA'
// 1898:         POINT>I  codep:0x224c parp:0x96e6 size:0x0006 C-string:'POINT_gt_I'
// 1899:           .ICON  codep:0x224c parp:0x96f6 size:0x003c C-string:'_dot_ICON'
// 1900:         .LOCAL-  codep:0x224c parp:0x973e size:0x007a C-string:'_dot_LOCAL_minus_'
// 1901:         ?ICONS-  codep:0x224c parp:0x97c4 size:0x0008 C-string:'_ask_ICONS_minus_'
// 1902:         ?ICONS-  codep:0x224c parp:0x97d8 size:0x0008 C-string:'_ask_ICONS_minus_'
// 1903:         ?ICON=I  codep:0x224c parp:0x97ec size:0x0036 C-string:'_ask_ICON_eq_I'
// 1904:      UNK_0x9824  codep:0x0bae parp:0x9824 size:0x0055 C-string:'UNK_0x9824'
// 1905:      UNK_0x987b  codep:0xe807 parp:0x987b size:0x0038 C-string:'UNK_0x987b'
// 1906:           -ICON  codep:0x224c parp:0x98bd size:0x005a C-string:'_minus_ICON'
// 1907:      UNK_0x9919  codep:0x3b07 parp:0x9919 size:0x001b C-string:'UNK_0x9919'
// 1908:         ?ICONSI  codep:0x224c parp:0x9940 size:0x0008 C-string:'_ask_ICONSI'
// 1909:           +ICON  codep:0x224c parp:0x9952 size:0x02f4 C-string:'_plus_ICON'
// 1910:      UNK_0x9c48  codep:0x224c parp:0x9c48 size:0x03a9 C-string:'UNK_0x9c48'
// 1911:      UNK_0x9ff3  codep:0x224c parp:0x9ff3 size:0x001b C-string:'UNK_0x9ff3'
// 1912:      UNK_0xa010  codep:0x5d0f parp:0xa010 size:0x03cd C-string:'UNK_0xa010'
// 1913:      UNK_0xa3df  codep:0x224c parp:0xa3df size:0x0281 C-string:'UNK_0xa3df'
// 1914:      UNK_0xa662  codep:0x224c parp:0xa662 size:0x00ab C-string:'UNK_0xa662'
// 1915:      UNK_0xa70f  codep:0x9086 parp:0xa70f size:0x0066 C-string:'UNK_0xa70f'
// 1916:      UNK_0xa777  codep:0x5d22 parp:0xa777 size:0x007a C-string:'UNK_0xa777'
// 1917:      UNK_0xa7f3  codep:0xe76d parp:0xa7f3 size:0x0163 C-string:'UNK_0xa7f3'
// 1918:      UNK_0xa958  codep:0x7394 parp:0xa958 size:0x01cd C-string:'UNK_0xa958'
// 1919:      UNK_0xab27  codep:0x224c parp:0xab27 size:0x01e4 C-string:'UNK_0xab27'
// 1920:      UNK_0xad0d  codep:0x1035 parp:0xad0d size:0x00e2 C-string:'UNK_0xad0d'
// 1921:      UNK_0xadf1  codep:0x7552 parp:0xadf1 size:0x0064 C-string:'UNK_0xadf1'
// 1922:      UNK_0xae57  codep:0x15fa parp:0xae57 size:0x001d C-string:'UNK_0xae57'
// 1923:      UNK_0xae76  codep:0x8f16 parp:0xae76 size:0x0079 C-string:'UNK_0xae76'
// 1924:      UNK_0xaef1  codep:0x6410 parp:0xaef1 size:0x051a C-string:'UNK_0xaef1'
// 1925:      UNK_0xb40d  codep:0x2d54 parp:0xb40d size:0x106d C-string:'UNK_0xb40d'
// 1926:      UNK_0xc47c  codep:0xc431 parp:0xc47c size:0x0075 C-string:'UNK_0xc47c'
// 1927:      UNK_0xc4f3  codep:0xf4f3 parp:0xc4f3 size:0x191a C-string:'UNK_0xc4f3'
// 1928:      UNK_0xde0f  codep:0x4c6a parp:0xde0f size:0x0013 C-string:'UNK_0xde0f'
// 1929:      UNK_0xde24  codep:0x15fa parp:0xde24 size:0x0095 C-string:'UNK_0xde24'
// 1930:      UNK_0xdebb  codep:0xc6da parp:0xdebb size:0x00b2 C-string:'UNK_0xdebb'
// 1931:      UNK_0xdf6f  codep:0x0815 parp:0xdf6f size:0x0006 C-string:'UNK_0xdf6f'
// 1932:      UNK_0xdf77  codep:0xa600 parp:0xdf77 size:0x0eab C-string:'UNK_0xdf77'
// 1933:      UNK_0xee24  codep:0x84d9 parp:0xee24 size:0x00fc C-string:'UNK_0xee24'
// 1934:      UNK_0xef22  codep:0x7420 parp:0xef22 size:0x000d C-string:'UNK_0xef22'
// 1935:      UNK_0xef31  codep:0x7420 parp:0xef31 size:0x0003 C-string:'UNK_0xef31'
// 1936:      UNK_0xef36  codep:0x7420 parp:0xef36 size:0x0003 C-string:'UNK_0xef36'
// 1937:          >FIELD  codep:0x4b3b parp:0xef44 size:0x0020 C-string:'_gt_FIELD'
// 1938:      UNK_0xef66  codep:0x1d29 parp:0xef66 size:0x0002 C-string:'UNK_0xef66'
// 1939:      UNK_0xef6a  codep:0x1d29 parp:0xef6a size:0x0002 C-string:'UNK_0xef6a'
// 1940:      UNK_0xef6e  codep:0x1d29 parp:0xef6e size:0x0002 C-string:'UNK_0xef6e'
// 1941:      UNK_0xef72  codep:0x1d29 parp:0xef72 size:0x0002 C-string:'UNK_0xef72'
// 1942:      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0006 C-string:'UNK_0xef76'
// 1943:      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x0006 C-string:'UNK_0xef7e'
// 1944:      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0006 C-string:'UNK_0xef86'
// 1945:      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x0006 C-string:'UNK_0xef8e'
// 1946:      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0006 C-string:'UNK_0xef96'
// 1947:      UNK_0xef9e  codep:0x224c parp:0xef9e size:0x000e C-string:'UNK_0xef9e'
// 1948:      UNK_0xefae  codep:0x224c parp:0xefae size:0x000a C-string:'UNK_0xefae'
// 1949:      UNK_0xefba  codep:0x224c parp:0xefba size:0x000e C-string:'UNK_0xefba'
// 1950:      UNK_0xefca  codep:0x224c parp:0xefca size:0x0014 C-string:'UNK_0xefca'
// 1951:      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x002e C-string:'UNK_0xefe0'
// 1952:      UNK_0xf010  codep:0x224c parp:0xf010 size:0x000a C-string:'UNK_0xf010'
// 1953:      UNK_0xf01c  codep:0x224c parp:0xf01c size:0x003c C-string:'UNK_0xf01c'
// 1954:      UNK_0xf05a  codep:0x1d29 parp:0xf05a size:0x0002 C-string:'UNK_0xf05a'
// 1955:      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x0046 C-string:'UNK_0xf05e'
// 1956:      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x007a C-string:'UNK_0xf0a6'
// 1957:      UNK_0xf122  codep:0x175d parp:0xf122 size:0x001e C-string:'UNK_0xf122'
// 1958:      UNK_0xf142  codep:0x224c parp:0xf142 size:0x000c C-string:'UNK_0xf142'
// 1959:      UNK_0xf150  codep:0x224c parp:0xf150 size:0x008e C-string:'UNK_0xf150'
// 1960:      UNK_0xf1e0  codep:0x224c parp:0xf1e0 size:0x0022 C-string:'UNK_0xf1e0'
// 1961:      UNK_0xf204  codep:0x224c parp:0xf204 size:0x0022 C-string:'UNK_0xf204'
// 1962:      UNK_0xf228  codep:0x224c parp:0xf228 size:0x002e C-string:'UNK_0xf228'
// 1963:      UNK_0xf258  codep:0x224c parp:0xf258 size:0x001e C-string:'UNK_0xf258'
// 1964:      UNK_0xf278  codep:0x224c parp:0xf278 size:0x0014 C-string:'UNK_0xf278'
// 1965:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x0032 C-string:'UNK_0xf28e'
// 1966:      UNK_0xf2c2  codep:0x224c parp:0xf2c2 size:0x001c C-string:'UNK_0xf2c2'
// 1967:      UNK_0xf2e0  codep:0x224c parp:0xf2e0 size:0x0011 C-string:'UNK_0xf2e0'
// 1968:      UNK_0xf2f3  codep:0x4c16 parp:0xf2f3 size:0xffffffff C-string:'UNK_0xf2f3'
// 1969:      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0006 C-string:'UNK_0xf2f4'
// 1970:      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0014 C-string:'UNK_0xf2fc'
// 1971:      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0024 C-string:'UNK_0xf312'
// 1972:      UNK_0xf338  codep:0x224c parp:0xf338 size:0x000c C-string:'UNK_0xf338'
// 1973:      UNK_0xf346  codep:0x224c parp:0xf346 size:0x001a C-string:'UNK_0xf346'
// 1974:      UNK_0xf362  codep:0x224c parp:0xf362 size:0x0019 C-string:'UNK_0xf362'
// 1975:      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x0032 C-string:'UNK_0xf37d'
// 1976:      UNK_0xf3b1  codep:0x224c parp:0xf3b1 size:0x003a C-string:'UNK_0xf3b1'
// 1977:      UNK_0xf3ed  codep:0x224c parp:0xf3ed size:0x001e C-string:'UNK_0xf3ed'
// 1978:      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0008 C-string:'UNK_0xf40d'
// 1979:      UNK_0xf417  codep:0x224c parp:0xf417 size:0x0010 C-string:'UNK_0xf417'
// 1980:      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0040 C-string:'UNK_0xf429'
// 1981:      UNK_0xf46b  codep:0x224c parp:0xf46b size:0x0014 C-string:'UNK_0xf46b'
// 1982:      UNK_0xf481  codep:0x224c parp:0xf481 size:0x0048 C-string:'UNK_0xf481'
// 1983:      UNK_0xf4cb  codep:0x224c parp:0xf4cb size:0x0012 C-string:'UNK_0xf4cb'
// 1984:      UNK_0xf4df  codep:0x224c parp:0xf4df size:0x001a C-string:'UNK_0xf4df'
// 1985:         DO-REPA  codep:0x224c parp:0xf505 size:0x05ec C-string:'DO_minus_REPA'
// 1986:      UNK_0xfaf3  codep:0x0000 parp:0xfaf3 size:0x037a C-string:'UNK_0xfaf3'
// 1987:      UNK_0xfe6f  codep:0x0000 parp:0xfe6f size:0xfffff6f1 C-string:'UNK_0xfe6f'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xef66[2] = {0x01, 0x00}; // UNK_0xef66
unsigned char UNK_0xef6a[2] = {0x3a, 0x20}; // UNK_0xef6a
unsigned char UNK_0xef6e[2] = {0x3a, 0x20}; // UNK_0xef6e
unsigned char UNK_0xef72[2] = {0x3a, 0x20}; // UNK_0xef72
unsigned char UNK_0xf05a[2] = {0x3a, 0x20}; // UNK_0xf05a



// 0xeef2: db 0x68 0x00 0x14 0x22 0x14 0x00 0x20 0x74 0x14 0x11 0x02 0x20 0x74 0x14 0x12 0x01 0x20 0x74 0x14 0x13 0x02 0x20 0x74 0x14 0x15 0x02 0x20 0x74 0x14 0x17 0x02 0x20 0x74 0x14 0x19 0x02 0x20 0x74 0x14 0x1b 0x02 0x20 0x74 0x14 0x1d 0x02 'h  "   t    t    t    t    t    t    t    t   '

// ================================================
// 0xef20: WORD 'UNK_0xef22' codep=0x7420 parp=0xef22
// ================================================
// 0xef22: db 0x14 0x29 0x07 0x20 0x74 0x14 0x32 0x02 0x20 0x74 0x14 0x43 0x02 ' )  t 2  t C '

// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x7420 parp=0xef31
// ================================================
// 0xef31: db 0x11 0x1a 0x03 '   '

// ================================================
// 0xef34: WORD 'UNK_0xef36' codep=0x7420 parp=0xef36
// ================================================
// 0xef36: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xef39: WORD '>FIELD' codep=0x4b3b parp=0xef44
// ================================================
// 0xef44: db 0x07 0x00 0x6e 0x3a 0x00 0x00 0xfa 0xee 0x01 0x00 0x04 0xef 0x02 0x00 0x09 0xef 0x03 0x00 0x0e 0xef 0x04 0x00 0x13 0xef 0x05 0x00 0x18 0xef 0x06 0x00 0x1d 0xef '  n:                            '

// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x1d29 parp=0xef66
// ================================================
// 0xef66: db 0x01 0x00 '  '

// ================================================
// 0xef68: WORD 'UNK_0xef6a' codep=0x1d29 parp=0xef6a
// ================================================
// 0xef6a: db 0x3a 0x20 ': '

// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x1d29 parp=0xef6e
// ================================================
// 0xef6e: db 0x3a 0x20 ': '

// ================================================
// 0xef70: WORD 'UNK_0xef72' codep=0x1d29 parp=0xef72
// ================================================
// 0xef72: db 0x3a 0x20 ': '

// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  Push(pp_UNK_0xef72); // UNK_0xef72
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  Push(pp_UNK_0xef72); // UNK_0xef72
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  UNK_0xef86(); // UNK_0xef86
  _gt_FIELD(); // >FIELD
}


// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x224c parp=0xef9e
// ================================================

void UNK_0xef9e() // UNK_0xef9e
{
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0040);
  Push(Pop() & Pop()); // AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xefb8: WORD 'UNK_0xefba' codep=0x224c parp=0xefba
// ================================================

void UNK_0xefba() // UNK_0xefba
{
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefc8: WORD 'UNK_0xefca' codep=0x224c parp=0xefca
// ================================================

void UNK_0xefca() // UNK_0xefca
{
  DUP(); // DUP
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(Pop()+1); // 1+
  DUP(); // DUP
  _gt_R(); // >R
  C_at_(); // C@
  Push(0x00bf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  C_ex_(); // C!
}

// 0xeffe: db 0x4c 0x22 0x20 0x0f 0x68 0xef 0xae 0x0b 0x20 0xef 0x72 0x0f 0x0a 0x6d 0x90 0x16 'L"  h     r  m  '

// ================================================
// 0xf00e: WORD 'UNK_0xf010' codep=0x224c parp=0xf010
// ================================================

void UNK_0xf010() // UNK_0xf010
{
  Push(pp__ask_REPAIR); // ?REPAIR
  OFF(); // OFF
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF(); // OFF
}


// ================================================
// 0xf01a: WORD 'UNK_0xf01c' codep=0x224c parp=0xf01c
// ================================================

void UNK_0xf01c() // UNK_0xf01c
{
  Push(cc__minus_1); // -1
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _gt_FIELD(); // >FIELD
  UNK_0xef9e(); // UNK_0xef9e
  if (Pop() == 0) goto label1;
  Push(i); // I
  _gt_FIELD(); // >FIELD
  UNK_0xefae(); // UNK_0xefae
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(i); // I
  LEAVE(); // LEAVE
  goto label1;

  label2:
  UNK_0xf010(); // UNK_0xf010
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  DUP(); // DUP
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  _ex_(); // !
}


// ================================================
// 0xf058: WORD 'UNK_0xf05a' codep=0x1d29 parp=0xf05a
// ================================================
// 0xf05a: db 0x3a 0x20 ': '

// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xef31(); // UNK_0xef31
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  UNK_0xef36(); // UNK_0xef36
  C_at_(); // C@
  DUP(); // DUP
  _gt_R(); // >R
  _minus_(); // -
  Push(0x0064);
  ROT(); // ROT
  _minus_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Push(cc__6); // 6
  _slash_(); // /
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xf05a); // UNK_0xf05a
  _ex_(); // !
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_FIELD(); // >FIELD
  UNK_0xefae(); // UNK_0xefae
  DUP(); // DUP
  UNK_0xf05e(); // UNK_0xf05e
  Push(0x0064);
  ROT(); // ROT
  _minus_(); // -
  _slash_(); // /
  Push(pp_REAL_minus_MS); // REAL-MS
  _2_at_(); // 2@
  Push(0x0018);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Pop() * Pop()); // *
  Push(pp_REPAIRT); // REPAIRT
  _st__ex__gt_(); // <!>
  return;

  label1:
  Pop(); // DROP
}

// 0xf0e2: db 0x29 0x1d 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 0x4c 0x22 0x20 0x0f 0x8f 0x3b 0xc4 0x4b 0x05 0x10 0xe2 0xf0 0x72 0x0f 0xae 0x0b 0x41 0x0e 0x6c 0xef 0x16 0x6d 0x90 0x16 0x4c 0x22 0x2e 0x0f 0xad 0x74 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x2e 0x0f 0x89 0x11 0x9f 0x3b 0xad 0x11 0xe7 0x0f 0xc4 0x4b ')           L"   ; K    r   A l  m  L".  t  ]   L .    ;     K'

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x175d parp=0xf122
// ================================================
// 0xf122: db 0x0a 0x00 0xb3 0x0f 0x41 0x0e 0x74 0xef 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x9f 0x3b 0xc4 0x4b 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x41 0x0e 0x74 0xef 0x90 0x16 '    A t   L".  ; K]     A t   '

// ================================================
// 0xf140: WORD 'UNK_0xf142' codep=0x224c parp=0xf142
// ================================================

void UNK_0xf142() // UNK_0xf142
{
  Push(0); // 0
  Push(pp_UNK_0xf05a); // UNK_0xf05a
  Push(Read16(Pop())); // @
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf14e: WORD 'UNK_0xf150' codep=0x224c parp=0xf150
// ================================================

void UNK_0xf150() // UNK_0xf150
{
  _star_STARSH(); // *STARSH
  _gt_C(); // >C
  SET_minus_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  UNK_0xef7e(); // UNK_0xef7e
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  Push(1); // 1
  goto label6;

  label4:
  Push(0); // 0

  label6:
  goto label5;

  label2:
  Push(0); // 0

  label5:
  ICLOSE(); // ICLOSE
  goto label3;

  label1:
  Pop(); // DROP
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf1a0: db 0x4c 0x22 0x11 0x6c 0x53 0x75 0xa0 0x79 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0x5d 0x17 0x1a 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0x20 0x00 0x5d 0x17 0x0a 0x00 0xc4 0x0f 0x72 0x0f 0x20 0xef 0x68 0xef 0xae 0x0b 0x72 0x0f 0x0a 0x6d 0x90 0x16 'L" lSu y?z]   ]   L~2 ?z]     L~2   L"]   ]     r   h   r  m  '

// ================================================
// 0xf1de: WORD 'UNK_0xf1e0' codep=0x224c parp=0xf1e0
// ================================================

void UNK_0xf1e0() // UNK_0xf1e0
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  UNK_0xef22(); // UNK_0xef22
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(0x001f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(0x000a);
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf202: WORD 'UNK_0xf204' codep=0x224c parp=0xf204
// ================================================

void UNK_0xf204() // UNK_0xf204
{
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  Push(Read16(Pop())); // @
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  UNK_0xa958(); // UNK_0xa958
  Push(0x0010);
  Push(0x002e);
  UNK_0xab27(); // UNK_0xab27
  UNK_0x9ff3(); // UNK_0x9ff3
  SET_minus_CUR(); // SET-CUR
}


// ================================================
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x531f(); // UNK_0x531f
  UNK_0x414a(); // UNK_0x414a
  UNK_0x4c4e(); // UNK_0x4c4e
  UNK_0x4922(); // UNK_0x4922
  UNK_0x5422(); // UNK_0x5422
  UNK_0x4b43(); // UNK_0x4b43
  UNK_0x2047(); // UNK_0x2047
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4622(); // UNK_0x4622
  Push(pp_FONT_n_); // FONT#
  UNK_0x204f(); // UNK_0x204f
  UNK_0x4145(); // UNK_0x4145
  UNK_0x4754(); // UNK_0x4754
  UNK_0x3f51(); // UNK_0x3f51
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x01f4);
  MS(); // MS
  UNK_0xa3df(); // UNK_0xa3df
  Pop(); // DROP
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  BEEP(); // BEEP
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4315(); // UNK_0x4315
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x414f(); // UNK_0x414f
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0x202e(); // UNK_0x202e
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4e22(); // UNK_0x4e22
  UNK_0x4547(); // UNK_0x4547
  UNK_0x2046(); // UNK_0x2046
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf276: WORD 'UNK_0xf278' codep=0x224c parp=0xf278
// ================================================

void UNK_0xf278() // UNK_0xf278
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x200f(); // UNK_0x200f
  UNK_0x4f48(); // UNK_0x4f48
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4554(); // UNK_0x4554
  UNK_0x4152(); // UNK_0x4152
  UNK_0x524b(); // UNK_0x524b
  UNK_0x2e55(); // UNK_0x2e55
  TYPE(); // TYPE
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  UNK_0xef7e(); // UNK_0xef7e
  Push(0x000a);
  _slash_(); // /
  _dot_(); // .
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x430d(); // UNK_0x430d
  UNK_0x4257(); // UNK_0x4257
  UNK_0x434b(); // UNK_0x434b
  UNK_0x4d22(); // UNK_0x4d22
  UNK_0x5447(); // UNK_0x5447
  UNK_0x5247(); // UNK_0x5247
  TYPE(); // TYPE
  UNK_0xef7e(); // UNK_0xef7e
  Push(0x000a);
  _minus_(); // -
  if (Pop() == 0) goto label1;
  PRINT("S", 1); // (.")

  label1:
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf2c0: WORD 'UNK_0xf2c2' codep=0x224c parp=0xf2c2
// ================================================

void UNK_0xf2c2() // UNK_0xf2c2
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2017(); // UNK_0x2017
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x4e5d(); // UNK_0x4e5d
  UNK_0x2051(); // UNK_0x2051
  UNK_0x455b(); // UNK_0x455b
  UNK_0x5d55(); // UNK_0x5d55
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf2de: WORD 'UNK_0xf2e0' codep=0x224c parp=0xf2e0
// ================================================

void UNK_0xf2e0() // UNK_0xf2e0
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
  UNK_0xf228(); // UNK_0xf228
  UNK_0xf2c2(); // UNK_0xf2c2
}


// ================================================
// 0xf2f1: WORD 'UNK_0xf2f3' codep=0x4c16 parp=0xf2f3
// ================================================

// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefe0(); // UNK_0xefe0
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4311(); // UNK_0x4311
  UNK_0x4147(); // UNK_0x4147
  UNK_0x4955(); // UNK_0x4955
  UNK_0x4750(); // UNK_0x4750
  UNK_0x5222(); // UNK_0x5222
  UNK_0x5047(); // UNK_0x5047
  UNK_0x4943(); // UNK_0x4943
  UNK_0x2054(); // UNK_0x2054
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(pp__ask_REPAIR); // ?REPAIR
  _099(); // 099
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
}


// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5213(); // UNK_0x5213
  UNK_0x5047(); // UNK_0x5047
  UNK_0x4943(); // UNK_0x4943
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4f45(); // UNK_0x4f45
  UNK_0x504f(); // UNK_0x504f
  UNK_0x454e(); // UNK_0x454e
  UNK_0x4556(); // UNK_0x4556
  UNK_0x2046(); // UNK_0x2046
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf360: WORD 'UNK_0xf362' codep=0x224c parp=0xf362
// ================================================

void UNK_0xf362() // UNK_0xf362
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4314(); // UNK_0x4314
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0x4956(); // UNK_0x4956
  UNK_0x5550(); // UNK_0x5550
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x4554(); // UNK_0x4554
  UNK_0x4152(); // UNK_0x4152
  UNK_0x524b(); // UNK_0x524b
  UNK_0xf122(); // UNK_0xf122
  UNK_0x90a1(); // UNK_0x90a1
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================
  UNK_0xee24(); // UNK_0xee24

void UNK_0xf37d() // UNK_0xf37d
{
  UNK_0x41f2(); // UNK_0x41f2
  UNK_0x7010(); // UNK_0x7010
  UNK_0x65f1(); // UNK_0x65f1
  UNK_0x4e6f(); // UNK_0x4e6f
  UNK_0xfaf3(); // UNK_0xfaf3
  UNK_0x1c17(); // UNK_0x1c17
  UNK_0x4102(); // UNK_0x4102
  UNK_0x4110(); // UNK_0x4110
  UNK_0xa010(); // UNK_0xa010
  UNK_0x06f3(); // UNK_0x06f3
  UNK_0x2ef3(); // UNK_0x2ef3
  UNK_0x1f55(); // UNK_0x1f55
  UNK_0xc47c(); // UNK_0xc47c
  UNK_0xa7f3(); // UNK_0xa7f3
  UNK_0xa777(); // UNK_0xa777
  UNK_0xa777(); // UNK_0xa777
  UNK_0xdf77(); // UNK_0xdf77
  UNK_0x607b(); // UNK_0x607b
  UNK_0x0a18(); // UNK_0x0a18
  UNK_0x6c02(); // UNK_0x6c02
  UNK_0xaef1(); // UNK_0xaef1
  UNK_0x2c0d(); // UNK_0x2c0d
  UNK_0xc4f3(); // UNK_0xc4f3
  UNK_0x90f3(); // UNK_0x90f3
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf3af: WORD 'UNK_0xf3b1' codep=0x224c parp=0xf3b1
// ================================================
  Push(pp__ask_NEW); // ?NEW

void UNK_0xf3b1() // UNK_0xf3b1
{
  UNK_0xae57(); // UNK_0xae57
  UNK_0xb40d(); // UNK_0xb40d
  UNK_0xde0f(); // UNK_0xde0f
  UNK_0xf2f3(); // UNK_0xf2f3
  UNK_0xa010(); // UNK_0xa010
  UNK_0x32f3(); // UNK_0x32f3
  UNK_0x7c10(); // UNK_0x7c10
  UNK_0xadf1(); // UNK_0xadf1
  UNK_0xae76(); // UNK_0xae76
  UNK_0xad0d(); // UNK_0xad0d
  UNK_0x4113(); // UNK_0x4113
  UNK_0x5910(); // UNK_0x5910
  UNK_0x1657(); // UNK_0x1657
  UNK_0x2e6f(); // UNK_0x2e6f
  UNK_0x1f55(); // UNK_0x1f55
  UNK_0x2a7c(); // UNK_0x2a7c
  UNK_0x23f1(); // UNK_0x23f1
  UNK_0xdf6f(); // UNK_0xdf6f
  UNK_0x607b(); // UNK_0x607b
  UNK_0xdebb(); // UNK_0xdebb
  UNK_0xa70f(); // UNK_0xa70f
  UNK_0xa777(); // UNK_0xa777
  UNK_0xdf77(); // UNK_0xdf77
  UNK_0x907b(); // UNK_0x907b
  UNK_0x5910(); // UNK_0x5910
  UNK_0x1657(); // UNK_0x1657
  UNK_0xfe6f(); // UNK_0xfe6f
  UNK_0x90f1(); // UNK_0x90f1
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf3eb: WORD 'UNK_0xf3ed' codep=0x224c parp=0xf3ed
// ================================================
  UNK_0xde24(); // UNK_0xde24

void UNK_0xf3ed() // UNK_0xf3ed
{
  UNK_0xf2e0(); // UNK_0xf2e0
  UNK_0xa3df(); // UNK_0xa3df
  Pop(); // DROP
  UNK_0xa662(); // UNK_0xa662
  if (Pop() == 0) goto label1;
  UNK_0xf362(); // UNK_0xf362
  UNK_0xf3b1(); // UNK_0xf3b1
  Push(pp_UNK_0xef66); // UNK_0xef66
  ON(); // ON
  return;

  label1:
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf338(); // UNK_0xf338
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF(); // OFF
}


// ================================================
// 0xf415: WORD 'UNK_0xf417' codep=0x224c parp=0xf417
// ================================================

void UNK_0xf417() // UNK_0xf417
{
  UNK_0xf150(); // UNK_0xf150
  if (Pop() == 0) goto label1;
  UNK_0xf3ed(); // UNK_0xf3ed
  return;

  label1:
  UNK_0xf40d(); // UNK_0xf40d
}


// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  UNK_0xf1e0(); // UNK_0xf1e0
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xf142(); // UNK_0xf142
  if (Pop() == 0) goto label2;
  UNK_0xf37d(); // UNK_0xf37d
  UNK_0xf417(); // UNK_0xf417
  goto label3;

  label2:
  Push(pp_UNK_0xef66); // UNK_0xef66
  ON(); // ON
}


  label3:
  goto label4;

  label1:
  UNK_0xef76(); // UNK_0xef76
  DUP(); // DUP
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  _ex_(); // !
  UNK_0xf417(); // UNK_0xf417

  label4:
  Push(pp_UNK_0xef66); // UNK_0xef66
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf312(); // UNK_0xf312
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010
}


// ================================================
// 0xf469: WORD 'UNK_0xf46b' codep=0x224c parp=0xf46b
// ================================================

void UNK_0xf46b() // UNK_0xf46b
{
  UNK_0xef96(); // UNK_0xef96
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xef96(); // UNK_0xef96
  Push(Pop()+1); // 1+
  C_ex_(); // C!
}


// ================================================
// 0xf47f: WORD 'UNK_0xf481' codep=0x224c parp=0xf481
// ================================================

void UNK_0xf481() // UNK_0xf481
{
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefba(); // UNK_0xefba
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefae(); // UNK_0xefae
  Push(0x0049);
  _gt_(); // >
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf46b(); // UNK_0xf46b
  Push(1); // 1
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4913(); // UNK_0x4913
  UNK_0x4556(); // UNK_0x4556
  UNK_0x204f(); // UNK_0x204f
  UNK_0x5051(); // UNK_0x5051
  UNK_0x5247(); // UNK_0x5247
  UNK_0x5443(); // UNK_0x5443
  UNK_0x4f4b(); // UNK_0x4f4b
  UNK_0x4150(); // UNK_0x4150
  UNK_0x204e(); // UNK_0x204e
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf4c9: WORD 'UNK_0xf4cb' codep=0x224c parp=0xf4cb
// ================================================

void UNK_0xf4cb() // UNK_0xf4cb
{
  Push(Pop()+1); // 1+
  Push(0x0064);
  MIN(); // MIN
  DUP(); // DUP
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefca(); // UNK_0xefca
  UNK_0xf481(); // UNK_0xf481
}


// ================================================
// 0xf4dd: WORD 'UNK_0xf4df' codep=0x224c parp=0xf4df
// ================================================

void UNK_0xf4df() // UNK_0xf4df
{
  Push(pp__ask_REPAIR); // ?REPAIR
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) return;
  UNK_0xf01c(); // UNK_0xf01c
  Pop(); // DROP
  UNK_0xf0a6(); // UNK_0xf0a6
  Push(cc__minus_1); // -1
  Push(pp__ask_REPAIR); // ?REPAIR
  _ex_(); // !
}


// ================================================
// 0xf4f9: WORD 'DO-REPA' codep=0x224c parp=0xf505
// ================================================

void DO_minus_REPA() // DO-REPA
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf4df(); // UNK_0xf4df
  UNK_0xef86(); // UNK_0xef86
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefae(); // UNK_0xefae
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  UNK_0xf429(); // UNK_0xf429
  Push(pp_UNK_0xef66); // UNK_0xef66
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label4;
  UNK_0xf4cb(); // UNK_0xf4cb
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) goto label5;
  UNK_0xf346(); // UNK_0xf346
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010
  UNK_0xf46b(); // UNK_0xf46b

  label5:
  goto label2;

  label4:
  Pop(); // DROP

  label2:
  goto label3;

  label1:
  UNK_0xf346(); // UNK_0xf346
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010

  label3:
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'REPAIR_________ '
  