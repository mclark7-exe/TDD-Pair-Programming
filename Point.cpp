#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double xValue, double yValue) {

    x = xValue;
    y = yValue;

}

string Point::toString() {

    return "[X: " + to_string(x) + ", Y: " + to_string(y) + "]"; 

} 