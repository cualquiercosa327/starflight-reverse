#ifdef SDL
#include<SDL2/SDL.h>
static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_Texture *texture;
#endif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<math.h>
#include"graphics.h"

#define WIDTH 640
#define HEIGHT 480

uint32_t* pixels;

int cursorx = 0;
int cursory = 0;

int colortable[16] =
{
0x000000,
0x0000AA,
0x00AA00,
0x00AAAA,
0xAA0000,
0xAA00AA,
0xAA5500,
0xAAAAAA,
0x555555,
0x5555FF,
0x55FF55,
0x55FFFF,
0xFF5555,
0xFF55FF,
0xFFFF55,
0xFFFFFF,
};

static char vgafont8[256*8] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7e,0x81,0xa5,0x81,0xbd,0x99,0x81,0x7e,
0x7e,0xff,0xdb,0xff,0xc3,0xe7,0xff,0x7e,
0x6c,0xfe,0xfe,0xfe,0x7c,0x38,0x10,0x00,
0x10,0x38,0x7c,0xfe,0x7c,0x38,0x10,0x00,
0x38,0x7c,0x38,0xfe,0xfe,0x7c,0x38,0x7c,
0x10,0x10,0x38,0x7c,0xfe,0x7c,0x38,0x7c,
0x00,0x00,0x18,0x3c,0x3c,0x18,0x00,0x00,
0xff,0xff,0xe7,0xc3,0xc3,0xe7,0xff,0xff,
0x00,0x3c,0x66,0x42,0x42,0x66,0x3c,0x00,
0xff,0xc3,0x99,0xbd,0xbd,0x99,0xc3,0xff,
0x0f,0x07,0x0f,0x7d,0xcc,0xcc,0xcc,0x78,
0x3c,0x66,0x66,0x66,0x3c,0x18,0x7e,0x18,
0x3f,0x33,0x3f,0x30,0x30,0x70,0xf0,0xe0,
0x7f,0x63,0x7f,0x63,0x63,0x67,0xe6,0xc0,
0x99,0x5a,0x3c,0xe7,0xe7,0x3c,0x5a,0x99,
0x80,0xe0,0xf8,0xfe,0xf8,0xe0,0x80,0x00,
0x02,0x0e,0x3e,0xfe,0x3e,0x0e,0x02,0x00,
0x18,0x3c,0x7e,0x18,0x18,0x7e,0x3c,0x18,
0x66,0x66,0x66,0x66,0x66,0x00,0x66,0x00,
0x7f,0xdb,0xdb,0x7b,0x1b,0x1b,0x1b,0x00,
0x3e,0x63,0x38,0x6c,0x6c,0x38,0xcc,0x78,
0x00,0x00,0x00,0x00,0x7e,0x7e,0x7e,0x00,
0x18,0x3c,0x7e,0x18,0x7e,0x3c,0x18,0xff,
0x18,0x3c,0x7e,0x18,0x18,0x18,0x18,0x00,
0x18,0x18,0x18,0x18,0x7e,0x3c,0x18,0x00,
0x00,0x18,0x0c,0xfe,0x0c,0x18,0x00,0x00,
0x00,0x30,0x60,0xfe,0x60,0x30,0x00,0x00,
0x00,0x00,0xc0,0xc0,0xc0,0xfe,0x00,0x00,
0x00,0x24,0x66,0xff,0x66,0x24,0x00,0x00,
0x00,0x18,0x3c,0x7e,0xff,0xff,0x00,0x00,
0x00,0xff,0xff,0x7e,0x3c,0x18,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x30,0x78,0x78,0x30,0x30,0x00,0x30,0x00,
0x6c,0x6c,0x6c,0x00,0x00,0x00,0x00,0x00,
0x6c,0x6c,0xfe,0x6c,0xfe,0x6c,0x6c,0x00,
0x30,0x7c,0xc0,0x78,0x0c,0xf8,0x30,0x00,
0x00,0xc6,0xcc,0x18,0x30,0x66,0xc6,0x00,
0x38,0x6c,0x38,0x76,0xdc,0xcc,0x76,0x00,
0x60,0x60,0xc0,0x00,0x00,0x00,0x00,0x00,
0x18,0x30,0x60,0x60,0x60,0x30,0x18,0x00,
0x60,0x30,0x18,0x18,0x18,0x30,0x60,0x00,
0x00,0x66,0x3c,0xff,0x3c,0x66,0x00,0x00,
0x00,0x30,0x30,0xfc,0x30,0x30,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x60,
0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,
0x06,0x0c,0x18,0x30,0x60,0xc0,0x80,0x00,
0x7c,0xc6,0xce,0xde,0xf6,0xe6,0x7c,0x00,
0x30,0x70,0x30,0x30,0x30,0x30,0xfc,0x00,
0x78,0xcc,0x0c,0x38,0x60,0xcc,0xfc,0x00,
0x78,0xcc,0x0c,0x38,0x0c,0xcc,0x78,0x00,
0x1c,0x3c,0x6c,0xcc,0xfe,0x0c,0x1e,0x00,
0xfc,0xc0,0xf8,0x0c,0x0c,0xcc,0x78,0x00,
0x38,0x60,0xc0,0xf8,0xcc,0xcc,0x78,0x00,
0xfc,0xcc,0x0c,0x18,0x30,0x30,0x30,0x00,
0x78,0xcc,0xcc,0x78,0xcc,0xcc,0x78,0x00,
0x78,0xcc,0xcc,0x7c,0x0c,0x18,0x70,0x00,
0x00,0x30,0x30,0x00,0x00,0x30,0x30,0x00,
0x00,0x30,0x30,0x00,0x00,0x30,0x30,0x60,
0x18,0x30,0x60,0xc0,0x60,0x30,0x18,0x00,
0x00,0x00,0xfc,0x00,0x00,0xfc,0x00,0x00,
0x60,0x30,0x18,0x0c,0x18,0x30,0x60,0x00,
0x78,0xcc,0x0c,0x18,0x30,0x00,0x30,0x00,
0x7c,0xc6,0xde,0xde,0xde,0xc0,0x78,0x00,
0x30,0x78,0xcc,0xcc,0xfc,0xcc,0xcc,0x00,
0xfc,0x66,0x66,0x7c,0x66,0x66,0xfc,0x00,
0x3c,0x66,0xc0,0xc0,0xc0,0x66,0x3c,0x00,
0xf8,0x6c,0x66,0x66,0x66,0x6c,0xf8,0x00,
0xfe,0x62,0x68,0x78,0x68,0x62,0xfe,0x00,
0xfe,0x62,0x68,0x78,0x68,0x60,0xf0,0x00,
0x3c,0x66,0xc0,0xc0,0xce,0x66,0x3e,0x00,
0xcc,0xcc,0xcc,0xfc,0xcc,0xcc,0xcc,0x00,
0x78,0x30,0x30,0x30,0x30,0x30,0x78,0x00,
0x1e,0x0c,0x0c,0x0c,0xcc,0xcc,0x78,0x00,
0xe6,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x00,
0xf0,0x60,0x60,0x60,0x62,0x66,0xfe,0x00,
0xc6,0xee,0xfe,0xfe,0xd6,0xc6,0xc6,0x00,
0xc6,0xe6,0xf6,0xde,0xce,0xc6,0xc6,0x00,
0x38,0x6c,0xc6,0xc6,0xc6,0x6c,0x38,0x00,
0xfc,0x66,0x66,0x7c,0x60,0x60,0xf0,0x00,
0x78,0xcc,0xcc,0xcc,0xdc,0x78,0x1c,0x00,
0xfc,0x66,0x66,0x7c,0x6c,0x66,0xe6,0x00,
0x78,0xcc,0xe0,0x70,0x1c,0xcc,0x78,0x00,
0xfc,0xb4,0x30,0x30,0x30,0x30,0x78,0x00,
0xcc,0xcc,0xcc,0xcc,0xcc,0xcc,0xfc,0x00,
0xcc,0xcc,0xcc,0xcc,0xcc,0x78,0x30,0x00,
0xc6,0xc6,0xc6,0xd6,0xfe,0xee,0xc6,0x00,
0xc6,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0x00,
0xcc,0xcc,0xcc,0x78,0x30,0x30,0x78,0x00,
0xfe,0xc6,0x8c,0x18,0x32,0x66,0xfe,0x00,
0x78,0x60,0x60,0x60,0x60,0x60,0x78,0x00,
0xc0,0x60,0x30,0x18,0x0c,0x06,0x02,0x00,
0x78,0x18,0x18,0x18,0x18,0x18,0x78,0x00,
0x10,0x38,0x6c,0xc6,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,
0x30,0x30,0x18,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x78,0x0c,0x7c,0xcc,0x76,0x00,
0xe0,0x60,0x60,0x7c,0x66,0x66,0xdc,0x00,
0x00,0x00,0x78,0xcc,0xc0,0xcc,0x78,0x00,
0x1c,0x0c,0x0c,0x7c,0xcc,0xcc,0x76,0x00,
0x00,0x00,0x78,0xcc,0xfc,0xc0,0x78,0x00,
0x38,0x6c,0x60,0xf0,0x60,0x60,0xf0,0x00,
0x00,0x00,0x76,0xcc,0xcc,0x7c,0x0c,0xf8,
0xe0,0x60,0x6c,0x76,0x66,0x66,0xe6,0x00,
0x30,0x00,0x70,0x30,0x30,0x30,0x78,0x00,
0x0c,0x00,0x0c,0x0c,0x0c,0xcc,0xcc,0x78,
0xe0,0x60,0x66,0x6c,0x78,0x6c,0xe6,0x00,
0x70,0x30,0x30,0x30,0x30,0x30,0x78,0x00,
0x00,0x00,0xcc,0xfe,0xfe,0xd6,0xc6,0x00,
0x00,0x00,0xf8,0xcc,0xcc,0xcc,0xcc,0x00,
0x00,0x00,0x78,0xcc,0xcc,0xcc,0x78,0x00,
0x00,0x00,0xdc,0x66,0x66,0x7c,0x60,0xf0,
0x00,0x00,0x76,0xcc,0xcc,0x7c,0x0c,0x1e,
0x00,0x00,0xdc,0x76,0x66,0x60,0xf0,0x00,
0x00,0x00,0x7c,0xc0,0x78,0x0c,0xf8,0x00,
0x10,0x30,0x7c,0x30,0x30,0x34,0x18,0x00,
0x00,0x00,0xcc,0xcc,0xcc,0xcc,0x76,0x00,
0x00,0x00,0xcc,0xcc,0xcc,0x78,0x30,0x00,
0x00,0x00,0xc6,0xd6,0xfe,0xfe,0x6c,0x00,
0x00,0x00,0xc6,0x6c,0x38,0x6c,0xc6,0x00,
0x00,0x00,0xcc,0xcc,0xcc,0x7c,0x0c,0xf8,
0x00,0x00,0xfc,0x98,0x30,0x64,0xfc,0x00,
0x1c,0x30,0x30,0xe0,0x30,0x30,0x1c,0x00,
0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00,
0xe0,0x30,0x30,0x1c,0x30,0x30,0xe0,0x00,
0x76,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x38,0x6c,0xc6,0xc6,0xfe,0x00,
0x78,0xcc,0xc0,0xcc,0x78,0x18,0x0c,0x78,
0x00,0xcc,0x00,0xcc,0xcc,0xcc,0x7e,0x00,
0x1c,0x00,0x78,0xcc,0xfc,0xc0,0x78,0x00,
0x7e,0xc3,0x3c,0x06,0x3e,0x66,0x3f,0x00,
0xcc,0x00,0x78,0x0c,0x7c,0xcc,0x7e,0x00,
0xe0,0x00,0x78,0x0c,0x7c,0xcc,0x7e,0x00,
0x30,0x30,0x78,0x0c,0x7c,0xcc,0x7e,0x00,
0x00,0x00,0x78,0xc0,0xc0,0x78,0x0c,0x38,
0x7e,0xc3,0x3c,0x66,0x7e,0x60,0x3c,0x00,
0xcc,0x00,0x78,0xcc,0xfc,0xc0,0x78,0x00,
0xe0,0x00,0x78,0xcc,0xfc,0xc0,0x78,0x00,
0xcc,0x00,0x70,0x30,0x30,0x30,0x78,0x00,
0x7c,0xc6,0x38,0x18,0x18,0x18,0x3c,0x00,
0xe0,0x00,0x70,0x30,0x30,0x30,0x78,0x00,
0xc6,0x38,0x6c,0xc6,0xfe,0xc6,0xc6,0x00,
0x30,0x30,0x00,0x78,0xcc,0xfc,0xcc,0x00,
0x1c,0x00,0xfc,0x60,0x78,0x60,0xfc,0x00,
0x00,0x00,0x7f,0x0c,0x7f,0xcc,0x7f,0x00,
0x3e,0x6c,0xcc,0xfe,0xcc,0xcc,0xce,0x00,
0x78,0xcc,0x00,0x78,0xcc,0xcc,0x78,0x00,
0x00,0xcc,0x00,0x78,0xcc,0xcc,0x78,0x00,
0x00,0xe0,0x00,0x78,0xcc,0xcc,0x78,0x00,
0x78,0xcc,0x00,0xcc,0xcc,0xcc,0x7e,0x00,
0x00,0xe0,0x00,0xcc,0xcc,0xcc,0x7e,0x00,
0x00,0xcc,0x00,0xcc,0xcc,0x7c,0x0c,0xf8,
0xc3,0x18,0x3c,0x66,0x66,0x3c,0x18,0x00,
0xcc,0x00,0xcc,0xcc,0xcc,0xcc,0x78,0x00,
0x18,0x18,0x7e,0xc0,0xc0,0x7e,0x18,0x18,
0x38,0x6c,0x64,0xf0,0x60,0xe6,0xfc,0x00,
0xcc,0xcc,0x78,0xfc,0x30,0xfc,0x30,0x30,
0xf8,0xcc,0xcc,0xfa,0xc6,0xcf,0xc6,0xc7,
0x0e,0x1b,0x18,0x3c,0x18,0x18,0xd8,0x70,
0x1c,0x00,0x78,0x0c,0x7c,0xcc,0x7e,0x00,
0x38,0x00,0x70,0x30,0x30,0x30,0x78,0x00,
0x00,0x1c,0x00,0x78,0xcc,0xcc,0x78,0x00,
0x00,0x1c,0x00,0xcc,0xcc,0xcc,0x7e,0x00,
0x00,0xf8,0x00,0xf8,0xcc,0xcc,0xcc,0x00,
0xfc,0x00,0xcc,0xec,0xfc,0xdc,0xcc,0x00,
0x3c,0x6c,0x6c,0x3e,0x00,0x7e,0x00,0x00,
0x38,0x6c,0x6c,0x38,0x00,0x7c,0x00,0x00,
0x30,0x00,0x30,0x60,0xc0,0xcc,0x78,0x00,
0x00,0x00,0x00,0xfc,0xc0,0xc0,0x00,0x00,
0x00,0x00,0x00,0xfc,0x0c,0x0c,0x00,0x00,
0xc3,0xc6,0xcc,0xde,0x33,0x66,0xcc,0x0f,
0xc3,0xc6,0xcc,0xdb,0x37,0x6f,0xcf,0x03,
0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x00,
0x00,0x33,0x66,0xcc,0x66,0x33,0x00,0x00,
0x00,0xcc,0x66,0x33,0x66,0xcc,0x00,0x00,
0x22,0x88,0x22,0x88,0x22,0x88,0x22,0x88,
0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,
0xdb,0x77,0xdb,0xee,0xdb,0x77,0xdb,0xee,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0xf8,0x18,0x18,0x18,
0x18,0x18,0xf8,0x18,0xf8,0x18,0x18,0x18,
0x36,0x36,0x36,0x36,0xf6,0x36,0x36,0x36,
0x00,0x00,0x00,0x00,0xfe,0x36,0x36,0x36,
0x00,0x00,0xf8,0x18,0xf8,0x18,0x18,0x18,
0x36,0x36,0xf6,0x06,0xf6,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x00,0x00,0xfe,0x06,0xf6,0x36,0x36,0x36,
0x36,0x36,0xf6,0x06,0xfe,0x00,0x00,0x00,
0x36,0x36,0x36,0x36,0xfe,0x00,0x00,0x00,
0x18,0x18,0xf8,0x18,0xf8,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf8,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x1f,0x00,0x00,0x00,
0x18,0x18,0x18,0x18,0xff,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xff,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x1f,0x18,0x18,0x18,
0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,
0x18,0x18,0x18,0x18,0xff,0x18,0x18,0x18,
0x18,0x18,0x1f,0x18,0x1f,0x18,0x18,0x18,
0x36,0x36,0x36,0x36,0x37,0x36,0x36,0x36,
0x36,0x36,0x37,0x30,0x3f,0x00,0x00,0x00,
0x00,0x00,0x3f,0x30,0x37,0x36,0x36,0x36,
0x36,0x36,0xf7,0x00,0xff,0x00,0x00,0x00,
0x00,0x00,0xff,0x00,0xf7,0x36,0x36,0x36,
0x36,0x36,0x37,0x30,0x37,0x36,0x36,0x36,
0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,
0x36,0x36,0xf7,0x00,0xf7,0x36,0x36,0x36,
0x18,0x18,0xff,0x00,0xff,0x00,0x00,0x00,
0x36,0x36,0x36,0x36,0xff,0x00,0x00,0x00,
0x00,0x00,0xff,0x00,0xff,0x18,0x18,0x18,
0x00,0x00,0x00,0x00,0xff,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0x3f,0x00,0x00,0x00,
0x18,0x18,0x1f,0x18,0x1f,0x00,0x00,0x00,
0x00,0x00,0x1f,0x18,0x1f,0x18,0x18,0x18,
0x00,0x00,0x00,0x00,0x3f,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0xff,0x36,0x36,0x36,
0x18,0x18,0xff,0x18,0xff,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0xf8,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1f,0x18,0x18,0x18,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x00,0x00,0x76,0xdc,0xc8,0xdc,0x76,0x00,
0x00,0x78,0xcc,0xf8,0xcc,0xf8,0xc0,0xc0,
0x00,0xfc,0xcc,0xc0,0xc0,0xc0,0xc0,0x00,
0x00,0xfe,0x6c,0x6c,0x6c,0x6c,0x6c,0x00,
0xfc,0xcc,0x60,0x30,0x60,0xcc,0xfc,0x00,
0x00,0x00,0x7e,0xd8,0xd8,0xd8,0x70,0x00,
0x00,0x66,0x66,0x66,0x66,0x7c,0x60,0xc0,
0x00,0x76,0xdc,0x18,0x18,0x18,0x18,0x00,
0xfc,0x30,0x78,0xcc,0xcc,0x78,0x30,0xfc,
0x38,0x6c,0xc6,0xfe,0xc6,0x6c,0x38,0x00,
0x38,0x6c,0xc6,0xc6,0x6c,0x6c,0xee,0x00,
0x1c,0x30,0x18,0x7c,0xcc,0xcc,0x78,0x00,
0x00,0x00,0x7e,0xdb,0xdb,0x7e,0x00,0x00,
0x06,0x0c,0x7e,0xdb,0xdb,0x7e,0x60,0xc0,
0x38,0x60,0xc0,0xf8,0xc0,0x60,0x38,0x00,
0x78,0xcc,0xcc,0xcc,0xcc,0xcc,0xcc,0x00,
0x00,0xfc,0x00,0xfc,0x00,0xfc,0x00,0x00,
0x30,0x30,0xfc,0x30,0x30,0x00,0xfc,0x00,
0x60,0x30,0x18,0x30,0x60,0x00,0xfc,0x00,
0x18,0x30,0x60,0x30,0x18,0x00,0xfc,0x00,
0x0e,0x1b,0x1b,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0xd8,0xd8,0x70,
0x30,0x30,0x00,0xfc,0x00,0x30,0x30,0x00,
0x00,0x76,0xdc,0x00,0x76,0xdc,0x00,0x00,
0x38,0x6c,0x6c,0x38,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x0f,0x0c,0x0c,0x0c,0xec,0x6c,0x3c,0x1c,
0x78,0x6c,0x6c,0x6c,0x6c,0x00,0x00,0x00,
0x70,0x18,0x30,0x60,0x78,0x00,0x00,0x00,
0x00,0x00,0x3c,0x3c,0x3c,0x3c,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

