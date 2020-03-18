//
// Created by axel on 17/3/20.
//

#include "Player.h"
#include <iostream>
#include <SDL_render.h>

using namespace std;


// MOVIMIENTOS DEL JUEGADOR

void Player::moveUp() {

    this->y += -WVERTICAL;
    ;

}

void Player::moveDown() {

    this->y += WVERTICAL;
}

void Player::moveRight() {

    this->x += WSPEED;
    this->flip = true;
}

void Player::moveLeft() {

    this->x += -WSPEED;
    this->flip = false;
}

Player::Player(SDL_Renderer* renderer) : Entity(renderer) {


    this->loadTexture("/home/axel/terraria/texturas/dogo.png");

}

//TODO DIFERENTES TECLAS DEL TECLADO, BOTONES Y POSICION DEL CURSOR