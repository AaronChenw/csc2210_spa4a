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
