//
// Created by axel on 17/3/20.
//

#include "Player.h"
#include <iostream>
#include <SDL_render.h>

using namespace std;

Player::Player(SDL_Renderer* renderer) : Entity(renderer) {


    this->loadTexture("/home/axelmpm/terraria/texturas/dogo.png");

}



//TODO DIFERENTES TECLAS DEL TECLADO, BOTONES Y POSICION DEL CURSOR