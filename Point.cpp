#include <iostream>
#include "Point.h"
#include <string>

using namespace std;

Point::Point() {

    x = 0.0;
    y = 0.0;
}

Point::Point(double xValue, double yValue) {

    x = xValue;
    y = yValue;

}

string Point::toString() {

    string xString = to_string(x);
    string yString = to_string(y);
    int xDec = xString.find_first_of('.');
    int yDec = yString.find_first_of('.');

    xString = xString.substr(0, xDec+2);
    yString = yString.substr(0, yDec+2);



    return "[X: " + xString + ", Y: " + yString + "]"; 

} 

double Point::getX() 
{
    return x;
}

double Point::getY()
{
    return y;
}