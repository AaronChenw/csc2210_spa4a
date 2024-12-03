//
// Created by eds on 12/1/2024.
//

#include "weapon.h"
#include "../../player/player.h"
void weapon::benefit_player(player* p) {
  p->set_weapon(this);
}
