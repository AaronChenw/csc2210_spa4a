//
// Created by eds on 12/1/2024.
//
#include "../player/player.h"
#include "medicine.h"

void medicine::benefit_player(player *p) {
  p->take_medicine(eff);
  std::cout << "You eat the medicine and gain " << eff << " hit point. " << std::endl;
}
