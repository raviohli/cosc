//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description: print a header, find large rof two ints, and print
// a footer
//************************************************************************

#include <iostream>
using namespace std;

void printHeader(string);
void printFooter();
void printLine();
void largestNumber(int, int);


int main()
{
    //declare local vars
    int firstNum = 10; int secondNum = 12;
    // Display the program header
    printHeader("Number Tester");
    cout << "\n";
    // Display the larger of two integers
    largestNumber(firstNum, secondNum);
    cout << "\n";
    // Display the program footer
    printFooter();
}


// Function definitions

// Function to display the program header using  the provided
// string value
void printHeader(string message)
{
    printLine();
    cout << "\t\t" << message << "\n";
    printLine();
}

//Function to display a line of asterisks - used in the 
void printLine()
{
    cout << "*********************************************\n";
}

// Function to determine the larger of two integers passed in
// and display the largest
void largestNumber(int numOne, int numTwo)
{
    // declare local variables
    int largestNumber;

    // find the larger number and assign it to largestNumber
    largestNumber = (numOne > numTwo) ? numOne : numTwo;
    //display the largest value
    cout << "The largest number is: " << largestNumber << endl; 
}

//function to idspla the program footer using a predefined
// message value
void printFooter()
{
    printLine();
    cout << "\t\tEnd of Program Run\n";
    printLine ();
}