//
// Created by axel on 17/3/20.
//

#include "EntityManager.h"


void EntityManager::createEntity(ENTITIES_ID npc, int x, int y,SDL_Renderer* renderer) {


    switch (npc){

        case DOG:{

            Player* player = new Player(renderer);

            playersList.push_back(player);
            entitiesList.push_back(player);
            animatedEntitiesList.push_back(player);
            break;

        }
        case SKELETON:
            break;
        case ZOMBIE:
            break;
        case HUMAN:
            break;
    }

}

void EntityManager::playerUp() {

    Player* player = playersList.at(0);

    player->moveUp();

}

void EntityManager::playerDown() {

    Player* player = playersList.at(0);

    player->moveDown();

}

void EntityManager::playerRight() {

    Player* player = playersList.at(0);

    player->moveRight();


}

void EntityManager::playerLeft() {

    Player* player = playersList.at(0);

    player->moveLeft();
}

vector<Entity*> EntityManager::getEntities() {

    return this->entitiesList;
}
