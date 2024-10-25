#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP
#include<tuple>

class GridItem {
    protected:
    std::tuple<int, int> position;
    int width;
    int height;
    public:
    static int itemCount;
    GridItem(int x = 0, int y = 0, int width = 0, int height = 0)  {
        position = std::make_tuple(x,y);
        this -> width = width;
        this -> height = height;
        itemCount++;
    }
    void setCoordinates(int x, int y) {
        position = std::make_tuple(x,y);
    }
    std::tuple<int,int> getCoordinates() {
        return position;
    }
    int getGridWidth() {
        return width;
    }
    int getGridHeight() {
        return height;
    }
    int getActiveGridItemCount() {
        return itemCount;
    }
    virtual ~GridItem(){
        itemCount--;
    }
};
GridItem::itemCount = 0;
#endif