//************************************************************************
// Author: Noel Latsha
// Date: 3 Feb 2025
// Language: C++
// Assignment:
// Description: create a file and read from it
//************************************************************************
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare local variables
    ofstream myFile("testFile.txt");
    string myText;


    // write to the file
    myFile << "Quality is never an accident; it is always the result of"
           << "intelligent efforts.\n";
    myFile << "\t --- Quote by William Forester ---";

    //close the file
    myFile.close();

    //read the file
    // create the file reader
    ifstream myReadFile("testFile.txt");
    while( getline(myReadFile, myText))
    {
        // output the text
        cout << myText << endl;
        myReadFile.close();
    }
    return 0;

}