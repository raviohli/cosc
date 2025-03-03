//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: demo
// Description: show use rdefined functions
//************************************************************************
#include <iostream>
using namespace std;


//function prototypes
int add(int, int);
void printGreeting();
void printDifference(int, int);


int main()
{
    int num1 = 5, num2 = 10;
    int sum;


    //display a user greeting
    printGreeting();
    // call the function to get the sum

    //displa yhte sum
    cout << "The sum is " << add(num1, num2) << endl;

    //call functon ot display the difference
    printDifference(8, 5);
    

    return 0;
}

//funtion definitions


// function to add two integers and return the sum
int add(int firstInt, int secondInt)
{
    return firstInt + secondInt;
}


// function to print a greeting to the user
// non value returning function
void printGreeting()
{
    cout << "Hello, World!\n";
}

//calc difference and print the diff
// funct accepts 2 ints, subtracts the second fro mthe first
void printDifference(int firstInt, int secondInt)
{
    cout << "The difference is: " << firstInt - secondInt << endl;
}