//
// Created by eds on 12/1/2024.
//

#ifndef MEDICINE_H
#define MEDICINE_H
#include "item.h"


/*
 * The medicine will gain player's hhit point.
 */
class medicine final :public item{
public:
  /*
   *Init the medicine with the gained hit point.
   */
  medicine():eff(100) {};
  ~medicine(){};
  /*The medicine will let the player gain hit point. */
  void benefit_player(player* p) override;

private:
  int eff;
};



#endif //MEDICINE_H
