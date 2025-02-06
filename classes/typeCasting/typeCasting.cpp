//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: Demo
// Description: cast integers to floating point
//************************************************************************

#include <iostream>
using namespace std;

int main()
{
    // declare local vars
    int testOne = 89;
    int testTwo = 98;
    int testThree = 85;
    float testAverage;
    float testAverage2;

    // calculate the average test score
    testAverage = static_cast<float>(testOne + testTwo + testThree) / 3;
    testAverage2 = (testOne + testTwo + testThree) / 3.0;

    //display the average
    cout << "The average grade for all three tests is: " 
         << testAverage << endl;
    cout << "The average grade for test 2 is : "
         << testAverage2 << endl;

    return 0;
}
