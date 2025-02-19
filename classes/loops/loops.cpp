#include <iostream>
using namespace std;

int main()
{
    //declare local variables
    int stepsPerDay = 0;
    int totalSteps  = 0;
    int dayNumber = 1;
    float stepsAverage = 0.0;

    // loopthrough 5 days getting the number of steps for each day
    while(dayNumber <=5)
    {
        cout << "Enter the steps for day " << dayNumber << ": ";
        cin >> stepsPerDay;
        totalSteps += stepsPerDay;
        dayNumber++; // increment the day number

    }

    // calculate the average steps per day
    stepsAverage = static_cast<float>(totalSteps) / 5.0;

    //display the aerage steps
    cout << "Your daily steps average is " << stepsAverage << endl;

//    return 0;

    //give the user feedback based on the average steps
    if(stepsAverage >= 7500)
    {
        cout << "Great job, you are getting yoru steps in." << endl;
    }
    else 
    {
        cout << "looks like you need to do some more wlaking" << endl;
    }
    cout << endl;
    return 0;

}