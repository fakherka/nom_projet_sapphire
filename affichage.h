#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
//#include <SDL/SDL_ttf.h>

typedef struct ennemi
{
SDL_Surface *ennemi ; 
SDL_Rect position_ennemi ; 
SDL_Rect frame ; 
}ennemi ;

#endif
