//
// Created by eds on 11/23/2024.
//

#include "map.h"
#include <random>

#include "../event/monster/goblin.h"
#include "../event/monster/lakshmikanta.h"
#include "../event/treasure/arrow_treasure.h"
#include "../event/treasure/medicine_treasure.h"
#include "../event/treasure/sword_treasure.h"

/*
 * Generate the map
 */
void map::map_generator() {
  int opt = 0;
  c = new event**[row_num];
  xx = -1;
  yy = -1;
  int sword_num = 0;
  int sword_max = 2;
  int arrow_num = 0;
  int arrow_max = 2;
  int wall_num = 0;
  // int arrow_max = 2;

  std::mt19937 mt(time(nullptr));
  for (int i=0;i< row_num;i++) {
    c[i] = new event*[col_num];
    for (int j = 0; j < col_num; j++) {
      opt = mt() % 8;
      if (opt == 1) {
        c[i][j] = new hazard();
      }else if (opt == 2 && monster_num < col_num) {
        c[i][j] = new lakshmikanta(this);
        monster_num++;
      }else if (opt == 3 && sword_num < sword_max) {
        c[i][j] = new sword_treasure();
        sword_num++;
      }else if (opt == 4) {
        c[i][j] = new medicine_treasure();
      }else if (opt == 5 && monster_num < col_num) {
        c[i][j] = new goblin(this);
        monster_num++;
      } else if (opt == 6 && wall_num < col_num) {
        c[i][j] = new wall();
        wall_num++;
      }else if (opt == 7 && arrow_num < arrow_max) {
        c[i][j] = new arrow_treasure();
        arrow_num++;
      } else {
        c[i][j] = new event();
        if (xx < 0 || yy < 0) {
          xx =  i;
          yy = j;
        }
      }
    }
  }
}

void map::print_map() const {
  for (int i = 0; i < row_num;i++) {
    for (int j = 0; j < col_num;j++) {
      if (j == xx && i == yy) {
        std::cout << '+';
      }else {
        c[i][j]->show_on_map();
      }
    }
    std::cout << std::endl;
  }
}

void map::go_s(player* gg) {
  if (map::is_valid(xx,yy + 1)) {
    yy++;
    (*(*(c+yy)+xx))->interaction(gg);
  }else {
    std::cout << "You can't go south." << std::endl;
  }
}
void map::go_n(player* gg) {
  if (map::is_valid(xx,yy - 1)) {
    yy--;
    (*(*(c+yy)+xx))->interaction(gg);
  }else {
    std::cout << "You can't go north." << std::endl;
  }
}
void map::go_e(player* gg) {
  if (map::is_valid(xx + 1,yy)) {
    xx++;
    (*(*(c+yy)+xx))->interaction(gg);
  }else {
    std::cout << "You can't go east." << std::endl;
  }
}
void map::go_w(player* gg) {
  if (map::is_valid(xx - 1,yy)) {
    xx--;
    (*(*(c+yy)+xx))->interaction(gg);
  } else {
    std::cout << "You can't go west." << std::endl;
  }

}
bool map::is_valid(int x, int y) const{
  return y < row_num && y >= 0 && x < col_num && x >= 0 && (*(*(c+y)+x))->can_go();
}

void map::monster_dies()  {
  monster_num--;
}

int map::get_monster_num() const {
  return monster_num;
}


bool map::is_won() const {
  if (monster_num < 1) {
    std::cout << "You won!." << std::endl;
    return true;
  }else {
    return false;
  }
}