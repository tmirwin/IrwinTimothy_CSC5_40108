/* 

  File:   main.cpp

  Author: Timothy Irwin

  Created on January 15, 2017, 12:30 PM

  Purpose:  Write a program that asks the user to enter two numbers. The program

            should use the conditional operator to determine which number is the

            smaller and which number is the larger. 
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

int main(int argc, char** argv) {

    //Declare Variables
    int Num1, //holds 1st number input.
        Num2; //holds 2nd number input.

    //Input values
    //Intro to program and instructions.

    cout << "This program asks you to enter 2 different numbers. It will\n";
    cout << "then tell you which number is smaller and which is larger.\n\n";
    cout << "Please enter two different numbers: ";
    cin  >> Num1 >> Num2; //numbers input by user.
    cout << endl;

    //Process by mapping inputs to outputs
    //Output values
    if (Num1 == Num2) //prompt equal numbers to run program again.
        cout << "Your numbers are equal. Please run the program again with two"
                " different values.";

    else //find larger number. and display results.
        cout << "The larger number is: " << (Num1 > Num2 ? Num1 : Num2) 
             << "\nThe smaller number is: " << (Num1 < Num2 ? Num1 : Num2);
   

    //Exit stage right!

    return 0;

}