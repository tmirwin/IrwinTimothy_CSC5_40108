/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 11, 2017, 8:15 PM
  Purpose:  Last month Joe purchased some stock in Acme Software, Inc. Here are
            the details of the purchase:
            1) The number of shares that Joe purchased was 1000.
            2) When Joe purchased the stock, he paid $45.50 per share.
            3) Joe paid his stockbroker a commission that amounted to 2% of the
               amount he paid for the stock. 
            Two weeks later Joe sold the stock. Here are the details of the sale:
            1) The number of shares that hoe sold was 1000.
            2) He sold the stock for $56.90 per share.
            3) He paid his stockbroker another commission that amounted to 2% of
               the amount he received for the stock.
            
            Write a program that displays the following information:
            1) The amount of money that Joe paid for the stock.
            2) The amount of commission Joe paid his broker when he bought the 
               stock.
            3) The amount Joe sold the stock for.
            4) The amount of commission Joe paid his broker when he sold the 
               stock.
            5) Display the amount of profit that Joe made after selling his 
               stock and paying the two commissions to his broker.  
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
    int   Stck_Pur = 1000, // quantity purchased.
          Stck_Sol = 1000; // quantity sold.
    float Each_Bt = 45.50, //price when purchased.
          Com_At_Pur, //amount of commission paid at purchase.
          Each_Sd = 56.90, //price of each stack when sold.
          Brkr_Rt = 2, //Broker rate for purchased and sold.
          Dec_Brkr_Rt, //Broker rate in decimal notation.
          Amnt_Pd, // amount paid at purchase for stock. 
          Amnt_Rc, //amount received at sale for stock.
          Com_At_Sale, //amount of commission paid at sale.
          Prof; //Profit from all transactions.
    
    //Input values
    
    //Process by mapping inputs to outputs
    Dec_Brkr_Rt = Brkr_Rt / 100; //convert rat to decimal notation.
    Amnt_Pd = Each_Bt * Stck_Pur; //amount paid for stock.
    Com_At_Pur = Amnt_Pd * Dec_Brkr_Rt; //amount of commission paid at purchase.
    Amnt_Rc = Each_Sd * Stck_Sol; //Amount received from sale.
    Com_At_Sale = Amnt_Rc * Dec_Brkr_Rt; //commission paid at sale.
    Prof = (Amnt_Rc - Com_At_Sale) - (Amnt_Pd + Com_At_Pur); // profit.
    
    //Output values
    cout << setprecision(2) << fixed; // set to 2 decimal points, fixed notation.
    //display results with widths aligned for easier reading. 
    cout << "Amount paid for " << Stck_Pur << " shares:" << setw(8) << "$" 
         << setw(9) << Amnt_Pd << endl;
    cout << "Commission paid at purchase:" << setw(8) <<"$" << setw(9) 
         << Com_At_Pur << endl;
    cout << "Amount received for " << Stck_Sol << " shares:" << setw(4) << "$" 
         << setw(9) << Amnt_Rc << endl;
    cout << "Commission paid at sale:" << setw(12) << "$" << setw(9)
         << Com_At_Sale << endl;
    cout << "The amount of profit was:" << setw(11) << "$" << setw(9) << Prof;
    
    //Exit stage right!
    return 0;
}