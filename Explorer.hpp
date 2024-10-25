#ifndef EXPLORER_HPP
#define EXPLORER_HPP
#include"GridItem.hpp"
class Explorer: public GridItem {
    protected:
    int stamina;
    public:
    Explorer(int gridWidth, int gridHeight) {
        this-> width = gridWidth;
        this -> height = gridHeight;
        position = std::make_tuple(0,0);
        stamina = 2;
        itemCount++;
    }
    int getStamina() {
        return stamina;
    }
    void jumpPit() {
        if(stamina > 0) {
            stamina--;
        }
    }
    bool move(int xOffset, int yOffset) {
        if(xOffset != yOffset) {
            if(xOffset == 0 || yOffset == 0) {
                if(std::get<0>(position)+xOffset >= 0 && std::get<0>(position)+xOffset <= width) {
                    if(std::get<1>(position)+yOffset >= 0 && std::get<1>(position)+yOffset <= height) { 
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
#endif