#include <iostream>
#include <cmath>
#include "Line.h"
#include "Point.h"

using namespace std;

Line::Line(Point aValue, Point bValue) {

    a = aValue;
    b = bValue;

}

string Line::toString() {

    return "";

}

double Line::getLength() {

    return sqrt((pow(b.getX() - a.getX(), 2)) + (pow(b.getY() - a.getY(), 2)));
}

    
