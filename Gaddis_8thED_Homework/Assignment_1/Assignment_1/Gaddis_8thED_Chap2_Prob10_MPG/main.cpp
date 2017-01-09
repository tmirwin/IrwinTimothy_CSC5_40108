/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 4:55 PM
  Purpose:  Determine a vehicles miles per gallon.
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
    unsigned short Gallons = 15, //gallons of gas in car
        Miles = 375, //how far the car can travel with current amount of gas.
        MPG; //Miles Per Gallon.
    
    //Input values
    
    //Process by mapping inputs to outputs
    MPG = Miles / Gallons; //Calculate Miles Per Gallon.
    
    //Output values
    //Display MPG for user.
    cout << "The car being driven is able to drive " << MPG
         << " miles for every gallon of gas consumed.";
            
    //Exit stage right!
    return 0;
}