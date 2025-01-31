//************************************************************************
// Author: Noel Latsha
// Date: 31 Jan 2025
// Language: C++
// Assignment: demo
// Description: output a variable using pre/postfix increment
//************************************************************************

#include <iostream>
using namespace std;

int main() 
{
    //declare local variables
    int myAge = 25;

    // postfix operator w var updated after use
    cout << "Age (with postfix operator): " << myAge++ << endl;
    cout << "Age (after postfix operator): " << myAge << endl;

    //prefix operator w var updated before user
    cout << "Age (with prefix operator): " << ++myAge << endl;
    cout << "Age (after prefix operator): " << myAge << endl;
    
    return 0;
}