static int GraphicsInitThread(void *ptr)
{
#ifdef SDL
    window = SDL_CreateWindow("Hello World!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        printf("SDL_CreateWindow Error: %s", SDL_GetError());
        SDL_Quit();
        return 0;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL)
    {
        printf("SDL_CreateRenderer Error: %s", SDL_GetError());
        SDL_Quit();
        return 0;
    }

    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, WIDTH, HEIGHT);
    if (texture == NULL)
    {
        printf("SDL_CreateTexture Error: %s", SDL_GetError());
        SDL_Quit();
        return 0;
    }
#endif
    pixels = malloc(WIDTH * HEIGHT * sizeof(uint32_t));
    GraphicsClear(0);
    return 0;
}

void GraphicsInit()
{
#ifdef SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
    {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return;
    }
    FILE* file;
    file = freopen("stdout", "w", stdout); // redirects stdout
    file = freopen("stderr", "w", stderr); // redirects stderr
    GraphicsInitThread(NULL);
#else
    GraphicsInitThread(NULL);
#endif
}

void GraphicsUpdate()
{
#ifdef SDL
    SDL_UpdateTexture(texture, NULL, pixels, WIDTH * sizeof(uint32_t));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    SDL_PumpEvents();
#endif
}

void GraphicsWait()
{
#ifdef SDL
    SDL_Event event;

    while(1)
    {
        SDL_WaitEvent(&event);
        switch (event.type)
        {
            case SDL_QUIT:
                return;
        }
    }
#endif
}

