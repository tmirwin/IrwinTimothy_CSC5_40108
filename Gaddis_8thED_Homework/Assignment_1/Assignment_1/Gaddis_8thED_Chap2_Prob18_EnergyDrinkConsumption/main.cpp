/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 6, 2017, 10:10 PM
  Purpose:  Display results of survey on energy drinks.
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
    unsigned short PSurvyd = 16500, //Number of people surveyed.
        N1plus,//Number of those surveyed that purchase 1 or more per week.
        NPCit;//Number of those surveyed that prefer citrus flavored.    
    float P1plus = 0.15,//percent that purchase one or more per week.
          PCit = 0.58;//percent that prefer citrus flavored.
          
    //Input values
    
    //Process by mapping inputs to outputs
    N1plus = PSurvyd * P1plus; // find number of one drink plus people.
    NPCit = N1plus * PCit; // find number that prefer citrus flavor.
    
    //Output values
    cout << "The approximate number of surveyed individuals that purchased one"
         << " or more energy drinks per week is " << N1plus << ".\n"
         << "Out of the individuals that purchased one or more energy drinks "
         << "per week, " << NPCit << " preferred citrus flavors.\n";  
    
    //Exit stage right!
    return 0;
}