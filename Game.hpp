#ifndef GAME_HPP
#define GAME_HPP
#include"Interactable.hpp"
#include"Helper.hpp"
#include"Explorer.hpp"
#include<vector>
class Game {
    public:
    Game(int width, int height, std::vector<std::tuple<int,int>> pitCoordinates) {
        Explorer player(width, height);
        

    }

};
#endif