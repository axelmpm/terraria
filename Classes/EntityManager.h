//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_ENTITYMANAGER_H
#define TERRARIA_ENTITYMANAGER_H

#include <vector>
#include "Entity.h"
#include "ENTITIES_ID.h"
#include "Player.h"

using namespace std;

class EntityManager {

public:

//METODOS
    void createEntity(ENTITIES_ID npc, int x, int y,SDL_Renderer* renderer);

    vector<Entity*> getEntities();

    Player *getPlayer();

    void updateAllEntities();

private:

//ATRIBUTOS
    vector<Entity*> entitiesList;
    vector<Player*> playersList;
    //vector<Npc*> npcsList;
    vector<Entity*> uaEntitiesList;
    vector<Entity*> animatedEntitiesList;
};


#endif //TERRARIA_ENTITYMANAGER_H
