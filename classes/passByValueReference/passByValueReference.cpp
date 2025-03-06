//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: demo
// Description: pass by value reference function
// swap values by using pass by value and pass by refernece
// and look at how it affects the variables in main
//************************************************************************

#include <iostream>
using namespace std;


//function prototypes
void callByValue(int, int);

int main()
{
    int firstNumber = 10;
    int secondNumber = 5;
    // display the values inside main
    cout << "Before the callByValue function:\n";
    cout << "\t first num: " << firstNumber << endl;
    cout << "\t second num: " << secondNumber << endl;
    callByValue(firstNumber, secondNumber);
    cout << "After the callByValue function:\n";
    cout << "\t first num: " << firstNumber << endl;
    cout << "\t second num: " << secondNumber << endl;
    return 0;
}

// function definitions

//function accepts two integers and swaps the values
void callByValue(int numOne, int numTwo)
{
    // declare local variables
    int temp;

    // us etemp to swap the values
    temp = numOne;
    numOne = numTwo;
    numTwo = temp;

    // isplay hte vlaues inside the function
    cout << "inside the callByValue funtion after swappng:\n";
    cout << "\t First Number: " << numOne << endl;
    cout << "\t Second Number: " << numTwo << endl;
}