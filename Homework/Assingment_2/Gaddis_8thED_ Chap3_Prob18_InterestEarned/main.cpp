/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 11, 2017, 8:05 AM
  Purpose:  Assuming there are no other deposits other than the original 
            investment, the balance in a savings account after one year may be 
            calculated as:
                        Amount = Principle *(1 + (Rate/T))^T
            Principle is the balance in the savings account, Rate is the 
            interest rate, and T is the number of times the interest is
            compounded during a year.
            Write a program that asks for the principle, the interest rate, and
            the number of times interest is compounded. It should display a 
            report similar to:
            Interest Rate:          4.25%
            Times Compounded:         12
            Principle:         $ 1000.00
            Interest:          $   43.34
            Amount in Savings: $ 1043.34
 */

//System Libraries
#include <iostream>
#include <iomanip> //for setprecision, fixed, setw
#include <cmath> //for pow

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv)
{
    //Declare Variables
    float Principal, //amount invested.
          Rate, //interest rate.
          Interest, //interest earned.
          IntRate,  //interest rate in decimal form.
          AinS;//total in savings after year.
    unsigned short T; //times compounded per year.
    
    //Input values
    cout << "This program will ask for the principal, interest rate,\n";
    cout << "and number of times compounded yearly of an investment.\n";
    cout << "It will then calculate the amount of interest earned in\n";
    cout << "one year and your the ending balance.\n\n"; //intro to user.
    
    cout << "Enter your principal:";
    cin  >> Principal; //user enter principle.
    cout << "Now enter the interest rate:";
    cin  >> Rate; //user enter interest rate.
    cout << "Finally enter number of times compounded yearly:";
    cin  >> T; //user enter times compounded per year.
                
    //Process by mapping inputs to outputs
    IntRate = Rate/100; //convert interest rate to decimal form.
    Interest = Principal * pow(1+(IntRate/T), T) - Principal; /* calculate 
                                                                 interest.*/
    AinS = Principal + Interest; /*calculate amount in savings with interest
                                  after one year.*/
    
    //Output values
    //display results for user.
    cout << setprecision(2) << fixed; //set to two decimal places.
    cout << "Interest Rate:" <<  setw(18) << Rate << "%\n"; /*set width wide to
                                                             fit higher values.*/ 
    cout << "Times Compounded:" << setw(15) << T << endl;
    cout << "Principal:" << setw(12) << "$ " << setw(10) << Principal << endl;
    cout << "Interest:" << setw(13) << "$ " << setw(10) << Interest << endl;
    cout << "Amount in Savings:" << setw(4) << "$ " << setw(10) << AinS; 
    
    //Exit stage right!
    return 0;
}

