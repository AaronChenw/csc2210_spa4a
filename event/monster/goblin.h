//
// Created by eds on 11/23/2024.
//

#ifndef GOBLIN_H
#define GOBLIN_H
#include "monster.h"
#include "../../item/weapon/craw.h"


/*
 * Simulate a goblin.
 */
class goblin final : public monster{
public:
  goblin(map* m) : monster("goblin",new craw(),15,m) {
  };
  ~goblin() override {};
  // alive: $
  void show_on_map() override;

};



#endif //GOBLIN_H
