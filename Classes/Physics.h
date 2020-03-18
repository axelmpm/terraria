//
// Created by axelmpm on 18/3/20.
//

#ifndef TERRARIA_PHYSICS_H
#define TERRARIA_PHYSICS_H


#include "MOVEMENT.h"

class Physics {

public:
    Physics();
    void update(int* x, int* y);
    void changeMovementTo(MOVEMENT movement);

    int speedX;
    int speedY;
    int accelerationX;
    int accelerationY;

    bool up = false;
    bool down = false;
    bool right = false;
    bool left = false;

    int GRAVITY = 9;
    int WALKING_SPEED = 8;
};


#endif //TERRARIA_PHYSICS_H
