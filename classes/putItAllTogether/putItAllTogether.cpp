//************************************************************************
// Author: Noel Latsha
// Date: 26 Feb 2025
// Language: C++
// Assignment:
// Description: Utilize many of the skills we've learned in module 3
//************************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //declare local variables
    char contFlag = 'y'; // LCV
    int posInt, choice, index;

    // continue running until the user doesn't select 'y' to continue

    while(contFlag == 'y')
    {
        // get a positive int between 0 & 10000 from user
        do {
            // prompt for and get an int
            cout << "Please enter a postiive integer under 10,000: ";
            cin >> posInt;
            // continue asking for na int while the int is less than 0 or greater than 10000
        } while( !(posInt > 0) || !(posInt < 10000) );
        
        //display a menu for the user and get their choice
        cout << "\n You entered the number: " << posInt
             << "\n What would you like to do?\n";
        cout << "1 - Get the factors\n"
             << "2 - Get the prime factors\n"
             << "3 - Get the square and square root\n"
             << "[1, 2, 3]: ";
        cin >> choice;
        cout << endl;

        //set the output formatting
        cout << setfill('.');

        // switch on user's choice
        switch(choice)
        {
            case 1: // get the factors of the int
                // check for divisibility by all number from 1 - posInt
                for(index = 1; index <= posInt; index++)
                {
                    // if posInt is evenly divisible by the index - display
                    if(posInt % index == 0)
                        cout << setw(8) << index;
                }
                break;
            case 2: // get the prime factors of the int
                index = 1; // for the starting factor
                while(index < posInt) // check 2 + dividend left over
                {
                    index++; // go to next factor
                    if (posInt % index == 0) // another factor fonud
                    {
                        cout << setw(8) << index;
                        posInt /= index; // reduce the posInt by the factor
                        index--; // retry the same factor
                    }
                }
                break;
            case 3: // get the square and square root of the int
                cout << setprecision(5); // set num output formatting
                // display the square
                cout << posInt << " squared is: " << pow(posInt, 2) << endl;
                
                //display the square root
                cout << "The square root of " << posInt << " is: "
                     << sqrt(posInt) << endl;
                break;
            default: // invalid or not exist
                cout << "Invalid choice\n";
                break;
        }
        //ask the user if they want to continue

        do {
            // keep asking until the user enters y or n
            cout << "\n\nDo you want to continue[y/n]: ";
            cin >> contFlag;
        } while(contFlag != 'y' && contFlag != 'n');
    } // end of while loop




    return 0;
}
