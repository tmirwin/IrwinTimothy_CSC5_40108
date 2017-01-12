/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 10, 2017, 7:45 PM
  Purpose:  Write a program that calculates the average rainfall for three
            months. The program should ask the user to enter the name of each
            month, such as June or July, and the amount of rain (in inches)that 
            fell each month. The program should display a message similar to the
            following: The average rainfall for June, July, and August is 6.72
            inches.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip> //for setprecision, fixed.
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
    string Month1,//1st month input by user.
           Month2,//2nd month input by user.
           Month3;//3rd month input by user.
    float First_Month_Rain,//1st month rainfall in inches. input by user.
          Second_Month_Rain,//2nd month rainfall in inches. input by user.
          Third_Month_Rain,//3rd month rainfall in inches. input by user.
          Average_Rainfall;//Average of rainfall for all months.
    
    //Input values
    cout << "This program will calculate the average rainfall for three"
         << " user chosen months.\n\n"; //user intro.
    cout << "Please enter the name of your first month:"; //input 1st month
    cin  >> Month1;
    cout << "Now enter the amount of rainfall for " << Month1 << " in inches.";//get rainfall in inches for input month.
    cin  >> First_Month_Rain;
    cout << endl;
    cout << "Please enter the name of your second month:"; //input 2nd month
    cin  >> Month2;
    cout << "Now enter the amount of rainfall for " << Month2 << " in inches."; //get rainfall in inches for input month.
    cin  >> Second_Month_Rain;
    cout << endl;
    cout << "Please enter the name of your third month:"; //input 3rd month
    cin  >> Month3;
    cout << "Now enter the amount of rainfall for " << Month3 << " in inches."; //get rainfall in inches for input month.
    cin  >> Third_Month_Rain;
    cout << endl;
    
    //Process by mapping inputs to outputs
    
    Average_Rainfall = (First_Month_Rain + Second_Month_Rain + Third_Month_Rain)
                        /3; //find average rainfall.
    
    //Output values
    cout << setprecision(2) << fixed; //set to two decimal places.
    cout << "The average rainfall for " << Month1 << ", " << Month2 << ", and "
         << Month3 << " is " << Average_Rainfall << " inches."; //display avg.
            
    //Exit stage right!
    return 0;
}