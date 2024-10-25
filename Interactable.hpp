#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP
#include"GridItem.hpp"
#include"Explorer.hpp"
class Interactable: public GridItem {
    protected:
    static int interactableCount;
    enum InteractableType {
        EXIT,
        PIT
    };
    public:
    Interactable(int x = 0, int y = 0, int width = 0, int height = 0) {
        position = std::make_tuple(x,y);
        this -> width = width;
        this -> height = height;
        interactableCount++;
    } 
    virtual bool interact(Explorer* player) = 0;
    virtual InteractableType getType() = 0;
    int getActiveInteractableCount() {
        return interactableCount;
    }
    ~Interactable() {
        interactableCount--;
        itemCount--;
    }

};
#endif