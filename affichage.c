#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

#include"affichage.h"

 
 
int main ( int argc, char** argv )
{ennemi e;
    SDL_Surface* screen = NULL;
    SDL_Init(SDL_INIT_VIDEO);


screen= SDL_SetVideoMode(600,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));

if(screen==NULL)
{
printf("Unable to set video mode: %s\n",SDL_GetError());
return 1;
}

 
    e.ennemi=IMG_Load("ons.png");
     

   if (e.ennemi==NULL)
    
   {printf("erreur. %s \n",SDL_GetError() );
    }
    
    e.position_ennemi.x = 20 ;
    e.position_ennemi.y = 20 ;

        SDL_BlitSurface(e.ennemi, NULL, screen, &e.position_ennemi);
        SDL_Flip(screen);
 
        SDL_Delay(5000);

        SDL_FreeSurface(screen);
        SDL_FreeSurface(e.ennemi);
              SDL_Quit();

        return 0;}
