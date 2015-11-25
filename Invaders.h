#ifndef INVADER_H__
#define INVADER_H__

enum InvaderType{TYPE1,TYPE2,TYPE3};

#define SPRITEWIDTH 30
#define SPRITEHEIGHT 30
#define SPRITEWIDTH2 50
#define SPRITEHEIGHT2 30
#define COLS 11
#define ROWS 5
#define GAP 10




typedef struct
{
  SDL_Rect pos;
  int active;
  int frame;
  enum InvaderType type;
}Invader;


typedef struct
{
  SDL_Rect defRect;
  //  int active;
}Defender;
typedef struct
{
  SDL_Rect bulRect;
  //If the bullet is active
  int active;
  //If the bullet is on screen
  int frame;
}Bullet;


#endif
