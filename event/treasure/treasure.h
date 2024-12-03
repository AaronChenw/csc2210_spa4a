//
// Created by eds on 11/23/2024.
//

#ifndef TREASURE_H
#define TREASURE_H
#include "../event.h"
#include "../../item/item.h"


// class item;
class player;
class treasure : public event{
public:
  bool can_go() override;
protected:
  item* its = nullptr;
  bool is_picked = false;
};

#endif //TREASURE_H
