/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 6, 2017, 6:15 PM
  Purpose:  Template to be used in all programming
            projects!
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
    unsigned short Shares = 750; //quantity of shares purchased.
    float DlrPrSh = 35.00, //Cost per share.
          PrcntCom = 0.02, //percent commission on sale to stockbroker.
          TCSrs, //total cost of shares.
          CommPd, //Commission paid.
          TCostTran; //Total cost of transaction.
    
    //Input values
    
    //Process by mapping inputs to outputs
    TCSrs = Shares * DlrPrSh; //find cost of shares.
    CommPd = TCSrs * PrcntCom; //find cost of commission.
    TCostTran = TCSrs + CommPd; // find total transaction cost.
    
    //Output values
    //Display amount for stock, amount of commission, and total.
    cout << "The amount paid for " << Shares << " shares of stock is $" << TCSrs 
         << ".\n"
         << "Amount of commission to be paid is $" << CommPd << ".\n"
         << "Total cost of transaction is $" << TCostTran << ".\n";
    
    //Exit stage right!
    return 0;
}