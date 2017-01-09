/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 5, 2017, 6:51 PM
  Purpose:  Calculate total sales tax for state and county rates.
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
    unsigned char TotalSpent = 95; 
    float CountyTaxRate = 0.02, //County tax rate.
          StateTaxRate = 0.04, //State tax rate.
          AmountCountyTax, AmountStateTax, TotalTax; //totals for taxes.
    
    //Input values
    
    //Process by mapping inputs to outputs
    AmountCountyTax = TotalSpent * CountyTaxRate; /*Calculate County tax on
                                                    purchase.*/
    AmountStateTax = TotalSpent * StateTaxRate; /*Calculate state tax on
                                                  purchase.*/
    TotalTax =  AmountCountyTax + AmountStateTax;  /*Calculate total sales
                                                     tax on purchase.*/
    //Output values
    // Display amount of sales tax calculated.
    cout << "The total amount of tax, County and State, on a $";
    cout << TotalSpent << " purchase is $" << TotalTax << ".";
    
    //Exit stage right!
    return 0;
}