//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: demo
// Description: more with user input
//************************************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare local varibles
    string firstName, lastName;
    string phoneNumber;
    char myChar;

    // Display a program header
    cout << "Demo of cin feature\n\n";

    //get the name and phone from the user
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;

    cout << "Enter your phone number: ";
    cin >> phoneNumber;

    // Display the users name and number
    cout << "You entered:\n"
         << firstName << " " << lastName << endl
         << phoneNumber << endl;

    // Clear the newline character from the input stream
    cin.ignore();

    // get a character from the user
    cout << "press a key: " << endl;
    myChar = cin.get();

    // Display the character
    cout << "You pressed: " << myChar << endl << endl;
    return 0;
}