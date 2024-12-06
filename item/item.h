//
// Created by eds on 12/1/2024.
//

#ifndef ITEM_H
#define ITEM_H
#include <string>


class player;
/*
 * The item that located in the treasure.
 */
class item {
public:

  virtual ~item() = default;
  /*
   * The item will benefit the player ion some way.
   */
  virtual void benefit_player(player* p)=0;
  protected:

};



#endif //ITEM_H

#ifndef MEDICINE_H
#define MEDICINE_H

/*
 * The medicine will gain player's hit point.
 */
class medicine final :public item{
public:
  /*
   *Init the medicine with the gained hit point.
   */
  medicine():eff(40) {};
  ~medicine(){};
  /*The medicine will let the player gain hit point. */
  void benefit_player(player* p) override;

private:
  int eff;
};



#endif //MEDICINE_H
