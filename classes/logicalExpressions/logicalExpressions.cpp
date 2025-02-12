//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description: check to see if a person is eligible for a loan
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    //declare local variables
    int age = 18;
    int salary = 40000;

    //if the person is old enough (18) and has a high enough salary
    // (50000) then they are eligible for a loan

    if (age >= 18 && salary >= 50000)
    {
        cout << "Eligible for loan\n";
    }
    else
    {
        cout << "Not eligible for loan\n";
    }
    return 0;
}

