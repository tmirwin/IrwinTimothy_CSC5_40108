/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 15, 2017, 3:50 PM
  Purpose:  The area of a rectangle is the rectangle's length times it's width.
            Write a program that asks for length and width of two rectangles.
            The program should tell the user which rectangle has the greater
            area, or if the areas are the same.
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
    int Rec1L, //holds rectangle 1 length.
        Rec1W, //holds rectangle 1 length.
        Rec2L, //holds rectangle 1 length.
        Rec2W, //holds rectangle 1 length.
        Area1,
        Area2;
    
    //Input values
    //user intro.
    cout << "This program will find the area of two different rectangles.\n"
            "It will then tell you which rectangle's area is greater or\n"
            "if they are equal.\n\n";
    
    //get values for rectangle 1.
    cout << "Enter the length for rectangle 1: ";
    cin  >> Rec1L;
    cout << "Enter the width for rectangle 1: ";
    cin  >> Rec1W;
    
    //get values for rectangle 2.
    cout << "Enter the length for rectangle 2: ";
    cin  >> Rec2L;        
    cout << "Enter the length for rectangle 2: ";
    cin  >> Rec2W;
    cout << endl;
    
    //Process by mapping inputs to outputs
    //find area for rectangles.
    Area1 = Rec1L * Rec1W;
    Area2 = Rec2L * Rec2W;
    
    //Output values
    //evaluate which rectangle has great area and display results.
    if (Area1 == Area2)
        cout << "Both rectangles have the same area.";
   
    else
        cout << "The rectangle with the greatest area is "
             << (Area1 > Area2 ? "Rectangle 1" : "Rectangle 2");
    
    //Exit stage right!
    return 0;
}