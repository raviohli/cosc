//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: demo
// Description: Learning input
//************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare local variables
    int age;
    string name;
    float myFloatingPoint;
    int intOne, intTwo, intThree;

    // get an integer (age) from the user
    cout << "Enter your age: ";
    cin >> age;

    //get a string (name) from the user
    cout << "Enter your name: ";
    cin >> name;

    // Display the name and age
    cout << "Your name is: " << name << " and you are " 
         << age << " years old." << endl;

    // get and display a floating point number
    cout << "Enter a floating point number: ";
    cin >> myFloatingPoint;
    cout << "You entered the floating point number: " << myFloatingPoint 
         << endl;

    // get multiple inputs on one line
    cout << "Enter three integers: ";
    cin >> intOne >> intTwo >> intThree;

    // display the Three integers
    cout << "You entered the following integers: " << intOne << ", "
         << intTwo << ", " << intThree << endl;

    return 0;
}