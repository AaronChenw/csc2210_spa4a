//
// Created by eds on 12/1/2024.
//

#ifndef CRAW_H
#define CRAW_H
#include "melee/melee.h"

/*
 * Goblins' weapon.
 */
class craw final :public melee{
  public:
  craw():melee(4) {
    name = std::string("craw");
  };
  ~craw(){};
};



#endif //CRAW_H
