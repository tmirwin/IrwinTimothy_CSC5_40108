/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 18, 2017, 2:55 PM
  Purpose:  Assuming the ocean's level is currently rising about 1.5 millimeters
            per year, Write a program that displays a table showing the number 
            of millimeters that the ocean will have risen each year for the next
            25 year.
 */

//System Libraries
#include <iostream>
#include <iomanip> //Format
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
    const int   MIN_NUM = 1, //Beginning number of years.
                MAX_NUM = 25; //Maximum number of years.
    float       Mil = 1.5;
    int         Num = MIN_NUM; // for the counter.
        
    //table title.
    cout << "Year\tMillimeters\n";
    cout << "--------------------\n";
    
    //table formating.    
    cout << setprecision(1) << showpoint << fixed; 
    //loop for each year.
    while (Num <= MAX_NUM) 
    {
        //output values
        cout << Num << "\t" << (Num * Mil) << endl;
        Num++;
    }
    
    //Exit stage right!
    return 0;
}