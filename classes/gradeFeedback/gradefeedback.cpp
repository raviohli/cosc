//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description: Give feedback based on the letter grade
//************************************************************************

#include <iostream>
using namespace std;

int main()
{
    //declare local var
    char grade = 'B';

    // switch on the letter grade and give feedback
    switch(grade)
    {
        case 'A':
            cout << "Excellent!\n";
            break;
        case 'B':
        case 'C':
            cout << "Well done!\n";
            break;
        case 'D':
            cout << "You passed\n";
            break;
        case 'F':
            cout << "better try again\n";
            break;
        default:
            cout << "Invalid grade\n";
            break;
    }

    cout << "Your grade is " << grade << endl;
    return 0;
}

