#include <iostream>

#include "Graphics.h"
#include "Game.h"
#include "EntityManager.h"
#include "LevelBuilder.h"


int main() {

    auto* entityManager = new EntityManager();
    auto* game = new Game(entityManager);
    auto* graphics = new Graphics();
    auto* levelBuilder = new LevelBuilder(entityManager);

    graphics->initSDL(1300,800);
    levelBuilder->build1(graphics->getRenderer());


    while (game->isRunning()){

        graphics->render(entityManager);
        game->update();

    }

    return 0;
}