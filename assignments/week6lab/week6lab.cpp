//************************************************************************
// Author: Noel Latsha
// Date: 5 March 2025
// Language: C++
// Assignment: Module 3 lab - week 2
// Description: Create a calculator with looping menus
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    // Declare local variables
    int userChoice;
    int firstNum;
    int secondNum;
    bool continueFlag;

    // Enter a looping menu. Prompt the user with a menu, and ask for
    // input each loop.

    while(continueFlag)
    {
        // Display the Calculator menu
        cout << "Calculator menu:\n";
        cout << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "0. Exit\n";
        // Prompt use rfor input
        cout << "Enter your choice: ";
        cin >> userChoice;

        // Switch on user choice, either divide, multiply, subtract, or add
        switch(userChoice)
        {            
            case 1: // Addition Selected
                // Prompt user for firstNum
                cout << "Enter the first number: ";
                cin >> firstNum;
                // Prompt user for secondNum
                cout << "Enter the second number: ";
                cin >> secondNum;
                // Calculate and output result
                cout << "Result: " << firstNum + secondNum << "\n\n";
                break;

            case 2: // Subtraction Selected
                // Prompt user for firstNum
                cout << "Enter the first number: ";
                cin >> firstNum;
                // Prompt user for secondNum
                cout << "Enter the second number: ";
                cin >> secondNum;
                // Calculate and output result
                cout << "Result: " << firstNum - secondNum << "\n\n";
                break;

            case 3: // Multiplication
                // Prompt user for firstNum
                cout << "Enter the first number: ";
                cin >> firstNum;
                // Prompt user for secondNum
                cout << "Enter the second number: ";
                cin >> secondNum;
                // Calculate and output result
                cout << "Result: " << firstNum * secondNum << "\n\n";
                break;

            case 4: // Division Selected
                // Prompt user for firstNum
                cout << "Enter the first number: ";
                cin >> firstNum;
                // Prompt user for secondNum
                cout << "Enter the second number: ";
                cin >> secondNum;
                // Check if user is dividing by 0. If so, output error and break
                if (secondNum == 0)
                {
                    cout << "Division by zero is undefined.\n\n";
                    break;
                }
                // Calculate and output result
                cout << "Result: " << firstNum / secondNum << "\n\n";
                break;  

            case 0:
                cout << "Exiting... Goodbye!";
                continueFlag = false;
                break;

            default:
                cout << "That is not a valid option.\n\n";
                break;
        }
    }

}

