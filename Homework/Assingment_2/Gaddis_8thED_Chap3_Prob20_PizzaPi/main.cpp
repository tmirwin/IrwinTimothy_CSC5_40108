/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 11, 2017, 6:30 PM
  Purpose:  Joe's Pizza Palace needs a program to calculate the number of 
            slices of pizza of any size can be divided into. The program should
            perform the following steps:
            A) Ask the user for the diameter of the pizza in inches.
            B) Calculate the number of slices that may be taken from a pizza of
               that size.
            C)Display a message telling the number of slices.
            To calculate the number of slices that may be taken from a pizza,
            you must know the following facts:
            1) Each slice should have an are of 14.125 inches.
            2) To calculate the number of slices, simply divide the area of the
               pizza by 14.125.
            #3)The are of the pizza is calculated with Area = Pi(r)^2. 
            Make sure the output displays the number of slices in fixed point 
            notation, rounded to one decimal place of precision.
 */

//System Libraries
#include <iostream>
#include <cmath> //for Pi
#include <iomanip> // for setprecision, fixed.
using namespace std;

//User Libraries

//Global Constants
float const Pi = 3.14159;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float Dia, //Diameter of pizza in inches.
          Area, // Area of the pizza in inches.
          Rad, // Radius.
          SlicAr = 14.125, //Area of one slice.
          Slic; // Number of slices.
    
    //Input values
    cout << "This program will find how many slices you can get out of any\n"
         << "pizza if the diameter is known.\n\n";//intro for user.
    cout << "Please enter the pizza's diameter in inches:";
    cin  >> Dia; //Diameter entered by user
    cout << endl;
    
    //Process by mapping inputs to outputs
    Rad = Dia / 2; //Find the radius for the area equation. 
    Area = Pi * pow(Rad, 2.0); //Find the area. 
    Slic = Area / SlicAr; //calculate number of slices.
    
    //Output values
    cout << setprecision(1) << fixed; //precision at 1 decimal, fixed point notation.
    cout << "You can get " << Slic << " slices out of your pizza";//display results.
    
    //Exit stage right!
    return 0;
}