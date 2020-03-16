//
// Created by axel on 16/3/20.
//

#include "Graphics.h"



void Graphics::initSDL(int width,int height) {

    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);


    int windowWidth = width;
    int windowHeight = height;


    this->window = SDL_CreateWindow( "Terraria", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, 0);
    this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_PRESENTVSYNC);

}
