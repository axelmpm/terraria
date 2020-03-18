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

    void createEntity(ENTITIES_ID npc, int x, int y,SDL_Renderer* renderer);

    void playerUp();
    void playerDown();
    void playerRight();
    void playerLeft();

    vector<Entity*> getEntities();

private:

    vector<Entity*> entitiesList;
    vector<Player*> playersList;
    //vector<Npc*> npcsList;
    vector<Entity*> uaEntitiesList;
    vector<Entity*> animatedEntitiesList;
};


#endif //TERRARIA_ENTITYMANAGER_H
