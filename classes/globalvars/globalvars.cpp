#include <iostream>
using namespace std;
//function prototypes
void myfunction();

//global variables
int myGlobalNumber = 10;

int main()
{
    // declare local vars
    int myLocalNumber = 20;

    // display variable values
    cout << "my global variable:" << myGlobalNumber << endl;
    cout << "My local variable: " << myLocalNumber << endl;

    return 0;
}


//function deifnitions

// function to display variables in different scopes
void myFunction()
{
    // declare local variables
    int myFunctionNumber = 30;

}