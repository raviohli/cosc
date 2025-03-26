//************************************************************************
// Author: Noel Latsha
// Date: 26 Mar 2025
// Language: C++
// Assignment:
// Description: strings demo
//************************************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare local variables
    string name = "William Jacob";
    string str1, str2, str3, str4;

    cout << "Name " << name << endl;
    str1 = "Hello There";
    cout << "str1 = " << str1 << endl;


    str2 = str1;
    cout << "str2 = " << str2 << endl;

    str1 = "Sunny ";
    str2 = str1 + " Day";
    cout << "str2 = " << str2 << endl;

    str1 = "Hello";
    str2 = "There";
    str3 = str1 + " " + str2;
    cout << "line28: str3 = " << str3 << endl;
    
    str3 = str1 + ' ' + str2;
    cout << "str3 = " << str3 << endl;

    str1 = str1 + " Mickey";
    cout << "str1 " << str1 << endl;

    str1 = "Hello there";
    cout << "str1[6]: " << str1[6] << endl;

    str1[6] = 'T';
    cout << "str1[6]=T: " << str1 << endl;
    cout << "str1 at 6: " << str1.at(6) << endl;
    
    return 0;
}

