//
// Created by eds on 11/23/2024.
//

#ifndef WALL_H
#define WALL_H
#include "event.h"


class wall :public event{
public:
  wall(): event() {};
  // Show !
  void show_on_map() override;
  bool can_go() override {return false;};
protected:

};



#endif //WALL_H
