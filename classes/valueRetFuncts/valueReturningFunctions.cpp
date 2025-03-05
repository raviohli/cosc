//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment: Demo
// Description: The program will add two integers and determine if
// a numbe ris even or odd
//************************************************************************

#include <iostream>
using namespace std;


int add(int, int);
bool isEven(int);

int main()
{
    int sum = add(5, 3);
    //display the sum
    cout << "The sum is: " << sum << endl;
    //find out if another num even or odd
    if (isEven(4))
        cout << "The number is even.\n";
    else
        cout << "The number is odd.\n";
    // do again
    if (isEven(7))
        cout << "The number is even.\n";
    else
        cout << "The number is odd.\n";
    

    return 0;
}


// function definitions
// takes two int and adds
int add(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}
//function that accepts an integer and determines if odd or even
bool isEven(int num)
{
    return num % 2 == 0;
}

