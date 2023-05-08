#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include "BaseObj.h"
#include "CommonFuntion.h"


static Mix_Chunk* tieng[5]={nullptr};


Mix_Music* loadMusic(string filePath,Mix_Music* music );
void playMusic(Mix_Music* music );
void tiengxucxac();
void luottiep();
void hetdiem();
void sound();
void tiengan();
void tiengmat();




#endif // SOUND_H_INCLUDED
