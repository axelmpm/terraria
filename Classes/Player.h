//
// Created by axel on 17/3/20.
//

#ifndef TERRARIA_PLAYER_H
#define TERRARIA_PLAYER_H


#include <SDL_render.h>
#include "Entity.h"

class Player : public Entity {

public:

    Player(SDL_Renderer* renderer);

    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();

private:

    bool id;
    int playerId;
    int WSPEED = 10;
    int WVERTICAL = 10;


};


#endif //TERRARIA_PLAYER_H
