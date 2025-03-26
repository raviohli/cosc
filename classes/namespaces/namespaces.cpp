//************************************************************************
// Author: Noel Latsha
// Date: 26 Mar 2025
// Language: C++
// Assignment:
// Description: Get the area of a square and circle using elements from
// a namespace
//************************************************************************
#include <iostream>
using namespace std;


// Global variables
int radius = 5;

//define namespaces
namespace square
{
    double length;
    double width;
    double printArea();
}

namespace circle
{
    double radius;
    double printArea();
}


int main()
{
    // Declare local variables
    int radius;

    //set the length and width of the rectangle
    square::length = 20;
    square::width = 10;
    
    // Display area of square
    cout << "The area of a " << square::length << " by " << square::width
         << " square is " << square::printArea() << endl;

    //set the radii
    radius = 3;
    circle::radius = 2;

    //display the area of 3 circles
    cout << "Local radius: " << radius << endl;
    cout << "Global radius: " << ::radius << endl;
    cout << "NAmespace radius: " << circle::radius << endl;
    cout << "The area of a circle with a radius of " << circle::radius
         << " is " << circle::printArea() << endl;
    return 0;
}

// Function definitions 
//prints area of a square
double square::printArea()
{
    return length * width;
}
// prints area of a circle
double circle::printArea()
{
    return 3.1415926535 * radius * radius;
}