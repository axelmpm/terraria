//
// Created by axel on 17/3/20.
//

#include "LevelBuilder.h"



void LevelBuilder::build1(SDL_Renderer* renderer) {

    entityManager->createEntity(DOG,500,600,renderer);
}

LevelBuilder::LevelBuilder(EntityManager *entityManager1) {

    entityManager = entityManager1;

}
