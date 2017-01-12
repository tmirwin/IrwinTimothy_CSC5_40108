/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 10, 2017, 10:07 PM
  Purpose:  The Yukon Widget Company manufactures widgets that weigh 12.5 pounds
            each. Write a program that calculates how many widgets are stacked
            on a pallet, based on the total weight of the pallet. The program 
            should ask the user how much the pallet weighs by itself and with
            the widgets stacked on it. It should then calculate and display the
            number of widgets stacked on the pallet.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float const WghtW = 12.5; //weight of each widget.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    float Pallet, //weight of the pallet. Able to accept decimals for precision.
          PWW; //Weight of pallet and widgets. Able to accept decimals for precision.
    int   Wquant; /*Number of widgets. Eliminates the decimal because you cant
                   have less than a whole widget.*/  
    //Input values
    cout << "This program will calculate the number of widgets on each pallet "
         << "when provided with the weight of the pallet alone and the weight "
         << "of the pallet with widgets on it.\n" //intro to user.
         << "please enter the weight of the empty pallet: ";
    cin >> Pallet; //weight of pallet.
    cout << endl << "Now enter the weight of the pallet after the filled with "
         << "widgets:";
    cin >> PWW; //Weight of pallet with widgets.
    cout << endl;
    
    //Process by mapping inputs to outputs
    Wquant = (PWW - Pallet)/12.5; //find number of widgets on pallet.
    
    //Output values
    cout << "The amount of widgets on this pallet is:" << Wquant; /*display
                                                    number of widgets to user.*/
    
    //Exit stage right!
    return 0;
}