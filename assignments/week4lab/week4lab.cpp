//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: Week 4 lab
// Description: Door guessing game - Declare a correct door and user
// guess, then make the user guess doors until they get it correct
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    // Declare local variables
    int correctDoor = 3;
    int playerChoice;

    // Prompt for input
    cout << "There are 3 doors in front of you... only one has"
         << " the treasure. They are labelled 1-3.\n";
    cout << "Which will you choose? (1-3) ";
    cin >> playerChoice;

    // Check if the door is correct
    if ( playerChoice == correctDoor) // correct door chosen
    {
        cout << "You found the treasure!\n\n";
    }
    else // incorrect door chosen
    {
        cout << "Sorry, you didn't find the treasure...\n\n";
    }

    cout << "Thank you for playing!\n\n";
    return 0;
}

