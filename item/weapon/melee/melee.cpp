//
// Created by eds on 12/1/2024.
//

#include "melee.h"

void melee::weapon_status() {
  std::cout << name  << "(melee), Attack Point: " << ap << std::endl;
}

std::string melee::get_weapon_type() {
  return std::string("melee");
}

int melee::get_ap(weapon *w) const {
  int r1 = 0;
  if (w->get_weapon_type() == "melee") {
    r1 = ap;
  }
  return r1;
}
