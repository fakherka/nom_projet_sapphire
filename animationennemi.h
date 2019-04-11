#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct perso
{
  SDL_Surface *image[3];
  SDL_Surface *Hit;
  SDL_Surface *imageActuel;
  SDL_Rect position;
  SDL_Rect positionO;
  int fram;
  int direction;

}perso;
perso InitEnemy(perso Ennemie,int x, int y);
void  AfficherEnemy(perso Ennemie,SDL_Surface *screen);
perso MoveEnemy(perso Ennemie,SDL_Rect personnage,int *stat);
perso AnimateEnemy(perso Ennemie,int stat);



