#ifndef BASEOBJ_H
#define BASEOBJ_H
#include "CommonFuntion.h"


class BaseObj
{
    public:
	BaseObj();
	~BaseObj();
	void SetRect(const int& x, const int& y) {
		rect.x = x;
		rect.y = y;
	}
	void SetSizeRect(const int& w, const int& h){
		rect.w = w;
		rect.h = h;
	}
	void SetEntireRect(const int& x, const int& y,const int& w, const int& h){
		rect.x = x;
		rect.y = y;
		rect.w = w;
		rect.h = h;
	}
	SDL_Rect getRect() const {
		return rect;
	}
	SDL_Texture* gettexture() const {
		return texture;
	}

	virtual bool LoadImg(string path, SDL_Renderer* screen);
	void Render(SDL_Renderer* des, const SDL_Rect* clip = NULL);
	void Free();

protected:
	SDL_Texture* texture;
	SDL_Rect rect;

};

#endif // BASEOBJ_H
