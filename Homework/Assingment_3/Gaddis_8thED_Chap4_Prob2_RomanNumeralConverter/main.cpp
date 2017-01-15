/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 1:34 PM
  Purpose:  Write a program that asks the user to enter a number within the 
            range of 1 through 10. Use a switch statement to display the Roman
            numeral version of that number. (Input validation: Do not accept a
            number less than 1 or greater than 10.)
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int Num; //holds input number value.
    
    //Input values
    //intro to user and ask for input.
    cout << "This program converts numbers, 1 though 10, into Roman Numerals."
            "\nPlease enter a number between 1 and 10: ";
    cin  >> Num; // get input.
        
    //Process by mapping inputs to outputs
    //evaluate number input and display appropriate results.
    switch (Num)
    {
        case 1 : cout << "The Roman numeral for " << Num << " is I.\n";
                break;
        case 2 : cout << "The Roman numeral for " << Num << " is II.\n";
                break;
        case 3 : cout << "The Roman numeral for " << Num << " is III.\n";
                break;
        case 4 : cout << "The Roman numeral for " << Num << " is IV.\n";
                break;
        case 5 : cout << "The Roman numeral for " << Num << " is V.\n";
                break;
        case 6 : cout << "The Roman numeral for " << Num << " is VI.\n";
                break;
        case 7 : cout << "The Roman numeral for " << Num << " is VII.\n";
                break;
        case 8 : cout << "The Roman numeral for " << Num << " is VIII.\n";
                break;
        case 9 : cout << "The Roman numeral for " << Num << " is IX.\n";
                break;
        case 10 : cout << "The Roman numeral for " << Num << " is X.\n";
                break;
        //input validation
        default: cout << "\nYou did not enter a number between 1 and 10.\n"
                         "Please run the again with a valid number.";
                break;
    }
    //Output values
    
    //Exit stage right!
    return 0;
}