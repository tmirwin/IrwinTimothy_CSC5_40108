/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 15, 2017, 8:53 PM
  Purpose:  The fast Freight Shipping Company charges the following rates:
            Weight(in kg.)                   Rate per 500 Miles Shipped
           -------------------------------------------------------------
           2kg or less                                  $1.10
           Over 2kg but not more than 6kg               $2.20
           Over 6kg but not more than 10kg              $3.70
           Over 10kg but not more than 20kg             $4.80
           -------------------------------------------------------------
           Write a program that asks for the weight of the package and the
           distance it is to be shipped, and then displays the charges.
           (Input Validation: So not accept values of 0 or less for the weight
            of the package. Do not accept of more that 20kg. Do not accept 
            distances of less than 10 miles or more than 3000 miles.)
 */

//System Libraries
#include <iostream>
#include <iomanip> //for setprecision, fixed.
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    float   Weight, //holds value for weight entered by user.
            Tier1 = 1.10, //cost > 0 to 2kg. 
            Tier2 = 2.20, //cost > 2 to 6kg.
            Tier3 = 3.70, //cost > 6 to 10kg.
            Tier4 = 4.80; //cost > 10 to 20kg.
            
    int     Distance;//holds value for mile shipped.
    
    //Input values
    // intro for user.
    cout << "This program will tell how much it will cost to ship a package\n"
            "based on weight and distance to be shipped.\n\n";
            
    cout << "Enter weight in kilograms: ";
    cin  >> Weight; //get weight.
    cout << "Enter distance in miles: ";
    cin  >> Distance;//get distance.
    cout << endl;
    
    //Process by mapping inputs to outputs
    //Output values
    cout << setprecision(2) << fixed; //display two decimal points.
    if (Weight <= 0 || Weight > 20) //validate min/max weight.
            cout << "Error: The weight must be greater than 0 and less than\n"
                    "       20kg.\n";
    else if (Distance < 10 || Distance > 3000) //validate min/max miles.
        cout << "Error: Minimum shipping distance is 10 miles. Maximum\n"
                "       shipping distance is 3000 miles.\n";
        //determine range, calculate and output cost.     
        else if (Weight >= 0 && Weight < 2)
                   cout << "The cost to ship your package is: $" 
                        << Tier1 *(Distance / 500) << ".";    
        else if (Weight >= 2 && Weight < 6)
                   cout << "The cost to ship your package is: $" 
                        << Tier2 *(Distance / 500) << ".";   
        else if (Weight >= 6 && Weight < 10)
                   cout << "The cost to ship your package is: $" 
                        << Tier3 *(Distance / 500) << ".";  
        else if (Weight >= 10 && Weight < 20)
                   cout << "The cost to ship your package is: $" 
                         << Tier4 *(Distance / 500) << ".";      
    //Exit stage right!
    return 0;
}