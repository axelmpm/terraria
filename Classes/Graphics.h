//
// Created by axel on 16/3/20.
//

#ifndef TERRARIA_GRAPHICS_H
#define TERRARIA_GRAPHICS_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "EntityManager.h"

class Graphics {

public:

    void initSDL(int width,int height);
    void render(EntityManager *pManager);
    SDL_Renderer* getRenderer();

private:
    SDL_Window * window = nullptr;
    SDL_Renderer * renderer = nullptr;
    int height;
    int width;

    void renderAllEntities(EntityManager *entityManager);
};


#endif //TERRARIA_GRAPHICS_H
