//
// Created by eds on 12/1/2024.
//

#ifndef MEDICINE_TREASURE_H
#define MEDICINE_TREASURE_H
#include "treasure.h"
#include "../../item/medicine.h"


class medicine_treasure : public treasure{
public:
  medicine_treasure():treasure() {
    its = new medicine();
  };
  ~medicine_treasure() override {}
  // Unpicked: ^
  void show_on_map() override;
  void interaction(player* p) override;

};



#endif //MEDICINE_TREASURE_H
