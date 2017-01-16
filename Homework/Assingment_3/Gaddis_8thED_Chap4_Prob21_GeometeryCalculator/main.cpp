/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 16, 2017, 10:20 AM
  Purpose:  Write a program that displays the following menu:
            Geometry Calculator
            1) Calculate the Area of a Circle.
            2) Calculate the Area of a Rectangle.
            3) Calculate the Area of a Triangle.
            4) Quit.
            Enter your choice (1-4):
            If the user enters 1, The program should ask for the radius of the
            circle and then display its area. Use the following formula:
                        Area = pi(r)^2
            Use 3.14159 for pi and the radius of the circle for r. If the user
            enters, the program should ask for length and width of the rectangle
            and then display the rectangle's area. Use the following formula:
                        Area = length * width
            If the user enters 3 the program should ask for the length of the
            triangle's base and its height, and then display its area. use the
            following formula:
                        Area = base * height * 0.5
            4) If the user enters 4, the program should end.
            (Input Validation: Display an error message if the user enters a
            number outside the range of 1 through four when selecting an item
            from the menu. Do not accept negative values for the circle's
            radius, the rectangle's length or width, or the triangle base or
            height.)
 */

//System Libraries
#include <iostream>
#include <cmath> //for pow.
using namespace std;

//User Libraries

//Global Constants
float const Pi = 3.14159; //holds constant value for pi.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
   unsigned short   Rad, //holds radius value.
                    Len, //holds length value.
                    Wid, //holds width value.
                    Bas, //holds base value.
                    Hei, //holds height value.
                    Num; //holds number select.
    
    //Input values
    // display menu and prompt tp select choice.
    cout << "Geometric Calculator\n\n";
    cout << "1) Calculate the Area of a Circle.\n";
    cout << "2) Calculate the Area of a Rectangle.\n";
    cout << "3) Calculate the Area of a Triangle.\n";
    cout << "4) Quit.\n\n";
    cout << "Enter your choice (1-4): \n";
    //get selection.
    cin  >> Num;
    
    //Process by mapping inputs to outputs
    //Output values
    //validate selection was on menu. if not display error message.
    if (Num < 1 || Num > 4)
        cout << "Error: " << Num << " is not a choice on the menu.\n"
                "Restart the program and try again.";
        //menu item 1) selected.        
        else if (Num == 1)
        {
            //ask for dimensions. 
            cout << "Enter the radius of the circle: ";
            //get dimensions.
            cin  >> Rad;
                /*validate dimensions are not less than or equal to 0. if not
                  valid display error message.*/
                if (Rad <= 0)
                {  
                cout << "You must enter a radius greater than 0.\n"
                        "Restart the program and try again."; 
                }
        //calculate and display result to user.
        else
            cout << "The area of a circle with radius " << Rad
                 << " is " << Pi*pow(Rad, 2.0) << ".";
        }
        //menu item 2) selected.    
        else if (Num == 2)
        {
            //get dimensions.
            cout << "Enter the length of the rectangle: ";
            cin  >> Len;
            cout << "Enter the width of the rectangle: ";
            cin  >> Wid;
            /*validate dimensions are not less than or equal to 0. if not
              valid display error message.*/
            if (Len <= 0 || Wid <= 0)
             {
                cout << "You must enter a length and a width greater than 0.\n"
                        "Restart the program and try again."; 
             }
        //calculate and display result to user.
        else
            cout << "The area of a rectangle with length " << Len << ", and "
                    "width " << Wid << ", is " << Len * Wid << ".";
        }
        //menu item 3) selected.        
        else if (Num == 3)
        {
            //get dimensions.
            cout << "Enter the base of the triangle: ";
            cin  >> Bas;
            cout << "Enter the height of the triangle: ";
            cin  >> Hei;
            /*validate dimensions are not less than or equal to 0. if not
              valid display error message.*/
            if (Bas <= 0 || Hei <= 0)
             {
                cout << "You must enter a base and a height greater than 0.\n"
                        "Restart the program and try again."; 
             }
        //calculate and display result to user.
        else
            cout << "The area of a rectangle with base " << Bas << ", and "
                    "height " << Hei << ", is " << (Bas * Hei) * 0.50 << ".";
        }     
        //menu item 4) selected.     
        else if (Num == 4)
        {
            //say goodbye.
            cout << "You choose to quit. Have a nice day.\n";                     
        }          
        
    //Exit stage right!
    return 0;
}