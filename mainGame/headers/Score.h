//
// Created by bazyli on 1/15/18.
//

#ifndef ABSTRABIRD_SCOREPRINTER_H
#define ABSTRABIRD_SCOREPRINTER_H


#include <SDL_image.h>
#include <stack>
#include <iostream>
#include "IRenderable.h"
#include "IUpdate.h"
#include "IInitable.h"
#include "iresetable.h"
#include "dirmanager.h"
template <typename T>
class Score : public IRenderable  , public IInitable, public IResetable{
public:





    void render(SDL_Renderer *renderer) override {


        std::stack<T> s = this->prepareScore();

        SDL_Rect srcRect;

        SDL_Rect dstRect;

        int count = 0;

        while ( !s.empty() ) {



            T nr = s.top();
            s.pop();

            nr+=9;
            nr%=10;
            srcRect = { nr * 28,0,28,46 };


            dstRect = { 288-28+28*count , 384/4, 3*28/2 , 3*46/2   } ;


            SDL_RenderCopyEx( renderer, texture, &srcRect, &dstRect,  0, NULL, SDL_FLIP_NONE );


            count++;

        }



    }

    void Init(SDL_Renderer *renderer) override {


        IInitable::Init( renderer
                ,DirManager::getDir("SpriteFont.png").c_str()
                ,bitmapSurface
                ,texture );



    }


    std::stack<T> prepareScore () {

        T copy = score;

        std::stack<T> stack;

        if (score == 0) {

            stack.push(0);

            return stack;
        }


        while  ( copy > 0 ) {

        stack.push( copy%10 );

        copy/=10;

        }

        return stack;

    }

    void scorePlus(){

        score++;
    }


    Score(){ if( not std::is_integral<T>::value ) throw; }


    void reset() {

        score = 0;
    }

private:

    T score = 0;

    SDL_Surface* bitmapSurface = NULL ;

    SDL_Texture* texture = NULL;





};




#endif //ABSTRABIRD_SCOREPRINTER_H
