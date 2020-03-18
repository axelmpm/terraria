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

    handleEvents();
    entityManager->updateAllEntities();
}

//BOOL SI ESTA CORRIENDO
bool Game::isRunning() {

    return running;

}

void Game::handleEvents() {
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
                    entityManager->getPlayer()->changeMovementTo(UP);
                    break;
                }
                case SDLK_DOWN: {
                    entityManager->getPlayer()->changeMovementTo(DOWN);
                    break;
                }
                case SDLK_RIGHT:{
                    entityManager->getPlayer()->changeMovementTo(RIGHT);
                    break;
                }
                case SDLK_LEFT: {
                    entityManager->getPlayer()->changeMovementTo(LEFT);
                    break;
                }
            }
        }

        if (event.type == SDL_KEYUP && event.key.repeat == 0)
        {
            switch (event.key.keysym.sym) {

                case SDLK_UP: {
                    entityManager->getPlayer()->changeMovementTo(END_UP);
                    break;
                }
                case SDLK_DOWN: {
                    entityManager->getPlayer()->changeMovementTo(END_DOWN);
                    break;
                }
                case SDLK_RIGHT:{
                    entityManager->getPlayer()->changeMovementTo(END_RIGHT);
                    break;
                }
                case SDLK_LEFT: {
                    entityManager->getPlayer()->changeMovementTo(END_LEFT);
                    break;
                }
            }
        }
    }
}
