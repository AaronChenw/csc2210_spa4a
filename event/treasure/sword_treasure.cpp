//
// Created by eds on 12/1/2024.
//

#include "sword_treasure.h"

#include "../../player/player.h"

void sword_treasure::show_on_map() {
  if (is_picked) {
    std::cout<<"#";
  }else {
    std::cout<<"-";
  }

}

void sword_treasure::interaction(player *p) {
  if (is_picked) {
    std::cout<<"You see an empty box. ";
  } else {
    std::cout<<"You open a box and get a sword. ";
    p->set_weapon(dynamic_cast<weapon *>(this->its));
    is_picked = true;
  }
  std::cout << std::endl;
}
