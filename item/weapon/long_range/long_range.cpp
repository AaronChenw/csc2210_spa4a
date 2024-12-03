//
// Created by eds on 12/1/2024.
//

#include "long_range.h"


void long_range::weapon_status() {
  std::cout << name  << "(long range), Attack Point: " << ap << std::endl;
}

std::string long_range::get_weapon_type() {
  return std::string("long_range");
}

int long_range::get_ap(weapon *w) const {
  int r1 = 0;
  if (w->get_weapon_type() == "melee") {
    r1 = ap;
  }
  if (w->get_weapon_type() == "long_range") {
    r1 = ap / 2;
  }
  return r1;
}