void GraphicsQuit()
{
#ifdef SDL
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
#endif
}

void GraphicsSetCursor(int x, int y)
{
    cursorx = x;
    cursory = y;
}

void GraphicsCarriageReturn()
{
    cursorx = 0;
    cursory++;
}

void GraphicsChar(unsigned char s)
{
    for(int jj=0; jj<8; jj++)
    {
        int offset = ((int)s)*8 + jj;
        for(int ii=0; ii<8; ii++)
        {
            int color = 0;
            if ((vgafont8[offset]) & (1<<(7-ii)))
            {
                color = 0xFFFFFFFF;
            }
            pixels[(cursory*8+jj) * 640 + (cursorx*8+ii)] = color;
        }
    }
    cursorx++;
    if (cursorx >=80)
    {
        GraphicsCarriageReturn();
    }
}

void GraphicsText(char *s, int n)
{
    for(int i=0; i<n; i++)
    {
        GraphicsChar(s[i]);
    }
    GraphicsUpdate();
}

// 0 = text, 1 = ega graphics
void GraphicsMode(int mode)
{
    GraphicsClear(0);
}

void GraphicsClear(int color)
{
    //memset(pixels, 0, WIDTH * HEIGHT * sizeof(uint32_t));
    for(int i=0; i<WIDTH*HEIGHT; i++)
    {
        pixels[i] = colortable[color&0xF];
    }
    GraphicsUpdate();
}


