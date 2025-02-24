#include <iostream>
#include <iomanip>

using namespace std;
//display a multiplication table

int main()
{
    // declare local aribles
    int row, col;

    // display the header row
    cout << "   |   1   2   3   4   5   6   7   8   9   10   11   12\n"
         << "--------------------------------------------------------\n";


         // for each row, display the mult facts for that row
        for(row = 1; row <= 12; row++)
        {
            cout << setw(2) << row << " | ";

            // display the facts for the row 
            for(col = 1; col <= 12; col++)
                cout << setw(4) << row * col;

            cout << endl; // go to next row
        }



    return 0;
}