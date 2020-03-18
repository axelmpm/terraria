//
// Created by axel on 17/3/20.
//

#include "EntityManager.h"

//CREA UNA ENTIDAD, REQUIERE EL TIPO DE ENTIDAD, POSICION X & Y, RENDERER
void EntityManager::createEntity(ENTITIES_ID npc, int x, int y,SDL_Renderer* renderer) {


    switch (npc){

        case DOG:{

            Player* player = new Player(x,y,renderer);

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

//OBTIENE LA LISTA DE ENTIDADES
vector<Entity*> EntityManager::getEntities() {

    return this->entitiesList;
}

Player *EntityManager::getPlayer() {
    return playersList.at(0);
}

void EntityManager::updateAllEntities() {

    for (auto entity : entitiesList){
        entity->update();
    }
}
