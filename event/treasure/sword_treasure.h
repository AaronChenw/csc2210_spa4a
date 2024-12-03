//
// Created by eds on 12/1/2024.
//

#ifndef SWORD_TREASURE_H
#define SWORD_TREASURE_H
#include "treasure.h"
#include "../../item/weapon/sword.h"

class sword_treasure final : public treasure{
  public:
  sword_treasure():treasure() {
    its = new sword();
  };
  ~sword_treasure() override {}
  // Unpicked: -
  void show_on_map() override;
  void interaction(player* p) override;
};



#endif //SWORD_TREASURE_H
