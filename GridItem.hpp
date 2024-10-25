#ifndef GRIDITEM_H
#define GRIDITEM_H
#include<tuple>

class GridItem {
    protected:
    static int itemCount;
    std::tuple<int, int> position;
    int width;
    int height;
    public:
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
#endif