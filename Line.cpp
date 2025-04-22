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

    return "Point 1: " + a.toString() + ", Point 2: " + b.toString();

}

double Line::getLength() {

    return sqrt((pow(b.getX() - a.getX(), 2)) + (pow(b.getY() - a.getY(), 2)));
}

double Line::getSlope() {

    return (b.getY() - a.getY()) / (b.getX() - a.getX());
}

bool Line::isParallel(Line l) {

    double error = 0.0000001;

    if(l.getSlope() - getSlope() >= 0 - error && l.getSlope() - getSlope() <= 0 + error) {
        return true;
    }
    
    else {
        return false;
    }
}
