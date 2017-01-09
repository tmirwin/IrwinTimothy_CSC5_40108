/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 3, 2017, 12:15 PM
  Purpose:  Find and display circuit board price after profit.
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
    float Cost = 14.95, //amount it cost to produce q circuit board.
          PercProf = 0.35, //percent profit to be made on each board.
          Profit, //amount of profit made on each board.
          TSale; //total sale price for each board.
            
    //Input values
    
    //Process by mapping inputs to outputs
    Profit = Cost * PercProf; //Calculate the amount of profit on each board.
    TSale = Profit + Cost; //Calculate the total to sell each board with profit.
    
    //Output values
    cout << "Each circuit board must be sold for $" << TSale << " in order "
         << "to make 35% profit.";
    
    //Exit stage right!
    return 0;
}