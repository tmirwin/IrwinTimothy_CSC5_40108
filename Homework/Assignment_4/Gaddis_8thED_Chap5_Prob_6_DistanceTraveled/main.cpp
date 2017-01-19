/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 18, 2017, 3:30 PM
  Purpose:  Distance Traveled
            The distance a vehicle travels can be calculated as follows:
                        distance = speed * time
            For example if a train travels 40 miles per hour for 3 hours, the
            distance traveled is 120 miles. 
            Write a program that asks the user for the speed of a vehicle (in
            miles per hour) and how many hours it has traveled. The program 
            should then use a loop to display the distance the vehicle has 
            traveled for each hour of the time period. here is an example of 
            the output:
            What is the speed of the vehicle in mph?
            How many hours has it traveled?
            Hour Distance Traveled
            -------------------------------
             1             40
             2             80
             3            120
            Input Validation: Do not accept a negative number for the speed and
            do not accept any value less than 1 for time traveled.
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
int main(int argc, char** argv) {
    //Declare Variables
    const int MIN_SP = 0, //minimum speed.
              MIN_H  = 1;  //minimum hours of driving.
    
    int       Speed, //holds speed input variable.
              Hours, //holds hours input variable.
              Miles; // miles traveled each hour.
    
    //Input values
    cout << "Enter the speed of a vehicle and total distance traveled\n"
            "to find the distance for each hour traveled.\n"
            "What is the speed of the vehicle in mph?";
    cin  >> Speed; //speed of vehicle.
    cout << "How many hours has it traveled?";
    cin  >> Hours; //hours traveling.
    
    //validate input. minimum speed or minimum hours.
    while (Speed <= MIN_SP || Hours < MIN_H)
    {
         cout << "ERROR: Speed must be a positive number\n";
         cout << "number and hours must be at least 1.\n";
         cout << "What is the speed of the vehicle in mph?";
         cin  >> Speed;//reenter if invalid.
         cout << "How many hours has it traveled?";
         cin  >> Hours;//reenter if invalid.
    }
           
    //Process by mapping inputs to outputs
    Miles = Speed * Hours; //miles traveled calculated.
    
    
    //set up chart label.
    cout << "Hours" << "" << "\t\tDistance Traveled" << endl;
    cout << "-------------------------------------\n";
    //loop for hours counter.
    for(int Count = 1; Count <= Hours; Count++)
	{
	Miles = Speed * Count; //determine miles for each hour incremented.	
       
        //Output values
        cout << Count << "\t\t" << Miles << endl;
		
	}
    //Exit stage right!
    return 0;
} 