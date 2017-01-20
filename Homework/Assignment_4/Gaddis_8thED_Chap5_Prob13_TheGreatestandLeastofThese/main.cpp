/* 

  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 10:03 PM

  Purpose: Write a program with a loop that lets the user enter a series of 
           integers. The user should enter -99 to signal the end of the series.
           After all the numbers have been entered, the program should display
           the largest and the smallest numbers entered.
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
    int Num;    //holds integer input.
    int Large;  //holds largest integer.
    int Small;  //holds smallest integer.
    
    //Intro with instructions.
    cout << "Enter as many integers a you like. After you enter your last\n"
            "integer, enter -99. Then the smallest and largest will be\n"
            "displayed.\n\n";
    
    //loop for getting multiple integers.
    do
    {   //input value.
        cout << "Enter an integer: ";
        cin  >> Num; //get integer.
    
        //Process by mapping inputs to outputs
        //*replace smallest number with new input if it is smaller and != -99.
        if (Num <= Small && Num != -99) 
            Small = Num;
        //*replace largest number with new input if it is larger and != -99.
        if (Num >= Large && Num != -99)
            Large = Num;
    }
    while (Num != -99);// entry of -99 stops loop.
      

    //Output values
    cout << "\nThe smallest integer entered was: " << Small << endl;
    cout << "The largest integer entered was:  " << Large;


    //Exit stage right!

    return 0;

}
