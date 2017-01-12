/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 10, 2017, 10:30 PM
  Purpose:  Write a program that plays a word game with the user. The program
            should ask the user the enter the following:
            1) His or her name.
            2) His or her age.
            3) THe name of a city.
            4) The name of a college.
            5) A profession.
            6) A type of animal.
            7) A pet's name.
            After the user has entered these items, the program should display
            a story, inserting the user's input into the appropriate locations.
 */

//System Libraries
#include <iostream>
#include <string> 

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
    string   Name, //name entered
             City, // city entered
             College, //college entered
             Profession, //profession entered
             Ty_Animal, //animal type entered
             Na_Pet; //pet name entered
    int      Age; // age entered.
    
    //Input values
    cout << "This program will create a story using your answers to some"
         << " questions.\n"; //intro for user
    cout << "What is you name?"; //collect user input
    getline(cin, Name); // allow white space in string.                             
    cout << "What is your age?";
    cin  >> Age;
    cout << "Enter the name of a city:";
    getline(cin, City); // allow white space in string.
    cout << "Enter the name of a college:";
    getline(cin, College); // allow white space in string.
    cout << "Enter a profession:";
    getline(cin, Profession); // allow white space in string. 
    cout << "Enter a type of animal:";
    getline(cin, Ty_Animal); // allow white space in string.
    cout << "Enter a pet's name:";
    getline(cin, Na_Pet); // allow white space in string.
    cout << endl;
    
    //Process by mapping inputs to outputs
    
    //Output values
    /*display results for user. Hard to make this display in a manner that is
      pleasing to the reader because alignment is dependent on the users 
      answers. Perhaps a solution to this is further into the class*/ 
    cout << "There once was a person named " << Name << " who lived in ";
    cout << City << ". At the age of " << Age << ", " << Name << " went to \n"; 
    cout << "college at " << College << ". " << Name << " graduated and ";
    cout << " went to work as a " << Profession << ". Then, " << Name << endl;
    cout << " adopted a(n) " << Ty_Animal << " named " << Na_Pet << ". \n\n";
    cout << "They both lived happily ever after!";
         
    //Exit stage right!
    return 0;
}