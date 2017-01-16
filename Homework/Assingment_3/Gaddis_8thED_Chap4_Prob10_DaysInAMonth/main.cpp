/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 15, 2017, 5:33 PM
  Purpose:  Write a program that asks the user to enter the month (1-12) and 
            the year. The program should then display the number of days in 
            that month. Use the following criteria to identify leap years:
            1) Determine whether the year is divisible by 100. if it is, then 
               it is a leap year if and only if it is divisible by 400.
            2) If the year is not divisible by 100, then it is a leap year if 
               and only if it is divisible by 4. 
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
    unsigned short  Feb,
                    Year,
                    Month;
    
    //Input values
    cout << "To find out the number of days in a specific month, enter the \n"
            "month and the year when prompted.\n\n";
    
    cout << "Enter a month (1-12): ";
    cin  >> Month;
    cout << "Enter a year: ";
    cin  >> Year;
    
    //Process by mapping inputs to outputs
    //Output values
    if (Month < 1 || Month > 12)
        cout << Month << " is not a valid month. Start the program over and"
                         " enter a month between 1 and 12: ";
    
        switch (Month)
    {
        case 1: cout << "31 Days.";
        break;
        case 2: if (Year % 100 == 0 && Year % 400 == 0)
                    cout << "29 Days.";
                else if (Year % 100 != 0 && Year % 4 == 0)
                    cout << "29 Days.";
                else 
                    cout << "28 Days.";
        break;
        case 3: cout << "31 Days.";
        break;
        case 4: cout << "30 Days.";
        break;
        case 5: cout << "31 Days.";
        break;
        case 6: cout << "30 Days.";
        break;
        case 7: cout << "31 Days.";
        break;
        case 8: cout << "31 Days.";
        break;
        case 9: cout << "30 Days.";
        break;
        case 10: cout << "31 Days.";
        break;
        case 11: cout << "30 Days.";
        break;
        case 12: cout << "31 Days.";
        break;
        }
               
    //Exit stage right!
    return 0;
}