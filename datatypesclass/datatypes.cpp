//************************************************************************
// Author: Noel Latsha
// Date: 29 Jan 2025
// Language: C++
// Assignment: Data types
// Description: Output various data types
//************************************************************************

#include<iostream>
using namespace std;

int main()
{
    // declare local variables
    string myName = "Dr. Kevin Roark";
    int myAge = 39;
    float myGPA = 3.95;
    char myGrade = 'A';

    // Output some variables
    cout << "Name: " << myName << endl;
    cout << "Age: " << myAge << "\n";
    cout << "GPA: " << myGPA << " Grade: " << myGrade << endl;
    cout << "End of Program!\n";

    

    //----------------------------------------
    // declare local vars
    string myAccountNumber = "123456789";
    float myBalance = 29.01;
    float myDeposit = 10.00;
    bool isAccountActive = true;

    // display initial account balance
    cout << "Account Number: " << myAccountNumber << endl;
    cout << "Initial Balance: $" << myBalance << endl;
    
    // add the deposit to the balance
    myBalance = myBalance + myDeposit;
    cout << "New balance: $" << myBalance << endl
        << "Account active: " << isAccountActive << endl;

    return 0;
}
