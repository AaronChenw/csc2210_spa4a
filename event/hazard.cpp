//
// Created by eds on 12/1/2024.
//

#include "hazard.h"

#include "../player/player.h"

// hazard &
void hazard::show_on_map(){
  std::cout << '@';
}

void hazard::interaction(player *p) {
  std::cout << "You fall into a hazard!" << std::endl;
  p->get_hit(10);
}