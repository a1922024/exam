#ifndef HELPER_H
#define HELPER_H
#include<tuple>
#include<cmath>
class Helper {
    public:
    static double absoluteSquaredDistance(std::tuple<int,int> item1, std::tuple<int,int> item2) {
        int xdist = std::get<0>(item1) - std::get<0>(item2);
        int ydist = std::get<1>(item1) - std::get<1>(item2);
        return sqrt(xdist*xdist + ydist*ydist);
    }

};
#endif