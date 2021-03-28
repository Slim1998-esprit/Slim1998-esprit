/**
* @file main.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2015
* Testing program for background scrollilng
*
*/





#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <time.h>
#include "enigme.h"



int main(){
Uint32 SDL_GetTicks(void);
SDL_Surface *img=NULL,*screen=NULL;

SDL_Rect positionecran;
enigme t1[10],t2[30];
SDL_Init(SDL_INIT_VIDEO);
int mou,i;

SDL_Surface *tru,*fals;
SDL_Rect pose;

pose.x=300;
pose.y=20;

tru=IMG_Load("true.png");
fals=IMG_Load("false.png");





screen=SDL_SetVideoMode(1280,730,32, SDL_HWSURFACE);
img= IMG_Load("backg.jpg");
SDL_BlitSurface(img,NULL,screen,&positionecran);
//SDL_Flip(screen);
int continuer=1;
int t3[10];


initialiser_enigmes(t1,t2,t3);
i=afficher(t1,t2,screen);
mou=resolution(t1,t2);
if(t3[i]==mou)
{SDL_BlitSurface(tru,NULL,screen,&pose);
SDL_Flip(screen);

}
else
{SDL_BlitSurface(fals,NULL,screen,&pose);

SDL_Flip(screen);

}
SDL_Event event;
while (continuer)
{
    SDL_WaitEvent(&event);
    switch(event.type)
    {
        case SDL_QUIT:
            continuer = 0;
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
                case SDLK_ESCAPE: 
                    continuer = 0;
                    break;
            }
            break;
    }
}



}
