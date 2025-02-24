//************************************************************************
// Author: Noel Latsha
// Date: 05 Feb 2025
// Language: C++
// Assignment: Semester Project A - Section 1
// Description: Semester project
// Week 2: Welcome Header
// Week 4: Ask for inputs for user requests and perform actions depending
// on the request
//************************************************************************


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // ****** Variable Section *********
    string firstName; // Stores the user's firstname
    string lastName; // stores the user's last name

    int userCalcRequest; // Stores the user's number request
    // in the calculation section
    float userCalcOutput; // Stores the numeric output for the user sections
    float calcInput; // Stores calculation input from user
    float numToExpound; // stores the base "x" for the x to y power case
    float numExponent; // the exponent "y" for x to y power

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

    // Output a welcome message to the user + separator line
    cout << "Welcome to my course project " << firstName << "!\n";
    cout << "****************************************************\n";







    // ***** Calculations section  (WEEK 4) *****

    // Prompt the user for each option (0-3) and store in userRequest
    cout << "Enter 1 to calculate square root\n"
         << "Enter 2 to enter X power to Y power\n"
         << "Enter 3 to convert numerical GPA to a letter grade\n"
         << "Enter 0 to exit\n"
         << "Enter your request: ";
    cin >> userCalcRequest;

    // Switch statement to handle the user's request
    switch (userCalcRequest)
    {
        case 0: // End program case
            cout << "Program Terminated";
            return 0;
            break;
        

        case 1: // Square root case
            cout << "Enter a number to calculate the square root: ";
            cin >> calcInput; // Store input
            userCalcOutput = sqrt(calcInput); // Store sqrt in userOutput
            // Display the result
            cout << "The square root of " << calcInput
                 << " is " << userCalcOutput << endl;
            break;
        

        case 2: // X to Y power case
            cout << "Enter a number X to raise to the Y power\n";
            cout << "Enter X: ";
            cin >> numToExpound;
            cout << "Enter Y: ";
            cin >> numExponent;
            userCalcOutput = pow (numToExpound, numExponent);
            cout << numToExpound << " to the power of " << numExponent
                 << " is " << userCalcOutput << endl;
            break;
        
        case 3: // convert numerical GPA to letter Grade
            // Prompt the user for their numerical GPA
            cout << "Enter your numerical GPA: ";
            cin >> calcInput;
            if (calcInput >= 3.7) // 3.7-4
                cout << "Your grade is an A\n";

            else if (calcInput >= 2.7) // 2.7-3.69
                cout << "Your grade is a B\n";

            else if (calcInput >= 1.7) // 1.7-2.69
                cout << "Your grade is a C\n";

            else if (calcInput >= 1.0) // 1.0-1.69
                cout << "Your grade is a D\n";

            else
                cout << "You got an F.\n"; // 0.99 or lower or else
            break;
            // end of case 3
        default:
            cout << "You didn't pick a valid number\n"
                 << "Terminating Program";
            break;
    }

    return 0;
}