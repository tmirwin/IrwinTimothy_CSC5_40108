/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 6, 2017, 2:15 PM
  Purpose:  To calculate annual pay.
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
    unsigned short payAmount = 2200.0, //amount payed every 2 week.
        payPeriods = 26, //number of pay periods per year.
        annualPay; //total amount of pay per year.
   
    //Input values
    
    //Process by mapping inputs to outputs
    //Calculate annual pay amount.
    annualPay = payAmount * payPeriods; //calculate annual pay.
    
    //Output values
    //Display annual pay.
    cout << "Your total annual pay is $" << annualPay << endl;
    
    //Exit stage right!
    return 0;
}