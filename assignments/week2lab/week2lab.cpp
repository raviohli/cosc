//************************************************************************
// Author: Noel Latsha
// Date: 5 Feb 2025
// Language: C++
// Assignment: Module 1 lab - Temperature Conversion
// Description: Convert a fahrenheit temp to celsius
//************************************************************************
#include <iostream>

using namespace std;

int main()
{
    // Declare local variables
    float tempF, tempC;

    // Prompt the user for temp in F, store and print
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> tempF;
    cout << "The temperature in Fahrenheit is: " << tempF << endl;

    // Perform the math using the conversion formula
    tempC = (tempF - 32) * 5.0 / 9.0;
    cout << "The temperature in celsius is: " << tempC;
    return 0;
}




