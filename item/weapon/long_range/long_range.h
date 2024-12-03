//
// Created by eds on 12/1/2024.
//

#ifndef LONG_RANGE_H
#define LONG_RANGE_H
#include "../weapon.h"

/*
 * The attack point of long range weapon will decrease in half if the enemy is also using a long range weapon.
 */
class long_range:public weapon {
public:
  long_range(int a):weapon(a){};
  /* Show as a long range weapon */
  void weapon_status() override;
  /* Return the weapon type. */
  std::string get_weapon_type()override;
  /* Calculate the correct attack point */
  int get_ap(weapon* w) const override;

};



#endif //LONG_RANGE_H
