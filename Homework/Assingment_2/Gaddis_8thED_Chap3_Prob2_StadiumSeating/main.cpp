/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 10, 2017, 5:30 PM
  Purpose:  There are three seating categories at a stadium. For a softball game
            , Class A seats cost $15, Class B seats cost $12, Class C seats cost
            $9. Write a program that asks how many tickets for each class of
            seats were sold, then displays the amount of income generated from
            ticket sales. Format your dollar amount in fixed-point notation,
            with two decimal places of precision, and be sure the decimal point
            is always displayed. 
  */

//System Libraries
#include <iostream>
#include <iomanip> //for setprecision, fixed.
using namespace std;

//User Libraries

//Global Constants
float a = 15.00, //cost of Class A seat.
      b = 12.00, //cost of Class B seat.
      c = 9.00;  //cost of Class C seat.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    short Class_A, //number Class A seats sold.
          Class_B, //number Class B seats sold.
          Class_C; //number Class C seats sold.
    float Class_A_Inc, //Income from Class A seats.
          Class_B_Inc, //Income from Class B seats.
          Class_C_Inc, //Income from Class C seats.
          Income; //total income from ticket sales.
            
    //Input values
    //Ask for how many of each seat sold.
    cout << "How many Class A seats were sold:";
    cin >> Class_A;
    cout << "How many Class B seats were sold:";
    cin >> Class_B;
    cout << "How many Class C seats were sold:";
    cin >> Class_C;
    
    //Process by mapping inputs to outputs
    Class_A_Inc = Class_A * a; //find income for Class A seats.
    Class_B_Inc = Class_B * b; //find income for Class B seats.
    Class_C_Inc = Class_C * c; //find income for Class C seats.
    
    Income = Class_A_Inc + Class_B_Inc + Class_C_Inc; /*find total income from
                                                       all ticket sales*/
    
    //Output values
    cout << setprecision(2) << fixed;
    cout << "Income from all classes of ticket sales is: $" << Income << endl;
    
    //Exit stage right!
    return 0;
}