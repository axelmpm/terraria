//
// Created by axelmpm on 18/3/20.
//

#include "Physics.h"

void Physics::update(int* x, int* y) {

    speedX += accelerationX;
    speedY += accelerationY;

    *x += speedX;
    *y += speedY;
}

void Physics::changeMovementTo(MOVEMENT movement) {

    switch (movement){

        case UP:
            up = true;
            speedY = -WALKING_SPEED;
            break;

        case DOWN:
            down = true;
            speedY = WALKING_SPEED;
            break;

        case LEFT:
            left = true;
            speedX = -WALKING_SPEED;
            break;

        case RIGHT:
            right = true;
            speedX = WALKING_SPEED;
            break;

        case END_UP:
            up = false;
            if(down){
                speedY = WALKING_SPEED;
            }
            else{
                speedY = 0;
            }
            break;

        case END_DOWN:
            down = false;
            if(up){
                speedY = -WALKING_SPEED;
            }
            else{
                speedY = 0;
            }
            break;

        case END_LEFT:
            left = false;
            if(right){
                speedX = WALKING_SPEED;
            }
            else{
                speedX = 0;
            }
            break;

        case END_RIGHT:
            right = false;
            if(left){
                speedX = -WALKING_SPEED;
            }
            else{
                speedX = 0;
            }
            break;

        case STILL:
            speedX = 0;
            speedY = 0;
            accelerationX = 0;
            accelerationY = 0;
            break;
    }
}
