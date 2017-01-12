/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 10, 2017, 10:37 PM
  Purpose:  Write a program that can be used as a math tutor for a young 
            student. The program should display two random numbers to be added.
            The program should then pause while the student works on the 
            problem. When the student is ready to check the answer, he or she
            can press a key and the program will display the correct solution.
 */

//System Libraries
#include <iostream>
#include <cstdlib> //for rand, srand.
#include <ctime> //for time function.
#include <iomanip> //for setw.

using namespace std;

//User Libraries

//Global Constants
const int Min_Value = 0; //to not allow negative integers.
const int Max_Value = 999; // This is for young students so max three digits.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{   
    //Declare Variables
    unsigned short R1, //random number 1.
                   R2, //random number 2.
                   Answer; // answer to problem.
    
    unsigned seed = time(0); /*get system time to allow different random numbers
                              each time*/
    
    //Input values
    
    //Process by mapping inputs to outputs
    srand(seed); //seed the random number generator.
    
    cout << "This program is a math tutor for addition. Please solve the "
         << "the following problem.\n"; //intro to user.
         
    R1 = (rand() % (Max_Value - Min_Value +1)) + Min_Value; /*set min/max value
                                                             for R1.*/ 
    R2 = (rand() % (Max_Value - Min_Value +1)) + Min_Value; /*set min/max value
                                                             for R2.*/ 
    Answer = R1 + R2; //calculate answer.
    
    //Output values
    cout << setw(4) << R1 << endl; /*display R1. Width to 4 for
                                     alignment*/
    cout << "+" << setw(3) << R2 << endl; /*display R2. Width to 3 for
                                     alignment.*/
    cout << "____" << endl << endl; //separator between problem and answer.
    cout << "Press enter when ready to check your answer.";//prompt to continue.
    cin.get(); //read enter key to continue.
    cout << setw(4) << R1 << endl; //re-display R1 to accompany answer.
    cout << "+" << setw(3) << R2 << endl;//redisplay R2 to accompany answer.
    cout << "____" << endl; //separator between problem and answer.
    cout << setw(4) << Answer; //Display answer. width for alignment.
            
    
    
    //Exit stage right!
    return 0;
}