/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 5, 2017, 12:15 PM
  Purpose:  To predict portion of total company sales in a year from East Coast 
            division.
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
int main(int argc, char** argv) {
    //Declare Variables
    float Percent_Sales = 0.58; //percent sales for East Coast Div.
    unsigned int Total_Sales = 8600000, //total amount of company sales.
        ECD_Sales; // East Coast Division's portion of sales. 
        
    //Input values
        
    //Process by mapping inputs to outputs
    ECD_Sales = Total_Sales * Percent_Sales; /*Calculation East Coast Division
                                                portion of total sales.*/
    
    //Output values
    /*Display the amount, in dollars, that East Coast Division
      contributed during the year of company sales*/  
    cout << "Out of $8.6 million, East Coast division generated $" 
         << ECD_Sales << " of the company's total sales.";
    

    //Exit stage right!
    return 0;
}