void GraphicsLine(int x1, int y1, int x2, int y2, int color, int xormode)
{
    x1 <<= 2;
    y1 = 400-(y1<<1);
    x2 <<= 2;
    y2 = 400 - (y2<<1);
    float x = x1;
    float y = y1;
    float dx = (x2 - x1);
    float dy = (y2 - y1);
    int n = fabs(dx);
    if (fabs(dy) > n) n = fabs(dy);
    if (n == 0) return;
    dx /= n;
    dy /= n;
    for(int i=0; i<=n; i++)
    {
        pixels[(int)y*WIDTH+(int)x] = colortable[color&0xF];
        x += dx;
        y += dy;
    }
    GraphicsUpdate();
}

void GraphicsPixel(int x, int y, int color)
{
    x <<= 2;
    y = 400-(y<<1);
    pixels[(y+0)*WIDTH+(x+0)] = colortable[color&0xF];
    pixels[(y+0)*WIDTH+(x+1)] = colortable[color&0xF];
    pixels[(y+1)*WIDTH+(x+1)] = colortable[color&0xF];
    pixels[(y+1)*WIDTH+(x+0)] = colortable[color&0xF];
    pixels[(y+0)*WIDTH+(x+2)] = colortable[color&0xF];
    pixels[(y+1)*WIDTH+(x+2)] = colortable[color&0xF];
    pixels[(y+0)*WIDTH+(x+3)] = colortable[color&0xF];
    pixels[(y+1)*WIDTH+(x+3)] = colortable[color&0xF];
}

