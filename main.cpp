#include "CommonFuntion.h"
#include "BaseObj.h"
#include "Text.h"
#include "sound.h"
#include "header.h"


Mix_Music* music=loadMusic("sounds/tienggieo.mp3",music);



//**************************************************************
int main(int argc, char* argv[])
{

    SDL_Window* window;
    SDL_Renderer* renderer;
    initSDL(window, renderer);
    TTF();
    //cac mau chu
    TTF_Font* font = TTF_OpenFont("TEXT/bach.ttf", 100);
    TTF_Font* font1 = TTF_OpenFont("TEXT/bach.ttf", 30);
    TTF_Font* font2 = TTF_OpenFont("TEXT/bach.ttf", 70);
    //doi tuong khong thay thoi va rect cua? chung'
    //nen dat cuoc
    bg.LoadImg("photos/pg.png",renderer);
    bg.SetEntireRect(0,0,1600,900);
    //nen xuc xac
    hinhnen.LoadImg("photos/hinhnen.jpeg",renderer);
    hinhnen.SetEntireRect(0,0,1600,900);
    //dia
    dia.LoadImg("photos/dia1.png",renderer);
    dia.SetEntireRect(600,200,400,400);
    //bo bat dia
    batdia.LoadImg("photos/bo.png",renderer);
    batdia.SetEntireRect(600,200,400,400);
    //anh ket thuc
    over.LoadImg("photos/over.png",renderer);
    over.SetEntireRect(170,133,1200,600);
    //bat
    bat.LoadImg("photos/bat1.png",renderer);
    //mobat
    mobat.LoadImg("photos/mobat.png",renderer);
    mobat.SetEntireRect(700,600,200,120);
    //back
    back1.LoadImg("photos/back.png",renderer);
    back1.SetEntireRect(160,90,1280,720);
    //text
    dat.SetText("Moi ban dat cuoc");
    //huong dan
    huongdan1.LoadImg("photos/huongdan1.png",renderer);
    huongdan1.SetEntireRect(0,0,1600,900);
    //mau sac
    diem.SetColor(Text :: WHITE);
    nai.SetColor(Text :: WHITE);
    bau.SetColor(Text :: WHITE);
    meo.SetColor(Text :: WHITE);
    ca.SetColor(Text :: WHITE);
    cua.SetColor(Text :: WHITE);
    tom.SetColor(Text :: WHITE);
    dat.SetColor(Text :: RED);
    diemcong.SetColor(Text :: RED);
    high.SetColor(Text::RED);
    //////////
    SDL_Event event;
    int diemcao=0;
    bool start;
    bool menu = true;
    while(menu){
            int score=10000;
            start=false;
            menuu.LoadImg("photos/menu.png",renderer);
            menuu.SetEntireRect(0,0,1600,900);
            menuu.Render(renderer,nullptr);
            SDL_RenderPresent(renderer);
            while(SDL_PollEvent(&event)) {
                    if(event.type == SDL_QUIT){
                    quitSDL;
                    return 0;
                }
                if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){
                    quitSDL(window,renderer);
                    TTF_Quit();
                    return 0;
                }
                    if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        if(x>620&&y>430&&x<1020&&y<570){start=true;}
                        else if (x>680&&y>600&&x<1010&&y<670){
                                bool huongdan=true;
                                    huongdan1.Render(renderer,nullptr);
                                    SDL_RenderPresent(renderer);
                            while(huongdan){
                                    while(SDL_PollEvent(&event)) {
                                        if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){
                                         huongdan=false;
                                          }
                                          if(event.type == SDL_QUIT){
                                            quitSDL;
                                            return 0;
                                        }
                                        if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        if(x>=0&&y>=0&&x<=125&&y<=100){huongdan=false;}
                       }
                                        }


                }

                            }

                            }
                         else if(x>700&&y>705&&x<940&&y<760){
                            quitSDL(window,renderer);
                            return 0;
                         }

                        }
                    }
            }
            SDL_RenderClear(renderer);

    while(start&&score!=0){
    diemcao=max(diemcao,score);
    bool checkPlay=0;
    SDL_Event event;
        int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0;
        while(!checkPlay){
    SDL_RenderClear(renderer);
    diem.SetText(to_string(score));
    nai.SetText(to_string(x1));
    bau.SetText(to_string(x2));
    meo.SetText(to_string(x3));
    ca.SetText(to_string(x4));
    cua.SetText(to_string(x5));
    tom.SetText(to_string(x6));
    diem.LoadFont(font,renderer);
    nai.LoadFont(font1,renderer);
    bau.LoadFont(font1,renderer);
    meo.LoadFont(font1,renderer);
    ca.LoadFont(font1,renderer);
    cua.LoadFont(font1,renderer);
    tom.LoadFont(font1,renderer);
    bg.Render(renderer,nullptr);
    diem.SetSizeText(100,100);
    nai.SetSizeText((int)to_string(x1).size()*28,30);
    bau.SetSizeText((int)to_string(x2).size()*28,30);
    meo.SetSizeText((int)to_string(x3).size()*28,30);
    ca.SetSizeText((int)to_string(x4).size()*28,30);
    cua.SetSizeText((int)to_string(x5).size()*28,30);
    tom.SetSizeText((int)to_string(x6).size()*28,30);
    diem.RenderText(renderer,258,150);
    nai.RenderText(renderer,220,557);
    bau.RenderText(renderer,740,557);
    meo.RenderText(renderer,1240,557);
    ca.RenderText(renderer,220,820);
    cua.RenderText(renderer,740,820);
    tom.RenderText(renderer,1240,820);
    dat.LoadFont(font2,renderer);
    dat.RenderText(renderer,520,150);
    SDL_RenderPresent(renderer);

            while(SDL_PollEvent(&event)) {
                    if(event.type == SDL_QUIT){
                    quitSDL;
                    TTF_Quit();
                    return 0;
                }
                if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){back1.Render(renderer,nullptr);
                            SDL_RenderPresent(renderer);
                            bool Back=false;
                            while(!Back){
                                while(SDL_PollEvent(&event)) {
                                        if(event.type == SDL_QUIT){
                                        quitSDL;
                                        TTF_Quit();
                                        return 0;
                                        }
                                        if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){Back=true;}
                                        else if(event.type == SDL_MOUSEBUTTONDOWN){
                                               if(event.button.button == SDL_BUTTON_LEFT){
                                                int x, y;
                                                SDL_GetMouseState(&x, &y);
                                                if((x >= 485 && x <=820 )&&( y >=575  && y <= 625)){
                                                    Back=true;
                                                    checkPlay=true;
                                                    start=false;
                                                }else if(((x >= 875 && x <=1200 )&&( y >= 575 && y <= 625))||((x >= 1185 && x <=1225 )&&( y >= 209 && y <= 242))){
                                                    Back=true;
                                                }
                                            }
                                    }
                            }
                        }
                    }

                else if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        datcuoc1phan(x,y,x1,x2,x3,x4,x5,x6,score);
                        if((x >= 1087 && x <=1370 )&&( y >= 185 && y <= 250))checkPlay=true;
                        if(x>=0&&y>=0&&x<=125&&y<=100){
                            back1.Render(renderer,nullptr);
                            SDL_RenderPresent(renderer);
                            bool Back=false;
                            while(!Back){
                                while(SDL_PollEvent(&event)) {
                                        if(event.type == SDL_QUIT){
                                        quitSDL;
                                        TTF_Quit();
                                        return 0;
                                        }
                                        if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){Back=true;}
                                        else if(event.type == SDL_MOUSEBUTTONDOWN){
                                               if(event.button.button == SDL_BUTTON_LEFT){
                                                int x, y;
                                                SDL_GetMouseState(&x, &y);
                                                if((x >= 485 && x <=820 )&&( y >=575  && y <= 625)){
                                                    Back=true;
                                                    checkPlay=true;
                                                    start=false;
                                                }else if(((x >= 875 && x <=1200 )&&( y >= 575 && y <= 625))||((x >= 1185 && x <=1225 )&&( y >= 209 && y <= 242))){
                                                    Back=true;
                                                }
                                            }
                                    }
                            }
                        }
                    }
                }
                    else if(event.button.button == SDL_BUTTON_RIGHT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        datcuoctatca(x,y,x1,x2,x3,x4,x5,x6,score);

                    }
            }
            }
        }



    if(start==true){

    tiengxucxac();
    bool open1=false;
    while(!open1){
    SDL_RenderClear(renderer);
    hinhnen.Render(renderer,nullptr);
    batdia.Render(renderer,nullptr);
    mobat.Render(renderer,nullptr);
    SDL_RenderPresent(renderer);
    while(SDL_PollEvent(&event)) {
                    if(event.type == SDL_QUIT){
                    quitSDL;
                    TTF_Quit();
                    return 0;
                }
                    if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){
                                       start=false;
                                       open1=true;
                                        }
                    if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        if((x >=700  && x <= 900)&&( y >= 600 && y <=720 )) {open1=true;}
                       }
                    }
    }
    }
    int x_bat=600;
    int y_bat=200;
    //xuc xac
    int* k=create_random_array(3,1,6);
    vector<int> b;
    for (int i = 0 ; i<3;i++){
        b.push_back(k[i]);
    }
    while(x_bat<900){
    SDL_RenderClear(renderer);
    hinhnen.Render(renderer,nullptr);
    dia.Render(renderer,nullptr);
    xucxac1.LoadImg(xucxac(a,b[0]),renderer);
    xucxac1.SetEntireRect(720,320,70,70);
    xucxac1.Render(renderer,nullptr);
    xucxac2.LoadImg(xucxac(a,b[1]),renderer);
    xucxac2.SetEntireRect(800,320,70,70);
    xucxac2.Render(renderer,nullptr);
    xucxac3.LoadImg(xucxac(a,b[2]),renderer);
    xucxac3.SetEntireRect(760,400,70,70);
    xucxac3.Render(renderer,nullptr);
    bat.SetEntireRect(x_bat,y_bat,400,400);
    bat.Render(renderer,nullptr);
    SDL_RenderPresent(renderer);
    x_bat+=5;
    y_bat=0.5*x_bat;
    }
    int an=congdiem(b,x1,x2,x3,x4,x5,x6);
    score+=an;
    string a="+"+to_string(an);
    int x_diemcong=285;
    int y_diemcong=800;
    if(an>0){
        tiengan();
    }else tiengmat();
    bool tieptuc=true;
    while(tieptuc){
    SDL_RenderClear(renderer);
    xucxac1.SetEntireRect(730,125,70,70);
    xucxac2.SetEntireRect(805,125,70,70);
    xucxac3.SetEntireRect(765,200,70,70);
    bg.Render(renderer,nullptr);
    diem.RenderText(renderer,258,150);
    nai.RenderText(renderer,220,557);
    bau.RenderText(renderer,740,557);
    meo.RenderText(renderer,1240,557);
    ca.RenderText(renderer,220,820);
    cua.RenderText(renderer,740,820);
    tom.RenderText(renderer,1240,820);
    xucxac1.Render(renderer,nullptr);
    xucxac2.Render(renderer,nullptr);
    xucxac3.Render(renderer,nullptr);
    diemcong.LoadFont(font1,renderer);
    diemcong.SetSizeText((int)a.size()*28,30);
    diemcong.SetText(a);
    diemcong.RenderText(renderer,x_diemcong,y_diemcong);
    SDL_RenderPresent(renderer);
    y_diemcong-=2;
    if(y_diemcong<150){
            break;
    }
    while(SDL_PollEvent(&event)) {
                    if(event.type == SDL_QUIT){
                    quitSDL;
                    TTF_Quit();
                    return 0;
                    }
                    if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){
                        back1.Render(renderer,nullptr);
                            SDL_RenderPresent(renderer);
                            bool Back=false;
                            while(!Back){
                                while(SDL_PollEvent(&event)) {
                                        if(event.type == SDL_QUIT){
                                        quitSDL;
                                        TTF_Quit();
                                        return 0;
                                        }
                                        if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){Back=true;}
                                        else if(event.type == SDL_MOUSEBUTTONDOWN){
                                               if(event.button.button == SDL_BUTTON_LEFT){
                                                int x, y;
                                                SDL_GetMouseState(&x, &y);
                                                if((x >= 485 && x <=820 )&&( y >=575  && y <= 625)){
                                                    Back=true;
                                                    tieptuc=false;
                                                    checkPlay=true;
                                                    start=false;
                                                }else if(((x >= 875 && x <=1200 )&&( y >= 575 && y <= 625))||((x >= 1185 && x <=1225 )&&( y >= 209 && y <= 242))){
                                                    Back=true;
                                                }
                                            }
                                    }
                            }
                        }
                    }
                    if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        if((x >= 681 && x <= 900)&&( y >= 67 && y <= 300)) {
                                tieptuc=false;}
                        if(x>=0&&y>=0&&x<=125&&y<=100){
                            back1.Render(renderer,nullptr);
                            SDL_RenderPresent(renderer);
                            bool Back=false;
                            while(!Back){
                                while(SDL_PollEvent(&event)) {
                                        if(event.type == SDL_QUIT){
                                        quitSDL;
                                        TTF_Quit();
                                        return 0;
                                        }
                                        if(event.type==SDL_KEYDOWN&&event.key.keysym.sym==SDLK_ESCAPE){Back=true;}
                                        else if(event.type == SDL_MOUSEBUTTONDOWN){
                                               if(event.button.button == SDL_BUTTON_LEFT){
                                                int x, y;
                                                SDL_GetMouseState(&x, &y);
                                                if((x >= 485 && x <=820 )&&( y >=575  && y <= 625)){
                                                    Back=true;
                                                    tieptuc=false;
                                                    checkPlay=true;
                                                    start=false;
                                                }else if(((x >= 875 && x <=1200 )&&( y >= 575 && y <= 625))||((x >= 1185 && x <=1225 )&&( y >= 209 && y <= 242))){
                                                    Back=true;
                                                }
                                            }
                                    }
                            }
                        }
                    }
                       }
                    }
    }
    }
    if(score==0){
    high.SetText(to_string(diemcao));
    high.LoadFont(font2,renderer);
    high.SetSizeText((int)to_string(diemcao).size()*70,70);
    hetdiem();
    bool check1=true;
    while(check1){
        over.Render(renderer,nullptr);
        high.RenderText(renderer,800-0.5*((int)to_string(diemcao).size()*70),420);
        SDL_RenderPresent(renderer);
        while(SDL_PollEvent(&event)) {
                    if(event.type == SDL_QUIT){
                    quitSDL;
                    TTF_Quit();
                    return 0;
                }
                    if(event.type == SDL_MOUSEBUTTONDOWN){
                       if(event.button.button == SDL_BUTTON_LEFT){
                        int x, y;
                        SDL_GetMouseState(&x, &y);
                        if((x >= 840 && x <= 1141)&&( y >= 540 && y <= 580)) {
                            score=10000;
                            check1=false;
                                }
                        else if((x >= 483 && x <= 780)&&( y >= 540 && y <= 580)) {
                            check1=false;
                            checkPlay=true;

                                }
                       }
                    }

    }
    }

    }else{
        luottiep();
        }
    SDL_RenderClear(renderer);
    }
    }
    }
    SDL_Delay(100);
    waitUntilKeyPressed();
    quitSDL(window, renderer);
    return 0;
}
