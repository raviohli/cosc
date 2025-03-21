//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: Module 4 lab - week 1
// Description: create four functions that take two integers between 100
// and 200, and will sum up all the evens or odds within the given range
// OR will simply count the number of evens or odds. (four total functs)
//************************************************************************
#include <iostream>
using namespace std;
/*
// function prototypes
int numberOfEvens();
int numberOfOdds();
int sumOfEvens();
int sumOfOdds();
*/

int main()
{
    // Declare local variables
    int firstNum;
    int secondNum;
    bool numberNotValid = true;
    // Prompt the user for numbers between 100 and 200
    cout << "Please enter two numbers between 100 and 200\n";

    // Begin a loop to ensure that the user
    // enters a number between 100 and 200
    while(numberNotValid)
    {

        //Prompt the user to enter the first number, and take the input
        cout << "Please enter the first number (lowest)";
        cin >> firstNum;
        // Check to see if the first number is greater than 100 and less than 200
        // If not, prompt for input again
        if (firstNum >= 100 && firstNum <= 200); // If the number is within range
            numberNotValid = false;              // set LCV to false, ending loop
    }
    return 0;

}

// Function definitions

// Function to add pu the number of evens between the two parameters
/*
int numberOfEvens(int firstNum, int secondNum)
{
    return 0;
}

// Function to add up the number of odds between the two parameters
int numberOfOdds(int firstNum, int secondNum)
{
    return 0;
}

//Function to add up the sum of evens between the two parameters
int sumOfEvens()
{
    return 0;
}

// Function to add up the sum of odds between the two paramters
int sumOfOdds()
{
    return 0;
}
*/