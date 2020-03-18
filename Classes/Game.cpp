//
// Created by axel on 17/3/20.
//

#include <SDL_events.h>
#include "Game.h"

#include <iostream>
using  namespace std;

//CONSTRUCTOR
Game::Game(EntityManager *entityManager1) {

    entityManager = entityManager1;

}

//LEE EVENTOS
void Game::update() {

    SDL_Event event;

    while (SDL_PollEvent(&event) != 0 ) {

        //cout << "agarre un evento" << endl;

        //CERRAR
        if (event.type == SDL_QUIT) {

            running = false;

        }
        //LEER TECLADO
        if (event.type == SDL_KEYDOWN && event.key.repeat == 0)
        {
            switch (event.key.keysym.sym) {

                case SDLK_UP: {
                    entityManager->playerUp();
                    break;
                }
                case SDLK_DOWN: {
                    entityManager->playerDown();
                    break;
                }
                case SDLK_RIGHT:{
                    entityManager->playerRight();
                    break;
                }
                case SDLK_LEFT: {
                    entityManager->playerLeft();
                    break;
                }

            }
        }
    }

    //update all entities physdic / position
}

//BOOL SI ESTA CORRIENDO
bool Game::isRunning() {

    return running;

}
