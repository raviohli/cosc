#include <iostream>
using namespace std;

// function prototypes
void myFunction();
void myFunction(string);
string myFunction(string, int);


int main()
{
    myFunction();
    cout << endl;
    myFunction("hello");
    cout << endl;
    cout << myFunction("here is a string " , 5);
    cout << endl;
}

//function definitions
void myFunction()
{
    cout << "Inside the myFunction that does not have an argument." << endl;
}

void myFunction(string message)
{
    cout << "Inside the myFunction that hsa an arg: " << message << endl;
}
string myFunction(string message, int myInt)
{
    // declare local variables
    string myReturn = "Inside myFunction - The message is " + 
                      message + "\n";
    myReturn += "The value of the int passed to me is " + to_string(myInt) + "\n";
    return myReturn;
}