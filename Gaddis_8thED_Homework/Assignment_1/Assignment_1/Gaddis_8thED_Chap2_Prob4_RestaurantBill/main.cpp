/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 5, 2017, 7:28 PM
  Purpose:  Find tax, tip amount after tax and meal cost are totaled, and total
            bill. Then display meal cost, tax amount, tip amount, and total
            bill.  
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
    float MealCost = 88.67, //cost of meal.
          Tax = 0.0675, //tax rate.
          TipRate = 0.20, //tip rate.
          TaxTotal, TipTotal, //totals for taxes, tip.
          CstMlWTax, TotalBill; //cost of meal with tax, total bill.
    
    //Input values
    
    //Process by mapping inputs to outputs
    TaxTotal = MealCost * Tax; //amount of tax to be paid.
    CstMlWTax = MealCost + TaxTotal; //cost of meal with tax included.
    TipTotal = CstMlWTax * TipRate; //cost of 20% tax.
    TotalBill = CstMlWTax + TipTotal; //cost of meal, tax, and tip (total).
    
    //Output values
    //Display meal cost, tax, tip, and total bill.
    cout << "Meal cost: $" << MealCost << endl
         << "Tax paid: $" << TaxTotal << endl
         << "20% tip: $" << TipTotal << endl
         << "Total bill: $" << TotalBill << endl;
    
    //Exit stage right!
    return 0;
}