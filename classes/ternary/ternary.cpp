//************************************************************************
// Author: Noel Latsha
// Date: 12 Feb 2025
// Language: C++
// Assignment:
// Description: use a ternary operator to fid the minimum value
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    // declare local vars
    int numOne = 5, numTwo = 10;
    int minValue;

    //use a ternary operator to find the min value
    minValue = (numOne < numTwo) ? numOne : numTwo;
    // minimum value equals expression numone les than numtwo
    // if true, return numOne, if false, return numTwo
    
    //display the min value
    cout << "The minimum is: " << minValue << endl;

    //rewrite the ternary as an if/else
    if (numOne < numTwo)
    {
        minValue = numOne;
    }
    else
    {
        minValue = numTwo;
    }
    //display the minimum value
    cout << "The minimum value is: " << minValue << endl;
    cout << endl << endl;
    //-------------------------------------------------------
    //declare local variables
    string seatSelection;
    float ticketCost = 0.0;

    // get the ticket price from the user
    cout << "How much was your airline ticket: ";
    cin >> ticketCost;
    cout << endl;

    //determine the seat class based on the ticket price
    seatSelection = (ticketCost >= 800) ? "Business class" : "Coach Class";

    //display the seat selection
    cout << "Your seat selection is in the " << seatSelection << endl;


    return 0;

}

