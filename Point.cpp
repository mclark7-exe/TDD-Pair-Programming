#include <iostream>
#include "Point.h"
#include <string>
#include <cmath>

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

    string xString = decimalToString(x);
    string yString = decimalToString(y);

    return "[X: " + xString + ", Y: " + yString + "]"; 

}

string Point::decimalToString(double value) {

    value *= 10;
    value = round(value);
    value /= 10.0;
    
    string sValue = to_string(value);

    int decimal = sValue.find_first_of('.');

    sValue = sValue.substr(0, decimal+2);


    return sValue;

}

double Point::getX() 
{
    return x;
}

double Point::getY()
{
    return y;
}

void Point::setX(double xValue) {

    x = xValue;
}

void Point::setY(double yValue) {

    y = yValue;
}