/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 11, 2017, 7:30 PM
  Purpose:  Write a program that asks the user for an angle, entered in radians.
            The program should then display the sine, cosine, and tangent of 
            the angle. The output should be displayed in fixed-point notation,
            rounded to four decimal places.
 */

//System Libraries
#include <iostream>
#include <iomanip> //for setpresicion, fixed, setw
#include <cmath> //for sin, cos, tan

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
    float Ang, //angle entered by user.
          Sine, //Sine
          Cosine, //Cosine
          Tangent; //Tangent
    
    //Input values
    cout << "This program can find the sine, cosine, and tangent of an angle "
         << "entered in radians.\n\n"; //intro for user.
    cout << "Please enter an angle in radians:";
    cin  >> Ang;
    cout << endl;
    
    //Process by mapping inputs to outputs
    Sine = sin(Ang); //find sine.
    Cosine = cos(Ang); //find cosine.
    Tangent = tan(Ang); //find tangent.
    
    //Output values
    cout << setprecision(4) << fixed; //set precision to 4 decimal places, fixed
    cout << "sine: " << setw(9) << Sine << endl; //display sin
    cout << "cosine: " << setw(7) << Cosine << endl; //display cos
    cout << "tangent: " << Tangent << endl; //display tan
    
    //Exit stage right!
    return 0;
}