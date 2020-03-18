//
// Created by axel on 17/3/20.
//

#include "EntityManager.h"

//CREA UNA ENTIDAD, REQUIERE EL TIPO DE ENTIDAD, POSICION X & Y, RENDERER
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

//JUGADOR SE MEUVE ARRIBA
void EntityManager::playerUp() {

    Player* player = playersList.at(0);

    player->moveUp();

}

//JUGADOR SE MUEVE A ABAJO
void EntityManager::playerDown() {

    Player* player = playersList.at(0);

    player->moveDown();

}

//JUGADOR SE MUEVE A LA DERECHA
void EntityManager::playerRight() {

    Player* player = playersList.at(0);

    player->moveRight();


}

//JUGADOR SE MUEVE A LA IZQUIERDA
void EntityManager::playerLeft() {

    Player* player = playersList.at(0);

    player->moveLeft();
}

//OBTIENE LA LISTA DE ENTIDADES
vector<Entity*> EntityManager::getEntities() {

    return this->entitiesList;
}
