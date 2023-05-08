#include"sound.h"
#include "CommonFuntion.h"



Mix_Music*  loadMusic(string filePath,Mix_Music* music ){
    if(SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cerr << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
    }
    // Initialize SDL_mixer
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        std::cerr << "SDL_mixer could not initialize! SDL_mixer Error: " << Mix_GetError() << std::endl;
    }
    // Load MP3 file
     music = Mix_LoadMUS(filePath.c_str());//"sound/sound1.mp3"
    if(music == NULL) {
        std::cerr << "Failed to load music! SDL_mixer Error: " << Mix_GetError() << std::endl;
    }
    return music;
}
/*void sound(bool checkmute){
    if(checkmute=false){
        tieng[0]=Mix_LoadWAV("sounds/tieng.wav");
        tieng[1]=Mix_LoadWAV("sounds/luottiep.mp3");
        tieng[2]=Mix_LoadWAV("sounds/lose.mp3");
        tieng[3]=Mix_LoadWAV("sounds/an.mp3");
        tieng[4]=Mix_LoadWAV("sounds/mat.mp3");
    }else tieng[5]={nullptr};
}*/
void playMusic(Mix_Music* music){
    Mix_PlayMusic( music, -1 );
    Mix_VolumeMusic(50);

}
void tiengxucxac(){
     tieng[0]=Mix_LoadWAV("sounds/tieng.wav");
     Mix_VolumeChunk(tieng[0],1000);
     Mix_PlayChannel(-1,tieng[0],0);
     }
void luottiep(){
     tieng[1]=Mix_LoadWAV("sounds/luottiep.mp3");
     Mix_VolumeChunk(tieng[1],1000);
     Mix_PlayChannel(-1,tieng[1],0);
     }
void hetdiem(){
     tieng[2]=Mix_LoadWAV("sounds/lose.mp3");
     Mix_VolumeChunk(tieng[2],1000);
     Mix_PlayChannel(-1 ,tieng[2],0);
 }
void tiengan(){
     tieng[3]=Mix_LoadWAV("sounds/an.mp3");
     Mix_VolumeChunk(tieng[3],1000);
     Mix_PlayChannel(-1 ,tieng[3],0);
}
void tiengmat(){
     tieng[4]=Mix_LoadWAV("sounds/mat.mp3");
     Mix_VolumeChunk(tieng[4],1000);
     Mix_PlayChannel(-1 ,tieng[4],0);
 }







