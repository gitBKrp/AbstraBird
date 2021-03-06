//
// Created by bazyli on 1/12/18.
//

#ifndef ABSTRABIRD_SQUREOBJECT_H
#define ABSTRABIRD_SQUREOBJECT_H


#include <SDL_rect.h>

class SquareObject {

protected:

    SDL_Rect rect;


public:

    SquareObject(){};
    void setRectX(int x) {
        rect.x=x;
    }

    void setRectY(int y) {
        rect.y=y;

    }

    void setRectH(int h) {
        rect.h=h;

    }

    void setRectW(int w) {
        rect.w=w;

    }

    int getRectX() const {
        return  rect.x;
    }

    int getRectY() const {
        return  rect.y ;

    }

    int getRectH() const {
        return rect.h ;

    }

    int getRectW() const {
        return rect.w;

    }



};


#endif //ABSTRABIRD_SQUREOBJECT_H
