//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_PLAYER_H
#define TERRARIA_PLAYER_H


#include <SDL_render.h>
#include "Entity.h"
#include "MOVEMENT.h"
#include "Physics.h"

class Player : public Entity {

public:

//METODOS

    Player(int x, int y, SDL_Renderer *renderer);

private:

//ATRIBUTOS
    bool id;
    int playerId;
    int WSPEED = 10;
    int WVERTICAL = 10;
};


#endif //TERRARIA_PLAYER_H
