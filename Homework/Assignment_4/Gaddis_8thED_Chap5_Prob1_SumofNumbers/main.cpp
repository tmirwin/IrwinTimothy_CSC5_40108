/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January , 2017, 8:45 AM
  Purpose: Sum of Numbers
  Write a program that asks the user for a positive integer value. The program
  should use a loop to get the sum of all the integers from 1 up to the number
  entered. For example, if the user enters 50, the loop will find the sum of 
  1, 2, 3,4,... 50.
  Input Validation: Do not accept a negative starting number.
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
    int UsrNum, //holds number entered by user.
        Sum = 0; //holds sum of incremented numbers.
    
    //Input values
    cout << "This program provides the sum of all\n"
            "numbers from 1 to any positive integer.\n"
            "Entered a positive integer here: ";
    cin  >> UsrNum; //get number from user.
    
    //Input Validation
    while (UsrNum < 0) //must be positive.
        {
            cout << "You must enter a positive integer.\n"
                    "Please enter number 1 or greater: ";
            cin  >> UsrNum;
        }
    
    //loop counter starts at 1. Increment until UsrNum reached.
    for (int Count = 1; Count <= UsrNum; Count++)
    {
        Sum += Count; //adds next increment to sum.
    }   
    
    //Output the sum.
    cout << "The sum is " << Sum; 
    
    
    //Exit stage right!
    return 0;
}