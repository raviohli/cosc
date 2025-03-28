//************************************************************************
// Author: Noel Latsha
// Date: 28 Mar 2025
// Language: C++
// Assignment: Module 4 - Week 2
// Description: Create a program to calculate BMI. Write three functions,
// one to prompt for user weight and height, one to calculate BMI,
// and one to display the BMI and bmi category to the user.
//************************************************************************
#include <iostream>
using namespace std;


// Function prototypes
void getWeightHeight(double&, double&);
double calcBMI(double, double);
string classifyBMI(double);

int main()
{
    // Declare local variables
    double weight, height, bmi;
    string category;

    // Call getWeightHeight function, and pass the weight and height
    // variables
    getWeightHeight(weight, height);

    // Call calcBMI function, and store the return BMI in bmi,
    // pass the weight and height variables
    bmi = calcBMI(weight, height);

    // call classifyBMI function and pass the bmi var into it
    // store return in category
    category = classifyBMI(bmi);

    // Display the BMI value
    cout << "\nBMI Classification\n";
    cout << "BMI: " << bmi << endl;
    // Display the category value
    cout << "Classification: " << category << endl;
    return 0;
}

/* Function definitions */

// Function to prompt user for weight and height
// in kg and meters, respectively
void getWeightHeight(double& weight, double& height)
{
    // Prompt the user to enter weight in kilograms, store in weight
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    // prompt the user to enter height in meters, store in height
    cout << "Enter your height in meters: ";
    cin >> height;
}

// Function to calculate the bmi and return it. weight and height
// passed in.
double calcBMI(double weight, double height)
{
    // Formula: (weight/height^2)
    return weight / (height * height);
}

// Function that takes in BMI value and classifies it.
// Returns a string depending on value of BMI
string classifyBMI(double BMI)
{
    if (BMI < 18.5)
        return "Underweight";
    
    if (BMI < 25)
        return "Normal Weight";

    if (BMI < 30)
        return "Overweight";
    
    else
        return "Obese";
} 