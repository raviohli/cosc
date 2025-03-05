//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description: add tow nums and find the larger of the two
//************************************************************************
#include <iostream>
using namespace std;

//function prototypes
int findNumber(int, int);
int addNumbers(int, int);

int main()
{
    //declare local vars
    int myNumberOne = 5;
    int myNumberTwo = 10;
    cout << "The larger of the two numbers is: " << findNumber(myNumberOne, myNumberTwo)
         << endl;

    cout << "The two numbers added together is: " << addNumbers(myNumberOne, myNumberTwo)
         << endl;
    return 0;
}


// function definitions

//function that accepts two integers, calcultes their sum
// and return the sum as an integer return type

int addNumbers(int numOne, int numTwo)
{
    // declare local vars
    int result = 0;

    // calculate the sum and assign result
    result = numOne + numTwo;

    return result;
}

// Function to find the larger of the two numbers
int findNumber(int numOne, int numTwo)
{
    //declare local vars
    int result = 0;
    if (numOne > numTwo)
        return numOne;
    else if (numTwo > numOne)
        return numTwo;
    else
        return numOne;

}

