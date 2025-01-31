//************************************************************************
// Author: Noel Latsha
// Date: 30 Jan 2025
// Language: C++
// Assignment: demo
// Description: Manipulating strings
//************************************************************************

#include <iostream>
// #include <string> only needed for some compilers
using namespace std;

int main()
{
    // Declare local variables
    string string1 = "Hello Class!";
    string string2 = "Welcome to C++ programming."; 
    string string3;
    int stringLength;

    // print the strings
    cout << string1 << endl;
    cout << string2 << endl;

    // find the length of a string
    cout << "The length of string 1 is: " << string1.length() << endl;
    cout << "The length of string 2 is: " << string2.length() << endl;

    // find the character at an index
    cout << "The character at index 7 is: " << string1.at(7) << endl;
    // alternative method
    cout << "The character at index 8 is: " << string1[8] << endl;

    // change the value of a character
    string1[6] = 'c';
    cout << string1 << endl;

    // store the value of the string length
    stringLength = string2.length();
    cout << "The length of string 2 is: " << stringLength << endl;

    // concatenate strings
    cout <<  string1 + " " + string2 << endl;
    string3 = string1 + "\n" + string2;
    cout << string3 << endl;

    return 0;
}