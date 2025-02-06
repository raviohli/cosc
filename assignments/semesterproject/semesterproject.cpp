//************************************************************************
// Author: Noel Latsha
// Date: 05 Feb 2025
// Language: C++
// Assignment: Semester Project A - Section 1
// Description:
//************************************************************************


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ****** Variable Section *********
    string firstName;
    string lastName;

    // ****** Welcome Section **********
    // Output welcome header
    cout << "******************************************" << endl
         << "*      Programming 1 Course Project      *" << endl
         << "******************************************" << endl;

    // Prompt user for first name and store
    cout << "Please enter your first name: ";
    cin >> firstName;

    // Prompt user for last name and store
    cout << "Please enter your last name: ";
    cin >> lastName;

    // Output a welcome message to the user
    cout << "Welcome to my course project " << firstName << "!\n";

    return 0;
}