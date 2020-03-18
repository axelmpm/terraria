//
// Created by axel on 18/3/20.
//

#ifndef TERRARIA_PROP_H
#define TERRARIA_PROP_H


#include <string>

class Prop {




    bool breakable;
    bool pickupable;
    bool placeable;
    int propId;
    int breakableHp;
    int damage;
    int miningLevel;
    std::string miningToolType;

};


#endif //TERRARIA_PROP_H
