#include <iostream>
using namespace std;
//DRAW RECTANGLE
// using nested for loops 

int main()
{
    //declare local vars

    // oute rloops - for each row

    for(int row = 0; row < 10; row++)
    {
        // inne rloop - for each column
        for (int col=0; col<10; col++)
        {
            cout << "* ";
        }

        cout << endl; // go to next row
    }

}