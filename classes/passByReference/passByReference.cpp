#include <iostream>
using namespace std;

// First - prototype functions
void callByReference(int&, int&);



int main()
{
    int firstNumber = 10;
    int secondNumber = 5;

    cout << "Before the function call " << endl;
    cout << "\t First Number: " << firstNumber << endl;
    cout << "\t Second Number: " << secondNumber << endl << endl;
    // call the function and see the values inside the function
    callByReference(firstNumber, secondNumber);

    // Now let's lok to see the variable now:
    cout << "After (outside) the function call "
         << "C(Call by reference)" << endl;
    cout << "\t first number: " << firstNumber << endl;
    cout << "\t second number: " << secondNumber << endl;
    cout << "notice as it is a call by reference - "
         << "the function actually changed the values ";
    


}

// FUNCTION DEFINITIONS

void callByReference(int& pNumOne, int& pNumTwo)
{
    //create a local variable as a holding location for swapping the vals
    int temp;
    // now swap the values
    temp = pNumOne;
    pNumOne = pNumTwo;
    pNumOne = temp;

    cout << "Inside the callbyreference function after switching: "
         << endl;
    cout << "\t First number: " << pNumOne <<  endl;
    cout << "\t SecondNumber: " << pNumTwo << endl << endl;
}