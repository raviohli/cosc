//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: Module 4 lab - week 1
// Description: create four functions that take two integers between 100
// and 200, and will sum up all the evens or odds within the given range
// OR will simply count the number of evens or odds. (four total functs)
//************************************************************************
#include<iostream>
using namespace std;

// function prototypes
int numberOfEvens(int, int);
int numberOfOdds(int, int);
int sumOfEvens(int, int);
int sumOfOdds(int, int);


int main()
{
    // Declare local variables
    int firstNum;
    int secondNum;
    bool numberIsValid = false;

    // Begin a loop to prompt for input, and validate
    // input to ensure that it's within 100 and 200
    while(!numberIsValid)
    {
        //Prompt the user to enter the first number
        cout << "Please enter the first number (lowest): ";
        // Store the input in firstNum
        cin >> firstNum;
        // Check to see if the first number
        // is greater than 100 and less than 200
        if (firstNum > 100 && firstNum < 200) 
            numberIsValid = true; // if both are true, end loop

    }
    numberIsValid = false; // reset LCV for next loop

    // Begin a loop to select the second number, and ensure that
    // it's larger than the first
    while (!numberIsValid)
    {
        cout << "Please enter the second number (higher): ";
        cin >> secondNum;
        // If secondNum is g>firstNum and less than secondNum, endloop
        if (secondNum <= 200 && secondNum > firstNum)
            numberIsValid = true;
    } // End loop
    cout << endl; // clean up output

    // FUNCTION CALLS
    // Display number of evens
    cout << "Count of all evens in the range " << firstNum << " to "
         << secondNum << " is: "
         << numberOfEvens(firstNum, secondNum)   << "\n";
    // Display sum of evens
    cout << "Sum of all evens in the range " << firstNum << " to "
         << secondNum << " is: "
         << sumOfEvens(firstNum, secondNum) << "\n";

    cout << "\n"; // Clean up output

    // Display number of odds
    cout << "Count of all odd numbers in the range " << firstNum
         << " to " << secondNum << " is: "
         << numberOfOdds(firstNum, secondNum) << "\n"; 
    // Display sum of odds
    cout << "Sum of all odd number in the range " << firstNum << " to "
         << secondNum << " is: "
         << sumOfOdds(firstNum, secondNum) << "\n";
    return 0;

}

// Function definitions

// Function to add up the number of evens between the two parameters
int numberOfEvens(int firstNum, int secondNum)
{
    int total; // total of evens found
    // Loop counting from firstNum to secondNum
    for (int i = firstNum; i < secondNum; i++)
    {
        if (i % 2 == 0) // check if number is even
            total += 1; // increment total number of evens by 1
    }
    // loop ends, then returns total
    return total;
}

//Function to add up the sum of evens between the two parameters
int sumOfEvens(int firstNum, int secondNum)
{
    int sum = 0;
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 == 0) // Check if num is even
            sum += i;
    }
    // Loop ends then returns sum
    return sum;
}

// Function to add up the number of odds between the two parameters
int numberOfOdds(int firstNum, int secondNum)
{
    int total; // total of odds
    // Loop counting from firstNum to secondNum
    for (int i = firstNum; i < secondNum; i++)
    {
        if (i % 2 != 0) // check if number is odd
            total += 1; // increment total number of odds by 1
    }
    // loop ends, then returns total
    return total;
}

// Function to add up the sum of odds between the two paramters
int sumOfOdds(int firstNum, int secondNum)
{
    int sum = 0;
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 != 0) // Check if num is odd
            sum += i;
    }
    // Loop ends then returns sum
    return sum;
}
