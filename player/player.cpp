//
// Created by eds on 12/1/2024.
//

#include "player.h"

#include "../item/weapon/weapon.h"


void player::set_weapon(weapon* wp) {
  if (w != nullptr) {
    delete w;
  }
  w = wp;
}

weapon * player::get_weapon() const {
  return w;
}

void player::print_status() const {
  std::cout << name << ", HitPoint: " << hit_point << std::endl;
  std::cout << "Weapon: ";
  if (w != nullptr) {
    w->weapon_status();
  }else {
    std::cout << "None" << std::endl;
  }
}

bool player::is_dead() const {
  if (alive::is_dead()) {
    std::cout << "You are dead! You lose! " << std::endl;
    return true;
  }

  return false;
}
