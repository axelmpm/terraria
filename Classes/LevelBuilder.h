//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_LEVELBUILDER_H
#define TERRARIA_LEVELBUILDER_H


#include "EntityManager.h"

class LevelBuilder {

public:
    LevelBuilder(EntityManager *pManager);

    void build1(SDL_Renderer* renderer);


private:

    EntityManager* entityManager = nullptr;
};


#endif //TERRARIA_LEVELBUILDER_H
