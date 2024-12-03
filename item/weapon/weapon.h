//
// Created by eds on 12/1/2024.
//

#ifndef WEAPON_H
#define WEAPON_H

#include "../item.h"
#include <iostream>

class player;
class melee;
class long_range;
/*
 * The weapon that the player and monsters will use.
 */
class weapon: public item {
public:
  /*
   * Init a new weapon with the attack point.
   */
  weapon(const int a): ap(a){};

  void benefit_player(player* p) override;
  /*
   * The attack point will be different based on the opponent's weapon.
   */
  virtual int get_ap(weapon* ) const=0;
  /*
   * Check the opponent's weapon type.
   */
  virtual std::string get_weapon_type()=0;
  /*
   * Print the weapon status on the terminal
   */
  virtual void weapon_status()=0;
protected:
 /*
  * The attack point
  */
  int ap;
 /*
  * Store the name of the weapon.
  */
  std::string name;
};



#endif //WEAPON_H
