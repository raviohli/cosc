//************************************************************************
// Author: Noel Latsha
// Date: 38 Feb 2025
// Language: C++
// Assignment: Module 3 Lab - looping through numbers
// Description: Prompt user for two numbers, then
// Output all odd numbers between the two, then all even nums
// then output the sum of al evens and the sum of all odds
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    // Declare local variables
    int firstNum, secondNum;
    int oddSum = 0;
    int evenSum = 0;
    // I spent two hours trying to figure out why
    // my sums were entirely off
    // before realizing I didn't assign a value to even/oddSum.

    // Prompt for first number
    cout << "Enter your first number: ";
    cin >> firstNum;
    // begin do while to get a valid second number.
    do {
        cout << "Enter your second number. Ensure that it's greater than "
             << "the first number: ";
        cin >> secondNum;
        // Ensure that firstnum is greater than secondnum
        if (firstNum >= secondNum)
            cout << "Error: the first number must be less than "
                 << "the second number. Please try again.\n";


       } while (firstNum >= secondNum);

       // Output the odd numbers
        cout << "Odd numbers between " << firstNum << " and "
             << secondNum << ": ";
        // begin loop to output all odds
        for (int i = firstNum; i <= secondNum; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
                oddSum += i;
            }
        } // end of first for loop
        cout << "\n"; // to clean up output
        cout << "Even nubmers between " << firstNum << " and "
             << secondNum << ": "; // Set up output for the incoming loop
        // begin loop to output all evens
        for (int i = firstNum; i <= secondNum; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
                evenSum += i;
            }
        }
        cout << "\n";

        // Output the sum of all evens and odds
        cout << "The sum of odd numbers between " << firstNum
             << " and " << secondNum << ": " << oddSum << endl;
        cout << "The sum of even numbers between " << firstNum
             << " and " << secondNum << ": " << evenSum << endl;
    
}



