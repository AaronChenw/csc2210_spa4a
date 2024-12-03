//
// Created by eds on 12/1/2024.
//

#ifndef SWORD_H
#define SWORD_H

#include "melee/melee.h"


class long_range;
/*
 * The sword that the player can pick.
 */
class sword final :public melee{
public:
  sword(): melee(6) {
    name = std::string("sword");

  }
protected:
};



#endif //SWORD_H