void GraphicsBLT(int x1, int y1, int h, int w, char* image, int color)
{
    short int *img = (short int*)image;
    int n = 0;
    for(int y=y1; y>y1-h; y--)
    for(int x=x1; x<x1+w; x++)
    {
        int x0 = x << 2;
        int y0 = 400 - (y << 1);
        if (x0 >= 0)
        if (y0 >= 0)
        if (x0 < WIDTH)
        if (y0 < HEIGHT)
        if ((*img) & (1<<(15-n)))
        {
            pixels[(y0+0) * WIDTH + (x0+0)] = colortable[color&0xF];
            pixels[(y0+0) * WIDTH + (x0+1)] = colortable[color&0xF];
            pixels[(y0+1) * WIDTH + (x0+0)] = colortable[color&0xF];
            pixels[(y0+1) * WIDTH + (x0+1)] = colortable[color&0xF];
            pixels[(y0+0) * WIDTH + (x0+0+2)] = colortable[color&0xF];
            pixels[(y0+0) * WIDTH + (x0+1+2)] = colortable[color&0xF];
            pixels[(y0+1) * WIDTH + (x0+0+2)] = colortable[color&0xF];
            pixels[(y0+1) * WIDTH + (x0+1+2)] = colortable[color&0xF];
        }
        n++;
        if (n == 16)
        {
            n = 0;
            img++;
        }
    }
    GraphicsUpdate();
}

