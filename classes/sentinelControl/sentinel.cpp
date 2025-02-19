#include <iostream>
using namespace std;

int main()
{
    //declare local variables
    int stepsPerDay = -1;
    int totalSteps  = 0;
    int dayNumber = 0;
    float stepsAverage = 0.0;

    // Get daily steps until the user enters 0 (se tinel value)
    while (stepsPerDay != 0)
    {
        cout << "Enter the steps for day " << dayNumber + 1
             << "or 0 to quit";
        cin >> stepsPerDay;

        // if the user enters a positive number of steps
        if (stepsPerDay > 0)
        {
            totalSteps += stepsPerDay;
            dayNumber++; // increment to next day
        }
        
            if (dayNumber > 0)
            {
                //calculate the average per day
                stepsAverage = static_cast<float>(totalSteps) / dayNumber;

            //display avg steps
                cout << "daily average is " << stepsAverage << endl;

                if (stepsAverage >= 7500) 
                {
                    cout << "good job" << endl;
                }
                else
                    cout << "walk more bud" << endl;
    
        }
        else
            cout << "you didnt enter any steps\n";
    }

return 0;

}