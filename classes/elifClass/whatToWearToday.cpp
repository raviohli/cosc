//************************************************************************
// Author: Noel Latsha
// Date: 10 Feb 2025
// Language: C++
// Assignment: Demo
// Description: Based on the temperature input, let the user know
// how to dress for the day's weather.
//************************************************************************
#include <iostream>

using namespace std;

int main()
{
    // declare variables
    double temp;

    //ask the user for the temperature
    cout << "What is the temperature outsde: ";
    cin >> temp;

    // let the user know how to dress for the day
    if (temp >= 90) // the temp is equal to or greater than 90 deg
        cout << "Put shorts on and go to the beach!" << endl;
        
    else if (temp >= 60) // temp is from 60 to 89 deg
        cout << "Wear long pants if you go out" << endl;

    else if (temp >= 20) //temp is from 20 to 59 deg
    {
        cout << "Bundle up, it's cold outside" << endl;
    }
    else // temp is less than 20 deg
    {
        cout << "You should stay inside today" << endl;
        cout << "You could get frostbite if you go out" << endl;
    }

    cout << "Program ended" << endl;
    return 0;
}



