//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_ENTITY_H
#define TERRARIA_ENTITY_H

#include <string>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>
using namespace std;

class Entity {


//METODOS
public:

    Entity(SDL_Renderer* renderer);

    void loadTexture(string path);
    void render();

//ATRIBUTOS
public:

    SDL_Texture* texture = nullptr;
    SDL_Renderer* renderer = nullptr;
    int y;
    int x;
    int w;
    int h;
    bool flip = false;
};


#endif //TERRARIA_ENTITY_H
