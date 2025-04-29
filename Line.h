#pragma once 
#include <iostream>
#include "Point.h"
 
using namespace std;

class Line {

    public:
        Line();
        Line(Point aValue, Point bValue);
        void setA(Point aValue);
        void setB(Point bValue);
        string toString();
        double getLength();
        double getSlope();
        bool isParallel(Line l);
        bool isPointOnLine(Point x);
        bool intersects(Line l);

    private:
      double evaluate(double xValue);
      Point a;
      Point b;
        
};