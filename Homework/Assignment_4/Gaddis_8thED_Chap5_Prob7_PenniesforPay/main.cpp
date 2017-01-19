/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 18, 2017, 7:40 PM
  Purpose:  Pennies for Pay
            Write a program that calculates how much a person would earn over
            a period of time if his or her salary is one penny the first day
            and two pennies the second day, and continues to double each day.
            The program should ask the user for the number of days. Display a 
            table showing how much the salary was for each day, and then show
            the total pay at the end of the period. The output should be 
            displayed in a dollar amount, not the number of pennies.
            Input Validation: Do not accept a number less than 1 for the number
            of days worked. 
 */

//System Libraries
#include <iostream>
#include <iomanip>//for format
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
    int     Days_W; //days worked (user entry).
    float   DP = 0.01,//initialize daily pay rate
            TotalP; //total pay.
    
    //Input values
    //Intro with instructions.
    cout << "This program will display the total and daily salary for a\n"
            "specified number of days worked. The rate of pay on day one\n"
            "is 1 penny. the salary will double every day. You must work\n"
            "at least one day.";
    cout << "Enter number of days worked: ";
    cin  >> Days_W; //get days worked.
    
    //validate days worked input
    while (Days_W < 1)
    {   //validation fail,enter new amount.
        cout << "You must work at least on day.\n"
                "Enter number of days worked: ";
    cin  >> Days_W; //get new amount of days.
    }
          
    //set number display format
    cout << setprecision(2) << showpoint << fixed;
    //set up chart label   
    cout << "Day(s)" << "\t\t" << "Daily Salary" << endl;
    cout << "---------------------------------------------------------------\n";
    
    //loop for days worked counter.
    for(int Count = 1; Count <= Days_W; Count++)
	{
        //display daily pay. 
	cout << Count << "\t\t$" << TotalP << endl;
        
        TotalP *= 2; //doubles rate daily.
        
        TotalP += DP; //total Salary = total pay + daily pay.
        }
    
    //Output values
    cout << "---------------------------------------------------------------\n";
    cout << "Total salary:   $" << TotalP << endl; //total salary displayed
    
    //Exit stage right!
    return 0;
}