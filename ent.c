#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <time.h>


void initialiser_enigmes(enigme t1[],enigme t2[],int t3[])
{t1[1].image=IMG_Load("q1.png");
t1[2].image=IMG_Load("q2.png");
t1[3].image=IMG_Load("q3.png");
t1[1].p.x=400;
t1[1].p.y=40;
t1[2].p.x=400;
t1[2].p.y=40;
t1[3].p.x=400;
t1[3].p.y=40;

t2[1].image=IMG_Load("r1q1.jpg");
t2[2].image=IMG_Load("r2q1.jpg");
t2[3].image=IMG_Load("r3q1.jpg");
t2[4].image=IMG_Load("r1q2.jpg");
t2[5].image=IMG_Load("r2q2.jpg");
t2[6].image=IMG_Load("r3q2.jpg");
t2[7].image=IMG_Load("r1q3.jpg");
t2[8].image=IMG_Load("r2q3.jpg");
t2[9].image=IMG_Load("r3q3.jpg");
t2[1].p.x=70;
t2[1].p.y=420;
t2[2].p.x=500;
t2[2].p.y=420;
t2[3].p.x=1000;
t2[3].p.y=420;
t2[4].p.x=70;
t2[4].p.y=420;
t2[5].p.x=500;
t2[5].p.y=420;
t2[6].p.x=1000;
t2[6].p.y=420;
t2[7].p.x=70;
t2[7].p.y=420;
t2[8].p.x=500;
t2[8].p.y=420;
t2[9].p.x=1000;
t2[9].p.y=420;
t3[1]=1;
t3[2]=3;
t3[3]=2;

}

int afficher(enigme t1[],enigme t2[],SDL_Surface *screen)
{int i,j;

srand(time(NULL));
i=1+rand()%3;
t1[i].p.w=1;
t1[i].p.h=1;

SDL_BlitSurface(t1[i].image, NULL, screen, &(t1[i].p));
 SDL_Flip(screen);
for(j=i;j<i*3+1;j++)
{SDL_BlitSurface(t2[j].image, NULL, screen, &(t2[j].p));
 SDL_Flip(screen);
}return i;
}



int resolution(enigme t1[],enigme t2[])
{int continuer=1;
int mou;
    SDL_Event event;
while (continuer)
    {    


        

int a1=70;
int b1=420;
int a2=500;
int b2=420;
int a3=1000;
int b3=420;
int c=150;


int a;

SDL_WaitEvent(&event);
        switch(event.type)
        {
           
case SDL_MOUSEMOTION:
if((event.motion.x>a1)&&(event.motion.x<a1 +c)&&(event.motion.y>b1)&&(event.motion.y<b1+c))
{a=1;
}



if((event.motion.x>a2)&&(event.motion.x<a2 +c)&&(event.motion.y>b2)&&(event.motion.y<b2+c))
{a=2;

}




if((event.motion.x>a3)&&(event.motion.x<a3 +c)&&(event.motion.y>b3)&&(event.motion.y<b3+c))
{a=3;

}
break ;

case SDL_MOUSEBUTTONUP:
if((event.button.button == SDL_BUTTON_LEFT)&&(a == 1))
{
mou=1;


} 
if((event.button.button == SDL_BUTTON_LEFT)&&(a== 2))
{
mou=2;

}
if((event.button.button == SDL_BUTTON_LEFT) && (a== 3))
{mou=3;
}
return mou;
break ;
}}}
