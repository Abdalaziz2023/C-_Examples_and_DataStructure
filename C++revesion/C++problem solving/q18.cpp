#include<iostream>
#include<math.h>
using namespace std;
const float PI = 3.14159265;

// function Prototype (Funciton Declaration)
double getArea(double radius);

int main()
{
    double r1 = 1.1,area1;

    area1 = getArea(r1);
    cout<<area1;
}

// Function Definition 
// Return the Area of a circle given its radius

double getArea(double radius){ return round(sqrt(radius) *PI);}