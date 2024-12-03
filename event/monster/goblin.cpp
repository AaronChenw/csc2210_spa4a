//
// Created by eds on 11/23/2024.
//

#include "goblin.h"

void goblin::show_on_map() {
  if (this->is_dead()) {
    std::cout << '#';
  }else {
    std::cout << '$';
  }

}

