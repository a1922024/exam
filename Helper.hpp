#ifndef HELPER_HPP
#define HELPER_HPP
#include<tuple>
#include<cmath>
class Helper {
    public:
    static double absoluteSquaredDistance(std::tuple<int,int> item1, std::tuple<int,int> item2) {
        double xdist = std::get<0>(item1) - std::get<0>(item2);
        double ydist = std::get<1>(item1) - std::get<1>(item2);
        return pow(xdist*xdist + ydist*ydist,2);
    }

};
#endif