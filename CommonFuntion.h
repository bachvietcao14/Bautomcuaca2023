#ifndef COMMONFUNTION_H_INCLUDED
#define COMMONFUNTION_H_INCLUDED
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include<bits/stdc++.h>
#include <SDL_mixer.h>


using namespace std;

//**************************************************************
void initSDL(SDL_Window* &window, SDL_Renderer* &renderer);
void quitSDL(SDL_Window* window, SDL_Renderer* renderer);
void waitUntilKeyPressed();
void TTF();
SDL_Texture* loadTexture(string path, SDL_Renderer* renderer);
SDL_Texture* loadText(SDL_Renderer* renderer, std::string text, TTF_Font* font, SDL_Color color);
string xucxac(const string a[],int b);
int* create_random_array(int size, int min_value, int max_value);
int thang(int x1,int x2,int x3,int x4,int x5,int x6,int k);
int congdiem(vector<int> b,int x1,int x2,int x3,int x4,int x5,int x6);
void datcuoc1phan(int x,int y,int &x1,int &x2,int &x3,int &x4,int &x5,int &x6, int &score);
void datcuoctatca(int x,int y,int &x1,int &x2,int &x3,int &x4,int &x5,int &x6, int &score);

//**************************************************************
const int SCREEN_WIDTH = 1600;
const int SCREEN_HEIGHT = 900;
const string WINDOW_TITLE = "Bầu tôm cua cá";
const string a[6]={"photos/naipro.png","photos/baupro.png","photos/meopro.png","photos/capro.png","photos/cuapro.png","photos/tompro.png"};



#endif // COMMONFUNTION_H_INCLUDED
