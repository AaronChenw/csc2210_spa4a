//
// Created by eds on 11/23/2024.
//

#include "event.h"

// Default block
void event::show_on_map(){
  std::cout << '#';
}

void event::interaction(player *p) {
  std::cout << "You smells danger!" << std::endl;
}