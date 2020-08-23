//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"

int main() {
    Game game;
    game.setName("Call of Duty: Black Ops 4 (PS4)");
    game.setPrice(24.66);
    game.setTax(0.13);
    std::cout << game.toString() << std::endl;

    game.save("game.txt");

    return 0;
}