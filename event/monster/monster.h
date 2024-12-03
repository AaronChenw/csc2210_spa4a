//
// Created by eds on 11/23/2024.
//

#ifndef MONSTER_H
#define MONSTER_H
#include <utility>

#include "../event.h"
#include "../../alive/alive.h"
#include "../../menu/menu.h"


class map;

class monster : public event, public alive{
public:
  monster(const std::string& name,weapon* w,int hp,map* m):alive(name,hp),w{w},ma{m} {};
  ~monster() override {}
  bool can_go() override{return true;};
  void interaction(player* p) override;
  weapon* get_weapon() const override;

protected:
  weapon* w;
  map* ma;
private:
  static void menu_describe();

};

#endif //MONSTER_H
