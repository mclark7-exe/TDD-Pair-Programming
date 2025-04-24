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
      void setX(double xValue);
      void setY(double yValue);
        
   private:
      string decimalToString(double value);
      double x;
      double y;
        
};