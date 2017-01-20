/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 18, 2017, 10:15 PM
  Purpose: Average Rainfall
           Write a program that uses nested loops to collect data and calculate
           average rainfall over a period of years.The program should first ask
           for the number of years. The outer loop will iterate once for every
           year. The inner loop will iterate 12 times, once for each month. 
           Each iteration of the inner loop will ask the user for inches of
           rainfall for that month.
           After all iterations the program should display the number of months,
           total inches of rainfall, and the average rainfall per month for the
           entire period.
           Input Validation: Do not accept a number less than 1 for the number
           of years. Do not accept negative numbers for the monthly rainfall.
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
int main(int argc, char** argv) {
    //Declare Variables
    const int   MONTH = 12;    //months per year = 12.
    
    int         Years = 0;     //holds years input by user.
    int         MonthT;        //holds total months (Years * MONTH)            
    float       Inches = 0.0f; //holds inches of rain input by user.
    float       InchesT = 0.0f;//holds running total for inches.
    float       ARainF = 0.0f; //holds avg. rainfall (InchesT / MonthT).
    
    
    //introduction and Years Input Value.
    cout << "This program will display the number of months, total inches of\n"
            "rainfall, and the average rainfall per month for a user specified\n"
            "number of years.\n";
    cout << "Enter the number of years: ";
    cin  >> Years; //get years.
    
    //validate years input not less than 1.
    while (Years < 1) 
    {   //if invalid entry made display error message.
        cout << "\nERROR: You must enter at least 1 year.\n"
                "Enter the number of years: ";
        cin  >> Years; //reenter years.
    }
    
    //outer loop for years.
    for (int Y = 1; Y <= Years; Y++)
        {
            //inner loop for months.
            for (int M = 1; M <= MONTH; M++)
            {
                //get inches data for each iteration of month.
                cout << "Enter the total rainfall, in inches, for month "
                     << M << ":";
                cin  >> Inches; //get inches rain.
                
                //validate inches not less than 0.
                while (Inches < 0)
                {    //if invalid entry made display error message.
                    cout << "\nYou may not enter negative inches of rain.\n"
                            "Enter the total rainfall, in inches, for "
                         << "month " << M << ":";
                    cin  >> Inches; //reenter inches.
                }
                //add inches to total inches after each increment.
                InchesT += Inches;   
            }
        //calculate total months.
        MonthT = Years * MONTH;
        //calculate average inches per month.
        ARainF = InchesT / MonthT; 
        }
        
    //Output values
    cout << setprecision(2) << showpoint << fixed;
    cout << "The number of months of rainfall was: " << MonthT << ".\n";
    cout << "The total inches of rainfall was: " << InchesT << " inches.\n";
    cout << "The average rainfall per month was: " << ARainF << " inches.\n";
    
    //Exit stage right!
    return 0;
}
