//
// Created by eds on 12/1/2024.
//

#include "medicine_treasure.h"

#include "../../player/player.h"

void medicine_treasure::show_on_map() {
  if (is_picked) {
    std::cout << '#';
  } else {
    std::cout << '^';
  }
}

void medicine_treasure::interaction(player *p) {
  if (is_picked) {
    std::cout<<"You see an empty box. ";
  } else {
    std::cout<<"You find and take some medicine. ";
    dynamic_cast<medicine *>(this->its)->benefit_player(p);
    is_picked = true;
  }
  std::cout << std::endl;
}
