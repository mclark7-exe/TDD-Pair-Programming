#include <iostream>
#include <cmath>
#include "Line.h"
#include "Point.h"

using namespace std;

Line::Line() {

    a = Point(0.0, 0.0);
    b = Point(0.0, 0.0);
}

Line::Line(Point aValue, Point bValue) {

    a = aValue;
    b = bValue;

}

void Line::setA(Point aValue) {

    a = aValue;
}

void Line::setB(Point bValue) {

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

bool Line::isPointOnLine(Point x) {

    double error = 0.0000001;

    Line l1(a, x);
    Line l2(x, b);

    if(l1.getLength() + l2.getLength() <= getLength() + error && l1.getLength() + l2.getLength() >= getLength() - error) {

        return true;
    }

    else {

        return false;
    }


}

bool Line::intersects(Line l) {

    double maxValue = max(l.a.getX(), l.b.getX());
    double minValue = min(l.a.getX(), l.b.getX()); 

    if((a.getX() <= maxValue && a.getX() >= minValue) || (b.getX() <= maxValue && b.getX() >= minValue)) {

        double selfMinValue = min(a.getX(), b.getX());
        double selfMaxValue = max(a.getX(), b.getX());
        Line left;
        Line right;

        if(selfMinValue < minValue) {

            left.setA(a);
            left.setB(b);
            right.setA(l.a);
            right.setB(l.b);

        }

        else {

            left.setA(l.a);
            left.setB(l.b);
            right.setA(a);
            right.setB(b);

        }

        

        
    }

    else {

        return false;
    }
}
