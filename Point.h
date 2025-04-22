#pragma once 
#include <iostream> 
#include <string>
 
using namespace std;

class Point {

    public:
       Point(double xValue, double yValue);
       string toString();
        
    private:
      double x;
      double y;
        
};