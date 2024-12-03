cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        item/item.cpp
        item/item.h
        player/player.cpp
        player/player.h
        menu/menu.h
        menu/main_menu.cpp
        menu/main_menu.h
        menu/game_menu.cpp
        menu/game_menu.h
        map/map.cpp
        map/map.h
        event/event.cpp
        event/event.h
        event/hazard.cpp
        event/hazard.h
        event/wall.cpp
        event/wall.h
        event/treasure/treasure.cpp
        event/treasure/treasure.h
        alive/alive.cpp
        alive/alive.h
        event/treasure/medicine_treasure.cpp
        event/treasure/medicine_treasure.h
        event/treasure/sword_treasure.cpp
        event/treasure/sword_treasure.h
        event/treasure/arrow_treasure.cpp
        event/treasure/arrow_treasure.h
        item/weapon/weapon.cpp
        item/weapon/weapon.h
        item/weapon/sword.h
        item/medicine.cpp
        item/medicine.h
        item/weapon/arrow.h
        item/weapon/melee/melee.cpp
        item/weapon/melee/melee.h
        item/weapon/long_range/long_range.cpp
        item/weapon/long_range/long_range.h
        item/weapon/magic.h
        item/weapon/magic.h
        item/weapon/craw.h
        event/monster/goblin.cpp
        event/monster/lakshmikanta.cpp
        event/monster/monster.cpp)
