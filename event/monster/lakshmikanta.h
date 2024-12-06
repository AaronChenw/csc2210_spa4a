//
// Created by eds on 11/23/2024.
//

#ifndef LAKSHMIKANTA_H
#define LAKSHMIKANTA_H
#include "monster.h"

#include "../../item/weapon/magic.h"

class lakshmikanta final : public monster{
public:
  lakshmikanta(map* p): monster("lakshmikanta",new magic(),20,p) {
  }
  ~lakshmikanta()override {};
  // alive: ~
  void show_on_map() override;

};



#endif //LAKSHMIKANTA_H
