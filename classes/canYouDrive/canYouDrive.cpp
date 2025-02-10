//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: lab
// Description: based on user input, let the user know if they are old 
// enough to drive, or how long they will have to wait
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    //declare local vars
    int userAge;
    const int AGE_TO_DRIVE = 16;

    // get current age of user
    cout << "How old are you?: ";
    cin >> userAge;
    cout << endl;

    // if the user is legal age to drive, tell them
    // if not, tell them how many years to wait
    if (userAge >= AGE_TO_DRIVE)
    {
        cout << "Awesome - you are old enough to drive\n";

    }
    else
    {
        cout << "Yikes - looks like you will have to wait "
             << AGE_TO_DRIVE - userAge << " years to drive\n";
    }
    return 0;
}

