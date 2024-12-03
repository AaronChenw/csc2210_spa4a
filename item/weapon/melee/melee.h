//
// Created by eds on 12/1/2024.
//

#ifndef MELEE_H
#define MELEE_H
#include "../weapon.h"


/*
 * Melee weapons can't attack the enemy that holds a long range weapon.
 */
class melee:public weapon{
public:
  melee(const int a):weapon(a){};
  /* Show as a melee weapon */
  void weapon_status() override;
  /* Return the weapon typeas melee. */
  std::string get_weapon_type()override;
  /* Calculate the correct attack point */
  int get_ap(weapon* w) const override;

};



#endif //MELEE_H
