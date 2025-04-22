#include <iostream>
#include <assert.h>
#include "Point.h"
#include "Line.h"

void createPoints(); 
void pointString();

int main() 
{
    Point a(1, 1);
    Point b(1, 2);

    Line l(a, b);
    cout<<l.getLength();


    // createPoints();
    // pointString();

    return 0;
}

void createPoints() 
{
    Point p1(0.0, 3.0);
    assert(p1.getX() == 0.0);
    assert(p1.getY() == 3.0);

    Point p2(-2.1, -1.3);
    assert(p2.getX() == -2.1);
    assert(p2.getY() == -1.3);
}

void pointString()
{
    Point p3(-100.4, 56.2);
    assert(p3.toString() == "[X: -100.4, Y: 56.2]");

    Point p4(0.0, 5.5);
    assert(p4.toString() == "[X: 0.0, Y: 5.5]");

    Point p5(211.1, 5612321.2);
    assert(p5.toString() == "[X: 211.1, Y: 5612321.2]");

}

