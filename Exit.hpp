#ifndef EXIT_HPP
#define EXIT_HPP
#include"Interactable.hpp"
#include"Explorer.hpp"
#include"Helper.hpp"
class Exit: public Interactable {
    public:
    Exit(int width, int height) {
        this -> width = width;
        this -> height = height;
        interactableCount++;
        itemCount++;
    }
    bool interact(Explorer* player) {
        if(Helper::absoluteSquaredDistance(position, player->getCoordinates()) == 0) {
            return true;
        }
        return false;
    }
    InteractableType getType() {
        return EXIT;
    }
    ~Exit() {
        interactableCount--;
        itemCount--;
    }
};
#endif