int keyinbuffer = -1;

#ifdef SDL
unsigned short GetKey(int sym)
{
    if (sym == SDLK_LEFT)
    {
        return 331;
    }
    if (sym == SDLK_RIGHT)
    {
        return 333;
    }
    if (sym == SDLK_UP)
    {
        return 328;
    }
    if (sym == SDLK_DOWN)
    {
        return 336;
    }
    return sym;
}
#endif

unsigned short GraphicsGetChar()
{
#ifdef SDL
    if (keyinbuffer > 0)
    {
        int temp = keyinbuffer;
        keyinbuffer = -1;
        return temp;
    }
    GraphicsSetCursor(0, 0);
    GraphicsText("Wait", 4);
    SDL_Event event;
    while(1)
    {
        SDL_WaitEvent(&event);
        switch (event.type)
        {
            case SDL_QUIT:
                GraphicsQuit();
                exit(1);
            case SDL_KEYDOWN:
                return GetKey(event.key.keysym.sym);
        }
    }

#else
    return getchar();
#endif
}

int GraphicsCharsInBuffer()
{
    //printf("keyboard check buffer\n");
    #ifdef SDL
        char dummy[256];
        GraphicsSetCursor(0, 0);
        sprintf(dummy, "Check %i", rand());
        GraphicsText(dummy, strlen(dummy));

        SDL_Event event;
        SDL_WaitEventTimeout(&event, 1);
        switch (event.type)
        {
            case SDL_QUIT:
                GraphicsQuit();
                exit(1);
            case SDL_KEYDOWN:
                keyinbuffer = GetKey(event.key.keysym.sym);
                sprintf(dummy, "  (%i)", event.key.keysym.sym);
                GraphicsText(dummy, strlen(dummy));
                return 1;
        }
        return 0;
    /*
        SDL_Event events[5];
        GraphicsSetCursor(0, 0);

        SDL_PumpEvents();
        int x = SDL_PeepEvents(events, 5, SDL_PEEKEVENT, SDL_KEYDOWN, SDL_KEYDOWN);
        sprintf(dummy, "Check %i %i", x, rand());
        GraphicsText(dummy, strlen(dummy));
    return SDL_PeepEvents(events, 5, SDL_PEEKEVENT, SDL_KEYDOWN, SDL_KEYDOWN);
    */
    #else
    return 0;
    #endif
}
