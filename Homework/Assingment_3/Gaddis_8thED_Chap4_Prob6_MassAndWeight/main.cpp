/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 15, 2017, 4:40 PM
  Purpose:  Scientists measure an objects mass in kilograms and its weight in
            newtons. If you know the amount of mass that an object has, you can
            calculate its weight, in newtons, with the following formula:
                                weight = mass * 9.8
            Write a program that asks the user to enter an object's mass, and
            then calculates and displays its weight. If the objects weighs more
            than 1000 newtons, display a message indication that it is too 
            heavy. If the object weighs less than 10 newtons, display a message
            indicating that the object is too light.
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
    float Weight, //holds Weight value.
          Mass; //holds Mass value.
    
    //Input values
    //Intro for user.
    cout << "This program will determine an objects weight, in newtons,"
            " from it mass.\n\n";
    cout << "Enter the mass on the object: "; //get mass.
    cin  >> Mass;
    
    //Process by mapping inputs to outputs
    Weight = Mass * 9.8; //calculate Weight.
    
    //Output values
    if (Weight < 10) //determine if too light.
    {
        cout << "The object is too light."; //display too light. 
    }
        else
            {
                if (Weight > 1000) //determine if too heavy.
                {
                    cout << "The object is too heavy."; //display too heavy.
                }
                    else
                    {
                        cout << "The weight of your object is: " << Weight 
                        << " newtons."; //if within parameters, display weight.
                    }    
    }
    
        
    //Exit stage right!
    return 0;
}