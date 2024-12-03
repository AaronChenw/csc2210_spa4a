//
// Created by eds on 11/23/2024.
//

#ifndef EVENT_H
#define EVENT_H

#include <iostream>

class player;
class event {
public:
  virtual ~event() = default;
  /*
   * Different event will show different notation on the map. For this empty one, show #
   */
  virtual void show_on_map();
  // The player can't pass the wall
  virtual bool can_go() {return true;};
  // default contains nothing but a sentence.
  virtual void interaction(player* p);
protected:

};




#endif //EVENT_H
