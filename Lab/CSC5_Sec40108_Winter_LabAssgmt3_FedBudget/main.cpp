/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 12, 2017, 5:30 PM
  Purpose:  Write a program to calculate the percentage of the federal budget
            that the Military and NASA are funded.  You might be surprised.
            Here are your references to use for 2016
            3.54 Trillion      US total spending
            $580 Billion       Military Budget 
            18.5 Billion       NASA Budget 
*/

//System Libraries
#include <iostream>
#include <iomanip> // for setprecision, fixed

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
    float US_Spend = 3.54E12, //total US spending in scientific notation.
          M_B = 5.8E11, //total military budget in scientific notation.
          N_B = 1.85E10, //total NASA budget in scientific notation.
          PMB,  //percentage military budget.
          PNB;  //percentage NASA budget.
    
    //Input values
    
    //Process by mapping inputs to outputs
    PMB = (M_B / US_Spend) * 100; //Find percent of budget for military.
    PNB = (N_B / US_Spend) * 100; //Find percent of budget for NASA.
    
    //Output values
    cout << setprecision(2) << fixed;
    cout << "Military is currently alloted " << PMB << "% of the US Budget.\n";
    cout << "NASA is currently alloted " << PNB << "% of the US Budget.";
    
    //Exit stage right!
    return 0;
}