#pragma once 
#include <iostream> 
#include <string>
 
using namespace std;

class Point {

   public:
      Point();
      Point(double xValue, double yValue);
      string toString();
      double getX();
      double getY();
        
   private:
      double x;
      double y;
        
};