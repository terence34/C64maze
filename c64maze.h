#ifndef _C64MAZE_H
#define _C64MAZE_H

#ifdef WIN32
#define PLATFORM_MAZE UNIX
#define P_C64 1
#define P_CURRENT P_UNIX
#endif


#define a_abs(a) ((a)>0 ? (a):(-a))
#define a_max(a,b) (((a)>(b))?(a):(b))
#define a_sign(a) ((a)>0?1:((a)==0?0:(-1)))
#define TRUE  0xFF
#define FALSE 0x00

#if (P_CURRENT == P_C64)
#define SIZEX (200)
#define SIZEY (199)
#define STEPSIZEX (15)
#define STEPSIZEY (15)
#elif (P_CURRENT == P_UNIX)
#define SIZEX (200 * 5)
#define SIZEY (199 * 5)
#define STEPSIZEX (15 * 5)
#define STEPSIZEY (15 * 5)
#elif P_CURRENT == P_STM_128x64
#define SIZEX 128
#define SIZEY 64
#define STEPSIZEX  5
#define STEPSIZEY  5
#endif


#define labyrinthSizeX 40
#define labyrinthSizeY 17
extern unsigned char style;

/* dynamic display bounds */
typedef struct {
    unsigned short szx;
    unsigned short szy;
    unsigned short stepszx;
    unsigned short stepszy;
    unsigned short labyrinthx;
    unsigned short labyrinthy;
    unsigned short bannerx;
    unsigned short bannery;
    unsigned short bannerx_end;
    unsigned short bannery_end;
} display_bounds_t;
extern display_bounds_t disp_bounds;


/* global procedures */
void game_exit(void);
void draw_banner(void);

#endif /* C64MAZE_H */
