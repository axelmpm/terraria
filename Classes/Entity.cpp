//
// Created by axel on 17/3/20.
//

#include <SDL_render.h>
#include "Entity.h"
#include <string>
#include <SDL_image.h>
using namespace std;

//CONSTRUCTOR
Entity::Entity(SDL_Renderer *renderer) {

    this->renderer = renderer;

}

//CARGA UNA TEXTURA
void Entity::loadTexture(string path) {

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0xFF, 0xFF, 0xFF ) );
    //Create texture from surface pixels
    this->texture = SDL_CreateTextureFromSurface( renderer, loadedSurface );

    this->h = loadedSurface->h;
    this->w = loadedSurface->w;

    //Get rid of old loaded surface
    SDL_FreeSurface( loadedSurface );


}

//PONE EN PANTALLA
void Entity::render() {

    SDL_Rect destRect = {x,y,w,h};

    if (flip){
        SDL_RenderCopyEx( renderer, texture, NULL, &destRect, NULL, NULL, SDL_FLIP_HORIZONTAL );
    }
    else{
        SDL_RenderCopy(renderer, texture, NULL, &destRect );
    }

}

void Entity::update() {
    physics.update(&x,&y);
}

void Entity::changeMovementTo(MOVEMENT movement) {

    if ((movement == RIGHT || movement == LEFT) && last != movement){
        last = movement;
        flip = !flip;
    }

    physics.changeMovementTo(movement);
}

