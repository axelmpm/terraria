//
// Created by axel on 17/3/20.
//

#include "LevelBuilder.h"


//CONSTRUCTOR
LevelBuilder::LevelBuilder(EntityManager *entityManager1) {

    entityManager = entityManager1;

}

//BUILDEA EL PRIMER NIVEL, ACA LE PASO LO QUE QUIERO QUE ESTE A NIVEL MODELO
void LevelBuilder::build1(SDL_Renderer* renderer) {

    entityManager->createEntity(DOG,500,600,renderer);
}
