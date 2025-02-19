#include <iostream>
using namespace std;

int main()
{
    int stepsPerDay = 0;
    int totalSteps = 0;
    float stepsAverage = 0.0;
    int dayNumber = 0;
    bool doAgain = true; // LCV

    // continue to get steps per day until flag doAgain is false

    while (doAgain)
    {
        cout << "Enter steps for day " << dayNumber + 1 << ": "
             << "Or 0 to quit";
        cin >> stepsPerDay;

        //if use renters a positive number of steps
        if (stepsPerDay > 0)
        {
            totalSteps += stepsPerDay;
            dayNumber++;
        }
        else
            doAgain = false;

    }
    if (dayNumber > 0)
    {
        stepsAverage = static_cast<float>(totalSteps) / 5;

        cout << "average steps are: " << stepsAverage;
    }
    else
        cout << "no input";

    return 0;



}