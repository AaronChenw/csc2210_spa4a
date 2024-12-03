//
// Created by eds on 12/1/2024.
//

#ifndef MAGIC_H
#define MAGIC_H

#include "long_range/long_range.h"
/*
 * The lakshmikanta will use teh magic.
 */
class magic final : public long_range{
  public:
  magic():long_range(6) {
    name = std::string("magic");
  };
  ~magic(){};

};



#endif //MAGIC_H
