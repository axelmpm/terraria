//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_GAME_H
#define TERRARIA_GAME_H


#include "EntityManager.h"

class Game {

public:

//METODOS
    Game(EntityManager *entityManager1);

    bool isRunning();
    void update();

private:

//ATRIBUTOS
    bool running = true;

    EntityManager* entityManager = nullptr;
};


#endif //TERRARIA_GAME_H
