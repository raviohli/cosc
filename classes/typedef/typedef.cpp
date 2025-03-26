#include <iostream>
using namespace std;

//DISPLAY VLAUES WITH A TYPEDEF


enum CurrentGameStatus { WIN, LOSS, TIE, PLAYING };


// define data type aliases
typedef CurrentGameStatus CGS;
typedef unsigned int uInt;
typedef std::string str;
int main()
{
    // declare local variables
    uInt num = 42;
    str name = "John Doe";
    CGS game = PLAYING;

    cout << "Number: " << num << endl;
    cout << "Name: " << name << endl;
    cout << "Game status: " << game << endl;

    return 0;
}