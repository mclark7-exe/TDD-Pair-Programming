#include <iostream>
#include <assert.h>
#include "Point.h"
#include "Line.h"

void createPoints(); 
void pointString();
void checkLength();
void lineString();
void lineSlope();

int main() 
{

    //TO DO:
    //FIX POINT toString() and test LINE isParallel()
    Point a(1, 1);
    Point b(1, 2);

    Line l(a, b);
    cout<<l.getLength();

    // createPoints();
    // pointString();
    checkLength();
    lineString();
    lineSlope();

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

void checkLength() 
{
    double error = 0.0000001;

    Point p6(1, 1);
    Point p7(1, 2);

    Line l1(p6, p7);

    assert(l1.getLength() <= 1 + error && l1.getLength() >= 1 - error);

    Point p8(2, 2);

    Line l2(p6, p8);

    assert(l2.getLength() <= 1.41421356237 + error && l2.getLength() >= 1.41421356237 - error);

    Point p10(-1, -1);
    Point p11(0, 0);

    Line l3(p10, p11);

    assert(l3.getLength() <= 1.41421356237 + error && l3.getLength() >= 1.41421356237 - error);


}

void lineString()
{
    Point p12(1, 1);
    Point p13(0, -1);

    Line l4(p12, p13);

    assert(l4.toString() == "Point 1: [X: 1.0, Y: 1.0], Point 2: [X: 0.0, Y: -1.0]");

}

void lineSlope() {

    double error = 0.0000001;

    Point p14(2, 4);
    Point p15(1, 2);

    Line l5(p14, p15);

    assert(l5.getSlope() <= 2 + error && l5.getSlope() >= 2 - error);
    
}


