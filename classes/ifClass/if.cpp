//************************************************************************
// Author: Noel Latsha
// Date: 10 Feb 2025
// Language: C++
// Assignment:
// Description: accept a credit card payment and calculate the balance
// and interest
//************************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // declare local variables
    double creditCardBalance;
    double payment;
    double interest = 0.0;
    const double INTEREST_RATE = 0.015;

    // set the output to two decimal places for currency
    cout << fixed << showpoint << setprecision(2);

    //get the balance from the user
    cout << "Enter your credit card balance: ";
    cin >> creditCardBalance;
    cout << endl;

    // get the payment from the user
    cout << "Enter your payment: ";
    cin >> payment;
    cout << "\n";

    // calculate the new balance
    creditCardBalance -= payment;

    // calculate the interest if there is a balance
    if (creditCardBalance > 0)
    {
        interest = creditCardBalance * INTEREST_RATE;
    }

    // display the account information
    cout << "The balance is: $" << creditCardBalance << endl;
    cout << "The interest to be added to your account is: "
         << interest << endl;
    cout << "Next month's bil is: $" << creditCardBalance + interest 
         << endl;


    return 0;
    
}

