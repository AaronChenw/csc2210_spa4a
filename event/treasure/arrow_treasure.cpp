//
// Created by eds on 12/1/2024.
//

#include "arrow_treasure.h"
#include "../../player/player.h"

void arrow_treasure::show_on_map() {
  if (is_picked) {
    std::cout << '#';
  } else {
    std::cout << '=';
  }
}

void arrow_treasure::interaction(player *p) {
  if (is_picked) {
    std::cout<<"You see an empty box. ";
  } else {
    std::cout<<"You open a box and get some arrow. ";
    p->set_weapon(dynamic_cast<weapon *>(this->its));
    is_picked = true;
  }
  std::cout << std::endl;
}
