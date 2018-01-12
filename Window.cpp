//
// Created by bazyli on 1/6/18.
//

#include <SDL.h>
#include <netinet/in.h>
#include "Window.h"

Window::Window() {

    SDL_Init(SDL_INIT_EVERYTHING);

    this->sdl_window = SDL_CreateWindow("Abstra Bird", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->Width, this->Height, 0);


}


SDL_Window *Window::getSdl_window() const {
    return sdl_window;
}

Window::~Window() {

    SDL_DestroyWindow(this->sdl_window);

};




