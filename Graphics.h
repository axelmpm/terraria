//
// Created by axel on 16/3/20.
//

#ifndef TERRARIA_GRAPHICS_H
#define TERRARIA_GRAPHICS_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Graphics {

public:

    void initSDL(int width,int height);

private:
    SDL_Window * window = nullptr;
    SDL_Renderer * renderer = nullptr;
    int height;
    int width;
};


#endif //TERRARIA_GRAPHICS_H
