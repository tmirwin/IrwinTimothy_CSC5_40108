/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 11, 2017, 3:25 PM
  Purpose:  The monthly payment on a loan may be calculated by the following
            formula: Amount = [(Rate * (1 + Rate)^N) / ((1 + Rate)^N - 1)]* L
            Rate is the monthly interest rate, which is the annual interest rate
            divided by 12. N is the number of payments, and L is the amount of
            the loan. Write a program that asks for these values and displays a
            report similar to:
                                Loan Amount:             $ 10000.00
                                Monthly Interest Rate:           1%
                                Number of Payments:              36
                                Monthly Payment:         $   332.14
                                Amount Paid Back:        $ 11957.15
                                Interest Paid:           $  1957.15
*/

//System Libraries
#include <iostream>
#include <iomanip> //for setw, setprecision, fixed.
#include <cmath> //for pow.

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
    float Rate, //Monthly interest rate.
          L, //Loan amount.
          Mnth_Paymnt,//Amount paid every month.
          Amt_Pd_Bck, //Total amount paid over the course of the loan.
          Int_Pd, //Total paid in interest.
          IntDec; // convert rate to decimal form.
    short N; //Number of payments.
           
    //Input values
    cout << "This program can help the user understand many important pieces\n"
         << "of information regarding a loan. You will need to input the\n"
         << "monthly interest rate, number of payments, and loan amount.\n\n";
         //intro to user.
    cout << "Please enter the monthly interest rate: ";
    cin  >> Rate; //Monthly interest rate entered by user.
    cout << "Now enter the number of payments: ";
    cin  >> N; //Number of payments entered by user.
    cout << "Last enter the loan amount: ";
    cin  >> L; //Loan amount entered by user.
    cout << endl;
    
    //Process by mapping inputs to outputs
    IntDec = Rate / 100; //convert interest rate to decimal form.
    Mnth_Paymnt = ((IntDec * pow(1 + IntDec, N)) / (pow(1 + IntDec, N) - 1))* L;
    //Calculate the monthly payment.
    Amt_Pd_Bck = Mnth_Paymnt * N; //Total paid to lender for loan and interest.
    Int_Pd = Amt_Pd_Bck - L; //Interest paid during course of loan.
    
    //Output values
    cout << setprecision(2) << fixed; //set to to decimal places.
    //Display results to user.
    cout << "Loan Amount:" << setw(13) << "$" << setw(10) << L << endl;
    cout << "Monthly Interest Rate:" << setw(13) << Rate << "%" << endl;
    cout << "Number of Payments:" << setw(16) << N << endl;
    cout << "Monthly Payment:" << setw(9) << "$" << setw(10) << Mnth_Paymnt 
         << endl;
    cout << "Amount Paid Back:" << setw(8) << "$" << setw(10) << Amt_Pd_Bck 
         << endl;
    cout << "Interest Paid:" << setw(11) << "$" << setw(10) << Int_Pd;
    
    //Exit stage right!
    return 0;
}