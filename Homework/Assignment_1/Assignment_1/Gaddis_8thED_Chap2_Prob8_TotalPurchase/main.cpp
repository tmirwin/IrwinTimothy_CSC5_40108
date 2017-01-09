/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 6, 2017, 2:45 PM
  Purpose:  Calculate total purchase amount with sales tax.
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
    float Item1 = 15.95,//Cost of 1st item.
          Item2 = 24.95,//Cost of 2nd item.
          Item3 = 6.95, //Cost of 3rd item.
          Item4 = 12.95,//Cost of 4th item.
          Item5 = 3.95, //Cost of 5th item.
          Tax = 0.07,   //7% sales tax.
          Subtotal,     //cost of all 5 items.
          SalesTax,     //amount of sales tax to be paid.
          Total;        //Total amount to be paid. 
    
    //Input values
    
    //Process by mapping inputs to outputs
    Subtotal = Item1 + Item2 + Item3 + Item4 + Item5; //total for all items.
    SalesTax = Subtotal * Tax; //find amount of sales tax.
    Total = Subtotal + SalesTax; //total due upon receipt.
     
    //Output values
    //Display all values.
    cout << "Item 1:    $" << Item1 << endl
         << "Item 2:    $" << Item2 << endl
         << "Item 3:    $" << Item3 << endl
         << "Item 4:    $" << Item4 << endl
         << "Item 5:    $" << Item5 << endl << endl
         << "Subtotal:  $" << Subtotal << endl
         << "Sales Tax: $" << SalesTax << endl
         << "Total:     $" << Total << endl;
    
    //Exit stage right!
    return 0;
}