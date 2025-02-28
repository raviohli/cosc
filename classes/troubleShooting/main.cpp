//************************************************************************
// Author: Scott Raymond
// Date: 29 Dec 2024
// Language: C++
// Assignment: Activity to practice troubleshooting
// Description: This program will calculate the monthly loan payment for
// the user. The user will enter the principle amount, the rate as a
// percentage, and the term in years. It will output the monthly payment
//************************************************************************
#include <iomanip>
#include <iostream> // added this
#include <cmath> // added this
using namespace std; // added this

// ERRORS TOTAL
/* missing equals sign in first while loop
missing <iostream> and <cmath> AND USING NAMESPACE STD
missing semicolon on rate
payment misspelled
missing semicolon on cont flag in the end

*/
int main()
{
    // Declare local variables
    double principle, rate, payment;
    int term;
    char cont = 'Y';  // LCV for while loop
    
    // loop until the user selects to exit, and cont is set to false
    while(cont == 'Y' || cont == 'y') //missing 2 equals signs
    // NEEDS TO BE  || NOT &&
    // THERE'S A SEMICOLON MAKING IT SKIP THE LOOP
    {
        // set output formatting to 10 decimal places for calculations
        cout << fixed << showpoint << setprecision(10);
        
        // get principle from the user, loans must be $5000 or greater
        do {
                cout << "Enter the principle amount ($5,000 or more): ";
                cin >> principle;
           } while(principle < 5000); // until a valid principle entered
           // THIS SIGN NEEDED TO BE MADE INTO LESS THAN NOT EQUAL 
        
        
        // get rate from the user, must be the annual rate as a decimal
        do {
                cout << "Enter the annual rate as a decimal (less than 1.0): ";
                cin >> rate;
             // rate must be greater than 0 and less than 1
           } while(rate < 0 || rate > .99);
        
        // convert the rate to a montly rate
        rate /= 12; // MISSING SEMICOLON
        
        // get term from the user, must be in years
        do {
                cout << "Enter the term in years (at least 1 year): ";
                cin >> term;
           } while(term < 1);  // term must be at least 1 year
        
        // convert the term to months
        term *= 12;

        // set output formatting to 2 decimal places for currency
        cout << fixed << showpoint << setprecision(2);
        
        // calculate and display the payment
        // formula
        //                 r(1 + r)^n        P = Principle amount
        //  payment = P ---------------      r = monthly interest rate
        //               (1 + r)^n - 1       n = total number of payments
        // parenthesis missing in payment formula down here
        payment = principle * (rate * pow(1 + rate, term))  /
                  ( pow(1 + rate, term) - 1);
        cout << "Your monthly payment will be: $" << payment << endl << endl; // PAYMENT MISSPELLED
        
        // ask the user if they want to continue
        cout << "Do you want to calculate another payment[Y = yes]: ";
        cin >> cont; // missing semicolon
    }
    
    return 0;
}
