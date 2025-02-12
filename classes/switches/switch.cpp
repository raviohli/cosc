//************************************************************************
// Author: Noel Latsha
// Date: 12 Feb 2025
// Language: C++
// Assignment:
// Description: using switch/case statements ; get day of week
// 1 = monday
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    int day;

    //get the day fro mthe user
    cout << "What day of the week (number 1-7): ";
    cin >> day;

    //switch on the day number to display the day name
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;
        
        case 4: 
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;
        
        case 6:
            cout << "Saturday" << endl;
            break;
        
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number\n";
            break;
    }
    return 0;
}
