//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description:
//************************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //declare local variables
    ifstream inFile;
    ofstream outFile;
    double testOne, testTwo, testThree, testFour, testFive;
    double testAverage;
    string firstName, lastName;

    // open the file for reading
    inFile.open("test.txt");

    //if te file cannot be opened, display an error message
    //and terminate the program;

    if( !inFile )
    {
        cout << "The file is not found or cannot be opened\n"
             << "Program Terminated\n";
        return 1;
    }
    

    return 0;

}

