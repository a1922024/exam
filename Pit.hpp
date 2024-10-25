#ifndef PIT_HPP
#define PIT_HPP
#include"Interactable.hpp"
#include"Helper.hpp"
#include"Explorer.hpp"
class Pit: public Interactable {
    protected:
    bool covered;
    public:
    Pit(int x = 0, int y = 0, int width = 0, int height = 0) {
        position = std::make_tuple(x,y);
        this -> width = width;
        this -> height = height;
        interactableCount++;
        itemCount--;
    }
    bool interact(Explorer* player) {
        if(Helper::absoluteSquaredDistance(position, player->getCoordinates()) == 0 && covered == false) {
            player-> jumpPit();
            covered = true;
            if(player->getStamina() == 0) {
                return true;
            }
            return false;
        }
    }
    InteractableType getType() {
        return PIT;
    }
    ~Pit() {
        interactableCount--;
        itemCount--;
    }
};
#endif