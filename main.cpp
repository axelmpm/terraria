#include <iostream>

#include "Graphics.h"

int main() {

    Graphics * graphics = new Graphics();
    graphics->initSDL(500,500);

    return 0;
}