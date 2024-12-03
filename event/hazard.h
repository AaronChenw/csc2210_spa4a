//
// Created by eds on 12/1/2024.
//

#ifndef HAZARD_H
#define HAZARD_H

#include <iostream>
#include "../event/event.h"

class hazard : public event{
public:
  hazard():event() {};
  // Show @
  void show_on_map() override;
  void interaction(player* p) override;
protected:
};


#endif //HAZARD_H
