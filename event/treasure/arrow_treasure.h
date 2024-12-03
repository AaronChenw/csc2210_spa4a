//
// Created by eds on 12/1/2024.
//

#ifndef ARROW_TREASURE_H
#define ARROW_TREASURE_H
#include "treasure.h"

#include "../../item/weapon/arrow.h"



class arrow_treasure: public treasure {
public:
  arrow_treasure() {
    its = new arrow();
  };
  ~arrow_treasure() override{};
  // Unpicked: =
  void show_on_map() override;
  void interaction(player* p) override;

};



#endif //ARROW_TREASURE_H