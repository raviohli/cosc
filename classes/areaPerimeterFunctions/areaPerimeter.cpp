#include <iostream>
using namespace std;


//This program will find the area and perimeter of circles and rectangles

// function prototypes
double area(int);
int area(int, int);
double area(double, double);

double perimeter(int);
int perimeter(int, int);
double perimeter(double, double);

// global variables
const double PI = 3.1215926535;


int main()
{
    // declare local variables
    int base1 = 6, height1 = 8;
    double base2 = 2.5, height2 = 1.8;
    int radius1 = 3;

    // display the area/perimeter with integer base and height
    cout << "Passing base and height as integers\n";
    cout << "Area: " << area(base1, height1) << "\n";
    cout << "Perimeter: " << perimeter(base1, height1);
    cout << endl;

    // display the area with double base and hieght
    cout << "Passing base and height as integers\n";
    cout << "Area: " << area(base2, height2) << "\n";
    cout << "Perimeter: " << perimeter(base2, height2);
    cout << endl;

    // display the area/perimeter of circle with integer radius
        cout << "Passing base and height as integers\n";
    cout << "Area: " << area(radius1) << "\n";
    cout << "Perimeter: " << perimeter(radius1);
    cout << endl;
    return 0;
}

// function definitions

// function to calculate and return the area of a rectangle
// base don integer values passed in.
int area(int base, int height)
{
    return base * height;
}
// functio nto calculate and return area of a rectangle based on double vals passed in
double area(double base, double height)
{
    return base * height;
}
// calculate and return the perimeter of a rectangle
// based on integer values passed in
int perimeter(int base, int height)
{
    return 2 * (base + height);
}


// calculates perimeter based on double params passed in
double perimeter(double base, double height)
{
    return 2 * (base + height);
}
// calcs area of circle given radius
double area(int radius)
{
    return PI * radius * radius;
}
// function to calculate perimeter of a circle given radius
double perimeter(int radius)
{
    return 2 * PI * radius;
}

