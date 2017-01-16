/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 15, 2017, 7:40 PM
  Purpose:  A software company sells a package that retails for $99. Quantity
            Quantity discounts are given according to the following table:
                    10-19   20%
                    20-49   30%
                    50-99   40%
                    100+    50%
            Write a program that asks for the number of units sold and computes
            the total cost of the purchase. (input validation: Make sure the 
            number of units is greater than 0.)
 */

//System Libraries
#include <iostream>
#include <iomanip> //for setprecision, fixed.
using namespace std;

//User Libraries

//Global Constants
float const Unit_Cost = 99.00; //unit cost.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int   Number_Purchased; //holds number purchased input by user.
    float Cost_Units_Purchased; //holds value for cost of all units purchased.
           
          
    
    //Input values
    cout << "This program informs you of the total cost of your software\n"
            "purchase after qualifying discounts (based on number of units\n"
            "purchased) are applied.\n\n";
    cout << "Enter the number of units you will purchase: ";
    cin  >> Number_Purchased;
    
    //Process by mapping inputs to outputs
    //find cost of units purchased.
    Cost_Units_Purchased = Number_Purchased * Unit_Cost;
    
    //Output values
    cout << setprecision(2) << fixed; //display two decimal points.
    if (Number_Purchased < 1) //validated greater than zero.
        cout << "You must purchase a minimum of 1 unit. Please restart the\n"
                "program to make a purchase.";
        /*select option based on number entered. find total cost and display to
          user*/
        else if (Number_Purchased < 10)
            cout << "Total cost is: $" << Cost_Units_Purchased;
        else if (Number_Purchased >= 10 && Number_Purchased <= 19)
            cout << "Total cost is: $"  
                 << (Cost_Units_Purchased -= (Cost_Units_Purchased * 0.20));
        else if (Number_Purchased >= 20 && Number_Purchased <= 49)
            cout << "Total cost is: $"  
                 << (Cost_Units_Purchased -= (Cost_Units_Purchased * 0.30));
        else if (Number_Purchased >= 50 && Number_Purchased <= 99)
            cout << "Total cost is: $" << 
                    (Cost_Units_Purchased -= (Cost_Units_Purchased * 0.40));
        else if (Number_Purchased >= 100)
            cout << "Total cost is: $" << 
                    (Cost_Units_Purchased -= (Cost_Units_Purchased * 0.50));
    
    //Exit stage right!
    return 0;
}