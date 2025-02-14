//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description:
//************************************************************************
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Declare local variables
    string month;
    double rent;
    double electricBill;
    double waterBill;
    double total;

    // Set the output formatting
    cout << fixed << showpoint << setprecision(2);

    // Prompt the user for values
    // Month
    cout << "Please enter the month: ";
    cin >> month;

    // Rent cost
    cout << "Please enter your rent: ";
    cin >> rent;

    // Electric bill
    cout << "Please enter your electric bill: ";
    cin >> electricBill;

    // Water bill
    cout << "Please enter your water bill: ";
    cin >> waterBill;

    // Calculate the totals
    total = rent + electricBill + waterBill;

    // Output the values followed by the total
    // Rent Section
    cout << "Your monthly expenses for " << month << endl;
    cout << setw(18) << left << setfill(' ') << "Rent: "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << rent << endl;

    // Electric Section
    cout << setw(18) << left << setfill(' ') << "Electric: "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << electricBill << endl;
    
    // Water Section
    cout << setw(18) << left << setfill(' ') << "Water: "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << waterBill << endl;

    // Separation line
    cout << "---------------------------------" << endl;
    
    // Display the totals
    cout << setw(18) << left << setfill(' ') << "Total: "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << total << endl;

    return 0;

}

