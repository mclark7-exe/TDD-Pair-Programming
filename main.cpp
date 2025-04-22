#include <iostream>
#include <assert.h>
#include "Point.h"
#include "Line.h"

void createPoints(); 

int main() 
{
    Point p(3.0, 2.0);
    cout<<p.toString()<<endl;

    createPoints();

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

