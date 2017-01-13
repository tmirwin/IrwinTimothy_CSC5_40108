/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 13, 2017, 7:35 AM
  Purpose:  Calculate the Debt per person given the following years.
            Here are your references to use
            Population 2008  -> 304 Million
            Population 2016  -> 322 Million

            Federal Debt as of  2008  ->  9.7 Trillion
            Federal Debt as of  2016  ->   20 Trillion
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float Pop_2008 = 3.04E8,
          Pop_2016 = 3.22E8,
          FD_2008 = 9.7E12,
          FD_2016 = 2.0E13,
          DPP_2008,
          DPP_2016;
    
    //Input values
    
    //Process by mapping inputs to outputs
    DPP_2008 = FD_2008 / Pop_2008;
    DPP_2016 = FD_2016 / Pop_2016;
    
    //Output values
    cout << setprecision(2) << fixed;
    cout << "The debt per person, in the US, in 2008 was $" 
         << DPP_2008 << ".\n";
    cout << "The debt per person, in the US, in 2016 was $" 
         << DPP_2016 << ".\n";
    
    //Exit stage right!
    return 0;
}