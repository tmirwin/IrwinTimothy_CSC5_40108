/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 20, 2017, 10:51 PM

 Purpose:   Write a program the generates a random number and asks the user to
            guess what the number is. If the user's guess is higher than the
            random number, the program should display "Too high, try again." If
            the user's guess is lower than the random number, the program 
            should display "Too low, try again." The program should use a loop
            that repeats until the user correctly guesses the random number.
 */

//System Libraries

#include <iostream>
#include <cstdlib> //for rand, srand.
#include <ctime>//for time function.

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
    int RNum;//random number
    int NumG;//user guess
    
    int seed = time(0); //get system time 
    
    
    srand(seed); //seed the random number generator.
    
    //Input values
    cout << "Can you guess the number I am thinking of?\n";
    cin  >> NumG; //get user guess.
    RNum = 1 + rand() % 25; //set random number range so not guessing forever.
    
    //loop to test user guess.
    while (NumG != RNum) //while guess is wrong.
    {
        if(NumG < RNum) //guess too low.
        {
            cout << "Too low, try again.\n";
            cin  >> NumG; //get new guess.
        }
        
        else if (NumG > RNum) //while guess too high.
        {
            cout << "Too high, try again.\n";
            cin  >> NumG; //get new guess.   
        }
       
        if (NumG == RNum) //if guess is correct, end loop and display correct.
        {
            cout << "You guessed the correct number.";
        }
    }        
    

    //Exit stage right!

    return 0;

}
