#pragma once 
#include <iostream>
#include "Point.h"
 
using namespace std;

class Line {

    public:
        Line(Point aValue, Point bValue);
        string toString();
        double getLength();
        double getSlope();
        bool isParallel(Line l);
        bool isPointOnLine(Point x);

    private:
      Point a;
      Point b;
        
};