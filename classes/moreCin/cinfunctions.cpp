//************************************************************************
// Author: Noel Latsha
// Date: 14 Feb 2025
// Language: C++
// Assignment: darious cin functionsemo
// Description: demonstrate v
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    //declare local vars
    int myNumber;
    char ch;
    char nextChar;

    // get an interger fro the user
    cout << "Enter an integer: ";
    cin >> myNumber;

    // check to see if a valid integer was entered
    if (cin.fail())
    {
        cout << "That was not an integer";

        //clear the error state
        cin.clear();

        //ignore the rest of the line
        cin.ignore();
    }
    else 
    {
        cout << "You entered the integer" << myNumber << endl;
    }

    //get a character from the input stream
    cout << "Enter a character";
    cin >> ch;

    //put the character back on the input stream
    cin.putback(ch);

    // re-read the character and display
    cin >> ch;
    cout << "You entered: " << ch << endl;
    //ignore the newline
    cin.ignore();

    // get another character from the user
    cout << "Please enter another character: ";
    nextChar = cin.peek();

    //check if the next character is a number
    if (isdigit(nextChar))
    {
        cout << "The next character is a digit\n";
    }
    else
    {
        cout << "The next character is not a digit \n";
    }
    //read char from input stream and display
    cin >> ch;
    cout << "This time, you entered: " << ch << endl;

    return 0;
}

