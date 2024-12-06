//
// Created by eds on 12/1/2024.
//

#ifndef ARROW_H
#define ARROW_H
#include "long_range/long_range.h"

/*
 * The long range weapon that the player can use.
 */
class arrow final : public long_range{
public:
  arrow(): long_range(5) {
    name = std::string("arrow");
  };
  ~arrow()override{};
};



#endif //ARROW_H
