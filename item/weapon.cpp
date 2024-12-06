//
// Created by eds on 12/1/2024.
//

#include "weapon.h"
#include "../player/player.h"
void weapon::benefit_player(player* p) {
  p->set_weapon(this);
}
void melee::weapon_status() {
  std::cout << name  << "(melee), Attack Point: " << ap << std::endl;
}

std::string melee::get_weapon_type() {
  return std::string("melee");
}

int melee::get_ap(weapon *w) const {
  if (w == nullptr) {
    std::cout << "No weapon equiped!" << std::endl;
    return 0;
  }
  int r1 = 0;
  if (w->get_weapon_type() == "melee") {
    r1 = ap;
  }
  return r1;
}


void long_range::weapon_status() {
  std::cout << name  << "(long range), Attack Point: " << ap << std::endl;
}

std::string long_range::get_weapon_type() {
  return std::string("long_range");
}

int long_range::get_ap(weapon *w) const {
  if (w == nullptr) {
    std::cout << "No weapon equiped!" << std::endl;
    return 0;
  }
  int r1 = 0;
  if (w->get_weapon_type() == "melee") {
    r1 = ap;
  }
  if (w->get_weapon_type() == "long_range") {
    r1 = ap / 2;
  }
  return r1;
}

