/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 16, 2017, 12:40 AM
  Purpose:  Write a program that asks for the number of calories and fat grams
            in a food. The program should display the percentage of calories
            that come from fat. If the calories from fat are less than 30% of
            the total calories of the food, it should also display a message 
            indicating that the food is low in fat.
            One gram of fat has 9 calories, so
            Calories from fat = fat grams * 9.
            The percentage of calories from fat can be calculated as:
                   Calories from fat / total calories.
            (Input Validation: Make sure the number of fat calories and far
            grams are not less than 0. Also the number of calories from fat
            cannot be greater than the total number of calories. If that
            happens, display an error message indicating that either the 
            calories or fat grams were incorrectly entered.)
 
 */

//System Libraries
#include <iostream>
#include <iomanip> //for steprecision, fixed;
using namespace std;


//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float   Calories, //holds amount calories entered by user.
            Fat_Grams,//holds amount fat grams entered by user.
            Calories_From_Fat, //holds calories from fat value.
            Calories_From_Fat_Percentage; //holds percentage calories from fat.
    
    //Input values
    //intro for user.
    cout << "This program can find the percentage of calories from fat. You\n "
            "must know the amount of calories and fat grams in the food.\n\n";
    cout << "Enter the number of calories: ";
    cin  >> Calories; //get calories.
    cout << "Enter the number of fat grams: ";
    cin  >> Fat_Grams; //get fat grams.
    cout << endl;
    
    
    //Process by mapping inputs to outputs
    //calculate calories from fat.
    Calories_From_Fat = Fat_Grams * 9;
    //calculate calories from fat percentage. 
    Calories_From_Fat_Percentage = (Calories_From_Fat / Calories) * 100;
    
    //Output values
    //allow display of 2 decimal places for accuracy.
    cout << setprecision(2) << fixed;
    //Validate no values less than zero were entered.
    if (Calories < 0 || Fat_Grams < 0) 
        cout << "Calories and/or Fat grams cannot be less than zero.\n"
                "Restart the program and enter your values.";
        //Validate calories from fat is not greater than total calories.  
        else if (Calories_From_Fat > Calories)
                cout << "The number of calories from fat is greater than total\n"
                "calories. Calories and/or Fat grams were incorrectly entered.\n"
                "Restart the program and enter valid values.";
        //display results.
        else    cout << "The percentage of calories form fat is: " 
                     << Calories_From_Fat_Percentage << "%.";
    
    //Exit stage right!
    return 0;
    
}