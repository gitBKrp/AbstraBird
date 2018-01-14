//
// Created by bazyli on 1/14/18.
//

#ifndef ABSTRABIRD_WINDOWS_H
#define ABSTRABIRD_WINDOWS_H


#include <SDL_image.h>
#include "Window.h"

class ColoredWindow : public Window {

public:
    void render(SDL_Renderer *renderer) override {

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);

    }

};

class FlappyWindow : public Window {

private:

    SDL_Surface* bitmapSurface = NULL ;

    SDL_Texture* texture = NULL;


public:

    FlappyWindow(){}

    void Init(SDL_Renderer *renderer) override {

        bitmapSurface = IMG_Load("/home/bazyli/CLionProjects/AbstraBird/Pictures/bg.png");

        texture = SDL_CreateTextureFromSurface ( renderer ,bitmapSurface );

        SDL_FreeSurface( bitmapSurface );
    }

    void render(SDL_Renderer *renderer) override {


        SDL_RenderCopy(renderer, texture, NULL, NULL);

    }






};



#endif //ABSTRABIRD_WINDOWS_H