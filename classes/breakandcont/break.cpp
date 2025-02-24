// write code with a break then rewrite without a break
#include <iostream>
using namespace std;

int main()
{
/*
    // declare local variables
    int userInput = 0;
    int total = 0;

    //dont do this in my class

    while(true)
    {
        //prompt user and get a number
        cout << "Enter a number to add or enter 0 to exit: ";
        cin >> userInput;

        //check if user entered 0 or less
        if (userInput <= 0)
        {
            break; // break out of loop on a quit
        }
    
        //add the number to the total
        total += userInput;
    }   
        //display the total
        cout << "The total is: " << total << endl;
    
    return 0;
    */
   //-----------------------------------------------------

   //declare local variables
//   int num;
//   int sum;

   //while loop with a break
//   cout << "\n\nWhile loop with break statemnet\n\n";

   //set the intital variable values
//   sum = 0;
//   cin >> num;


 /*   while(cin) // continue while cin has a vlaid value 
    {
        if(num < 0) // a negative number entered
        {
            cout << "Negative number found in data\n";
            break;
        }

        //add the number to the total and get next num
        sum += num;
        cin >> num;
    }

    cout << "Total: " << sum << endl;
   return 0;
   */

     //declare local variables
   int num;
   int sum;

   //while loop with a break
   cout << "\n\nWhile loop with no break statemnet\n\n";

   //set the intital variable values
   sum = 0;
   cin >> num;

   //continue to get numbers until a negative number is entered
   while(num >= 0)
   {

    sum += num;
    cin >> num;

    //display message if neg number found
    if (num < 0)
         cout << "Negative number found in data\n";
   }

   //disp total
   cout << "The total is: " << sum << endl;



   //while loop with continue
   sum = 0;
   cin >> num;


    while(cin) // continue while cin has a vlaid value 
    {
        if(num < 0) // a negative number entered
        {
            cout << "Negative number found in data\n";
            cin >> num;
            continue;
        }

        //add the number to the total and get next num
        sum += num;
        cin >> num;
    }
    // clear the cin fail state
    cin.clear();
    cin.ignore(200,'\n');
    return 0;

// while loop with no continue
    cout << "\n\nWhile lopo on continue\n\n\n";
    sum =0;
    cin >> num;
    while(cin)
    {
        if(num >= 0) // pos num entered
        {
            sum += num;
        }
        else // negative num enetered
        {
            cout << "Negative number entered";
        }

        // get next num
        cin >> num;

    }

}