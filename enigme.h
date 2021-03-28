#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


/**
* @struct Enigmes
* @brief struct for Enigme
*/



typedef struct 
{SDL_Surface *image;  /*!< Surface. */
 SDL_Rect p;}enigme;/*!< Rectangle*/

void initialiser_enigmes(enigme t1[],enigme t2[],int t3[]);
int afficher(enigme t1[],enigme t2[],SDL_Surface *screen);
int resolution(enigme t1[],enigme t2[]);
void run();
#endif // ENIGME_H_INCLUDED
