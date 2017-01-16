/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 16, 2017, 1:45 AM
  Purpose:  The following table shows the approximate speed of sound in air,
            water, and steel.
            Medium                      Speed
            -------------------------------------------------
            Air                         1100 feet per second
            Water                       4900 feet per second
            Steel                       16400 feet per second
            -------------------------------------------------
            Write a program that displays a menu allowing the user to select
            air, water, or steel. After the user has made a selection, he or
            she should be asked to enter a distance a sound wave will travel in
            the selected medium. The program will then display the amount of 
            time it will take. (Round the decimal to four decimal places.)
            (Input Validation: Check that the user has selected one of the 
            available choices from the menu. Do not accept distances less than
            0.)
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float const Air = 1100, //feet traveled per second.
            Water = 4900,//feet traveled per second.
            Steel = 16400;//feet traveled per second.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv)
{
    //Declare Variables
    int  Num, // holds value for menu selection.
         Feet; // holds value for feet entered. 
    
    //Input values
    //Intro and instructions
    cout << "Select one of the following menu numbers to find the amount of\n"
            "time it will take sound to travel inside your chosen medium.\n";
    cout << "1) Air\n"
            "2) Water\n"
            "3) Steel\n";
    //get menu number.
    cin  >> Num;
    cout << "Enter a distance in feet: ";
    //get feet traveled.
    cin  >> Feet;           
    cout << endl;
    
    //Process by mapping inputs to outputs
    
    
    //Output values
    //set to four decimal places.
    cout << setprecision(4) << fixed;
    //verify menu number selected.
    if (Num < 1 || Num > 3)
        cout << Num << " is not a valid choice. Restart the program and enter\n"
                "a listed menu choice.";
        //verify distance greater than zero.
        else if (Feet <= 0)
            cout << "Distance cannot be zero or less. Restart the program and\n"
                "enter a feet value greater than zero.";
        else
            switch (Num)
    {
            //calculate and display results for selected choice.
            case 1: cout << "It will take sound " << Feet / Air << " seconds\n"
                            "to travel " << Feet << " feet through air."; 
            break;
            case 2: cout << "It will take sound " << Feet / Water << " seconds\n"
                            "to travel " << Feet << " feet through water."; 
            break;
            case 3: cout << "It will take sound " << Feet / Steel << " seconds\n"
                            "to travel " << Feet << " feet through steel."; 
            break;
    }       
    //Exit stage right!
    return 0;
}
