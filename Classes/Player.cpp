//
// Created by axel on 17/3/20.
//

#include "Player.h"
#include <iostream>
#include <SDL_render.h>

using namespace std;

Player::Player(int x,int y, SDL_Renderer* renderer) : Entity(x,y,renderer) {

    this->loadTexture("/home/axel/terraria/texturas/dogo.png");

}



//TODO DIFERENTES TECLAS DEL TECLADO, BOTONES Y POSICION DEL CURSOR