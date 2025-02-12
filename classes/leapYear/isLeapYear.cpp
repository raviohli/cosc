//************************************************************************
// Author: Noel Latsha
// Date: 12 Feb 2025
// Language: C++
// Assignment:
// Description: Check if a year is a leap year
//************************************************************************
//rules
//1. if divisible by 4, go to 2, otherwise go to 5
// 2. if divisible by 100
#include <iostream>
using namespace std;

int main()
{
    //declare local variables
    int year;

    //prompt the user for a year
    cout << "Enter a year: ";
    cin >> year;

    // is year divibile by 4
    /*
    if (year % 4 == 0 && year % 100 != 0)
    {
        // is year divisible by 100
        if (year % 100 == 0 && year % 400 == 0)
        {
            cout << "The year " << year << " is a leap year." << endl;

        }
        else
        {
            cout << "The year " << year << " is not a leap year." << endl;
        }
    }
    */

   if ( (year % 4 == 0 && year % 100 != 0)  ||
        (year % 4 == 0 && year % 400 == 0) )
    {
        cout << "The year " << year << " is a leap year." << endl;
    }       
    else
    {
        cout << "The year " << year << " is not a leap year. " << endl;
    }
    return 0;

}

