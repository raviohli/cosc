#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // declare local vars
    double applePrice = 1.25;
    double peachPrice = .70;
    double steakPrice = 12.0;

    //set the output formatting
    //cout << fixed << showpoint << setprecision(2);
    cout << fixed << setprecision(2);


    cout << "********** Setting up our display **********\n";
    cout << setw(30) << left << setfill('-') << "Apple "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << applePrice << endl;
    cout << setw(30) << left << setfill('.') << "Peach "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << peachPrice << endl;
    cout << setw(30) << left << setfill('-') << "Steak "
         << setw(3) << right << setfill(' ') << "$"
         << setw(6) << right << steakPrice << endl;

    return 0;
    
}