//
// Created by axel on 17/3/20.
//

#include "Player.h"
#include <iostream>
#include <SDL_render.h>

using namespace std;

//CONSTRUCTOR
Player::Player(SDL_Renderer* renderer) : Entity(renderer) {


    this->loadTexture("/home/axel/terraria/texturas/dogo.png");

}

//JUGADOR SE MUEVE A ARRIBA A NIVEL MODELO
void Player::moveUp() {

    this->y += -WVERTICAL;
    ;

}

//JUGADOR SE MUEVE A ABAJO A NIVEL MODELO
void Player::moveDown() {

    this->y += WVERTICAL;
}

//JUGADOR SE MUEVE A LA DERECHA A NIVEL MODELO
void Player::moveRight() {

    this->x += WSPEED;
    this->flip = true;
}


//JUGADOR SE MUEVE A LA IZQUIERDA A NIVEL MODELO
void Player::moveLeft() {

    this->x += -WSPEED;
    this->flip = false;
}



//TODO DIFERENTES TECLAS DEL TECLADO, BOTONES Y POSICION DEL CURSOR