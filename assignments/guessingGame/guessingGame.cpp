#include <iostream>
#include <cstdlib> // random number gen
#include <ctime> // allow us to get hte time functions 
using namespace std;

int main()
{
    //declare local variables
    int randomNumber; // random num to gen
    int userGuess; // the user's guess
    int numberOfGuess = 0; // tally num of guesses
    bool isGuessed = false; //flag to indicate when the game is over

    //seed the rng
    srand( (int)time(0) );
    cout << (int)time(0) << endl;
    // generate the random number
    randomNumber = rand() % 20 + 1;

    // while user has not guessed number, doagain is false, keep asking ofr another guess
    //while not guessed, the flag is false, to continue, use !isguessed
    while (!isGuessed)
    {
        //prompt the user ofr their guesand get the guess
        cout << "guess a number from 1-20: ";
        cin >> userGuess; // get  the user guess
        numberOfGuess++; // add 1 to num of guesses
        cout << endl;
        // check if guess was correct, too high, or too low
        if (userGuess == randomNumber) // number was guessed
        {
            cout << "Good job! you got it! you took " << numberOfGuess << " guesses";
            isGuessed = true;
        }
        else if (userGuess >= randomNumber) // userguess too high
        {
            cout << "guess too high";
        }
        else //userguess too low
        {
            cout << "Guess too low ";
        }
        


    } // end of while loops
    return 0;
}