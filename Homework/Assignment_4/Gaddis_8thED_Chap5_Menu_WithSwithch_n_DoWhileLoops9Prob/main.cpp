/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 21, 2017, 12:10 AM

 Purpose:
 Review Chapter 4 and read Chapter 5 Gaddis.  Review slides as well.
 
 Any 9 problems in Chapter 5 for Gaddis or any 9 Problems in Chapter 4 for
 those with Savitch. 
 
 Choose 2 problems and flowchart.  See Lab Assignment as a guideline 
 
 The 10th problem will be for you to create a menu, that has all the 9
 problems in 1 program/project.  Use the following menu and example as a
 guideline

 https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/
 master/Lab/ExampleMenuWithSwitchAndDoWhileLoop/main.cpp
 
 https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/
 master/Lab/ExampleMenuWithSwitchAndDoWhileLoopWith3Problems/main.cpp

Zip your folder with all the program solutions. 

Submit the zip file here. 

Use your personal git repository during development of each problem.

 Create an Assignment 4 folder in your repository and place 10 project in this
 folder which solves the 10 problems.
  
 You will create a menu in your next assignment. Continuously update this
 folder as you make changes and complete each project. 

 Also send an email to mark.lehr@rcc.edu with subject: Lastname, Firstname
 - Assignment 4 - 40479 or 40108
  
 Attach your zip file and email a copy to yourself. 

 This email is your hotmail or other personal email. Not mailed within webct.
 */

//System Libraries
#include <iostream>
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library

using namespace std;

//User Libraries
//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {

    //Declare Variables

    unsigned short choice;

    //Loop on the menu
    do{
       //Input values
        cout << "\nPick the number of one of the problems below."<<endl;
        cout << "1)Pennies for Pay\n";
        cout << "2)Ocean Levels\n";
        cout << "3)Random Number Guessing Game\n";
        cout << "4)Random Number Guessing Game Enhanced\n";
        cout << "5)Sales Bar Chart \n";
        cout << "6)The Greatest and Least of These\n";
        cout << "7)Average Rainfall\n";
        cout << "8)Sum of Numbers\n";
        cout << "9)Distance Traveled\n";
        
        cin  >> choice;
        cout << endl;

        //Switch to determine the Problem
        switch(choice)
        {
            case 1:
            {
               /* Pennies for Pay
                Write a program that calculates how much a person would earn over
                a period of time if his or her salary is one penny the first day
                and two pennies the second day, and continues to double each day.
                The program should ask the user for the number of days. Display a 
                table showing how much the salary was for each day, and then show
                the total pay at the end of the period. The output should be 
                displayed in a dollar amount, not the number of pennies.
                Input Validation: Do not accept a number less than 1 for the number
                of days worked. */
                
                //Declare Variables
                int     Days_W = 0; //days worked (user entry).
                float   DP = 0.01f,//initialize daily pay rate
                        TotalP = 0.0f; //total pay.

                //Input values
                //Intro with instructions.
                cout << "This program will display the total and daily salary for a\n"
                        "specified number of days worked. The rate of pay on day one\n"
                        "is 1 penny. the salary will double every day. You must work\n"
                        "at least one day.";
                cout << "Enter number of days worked: ";
                cin  >> Days_W; //get days worked.
    
                //validate days worked input
                while (Days_W < 1)
                {   //validation fail,enter new amount.
                    cout << "You must work at least on day.\n"
                            "Enter number of days worked: ";
                cin  >> Days_W; //get new amount of days.
                }

                //set number display format
                cout << setprecision(2) << showpoint << fixed;
                //set up chart title   
                cout << "Day(s)" << "\t\t" << "Daily Salary" << endl;
                cout << "---------------------------------------------------------------\n";

                //loop for days worked counter.
                for(int Count = 1; Count <= Days_W; Count++)
                    {
                    DP *= 2; //doubles rate daily.
                    cout << Count << "\t\t$" << setw(6) << DP << endl;
                    TotalP += DP; //total Salary = total pay + daily pay.
                    }
                //Output values
                cout << "---------------------------------------------------------------\n";
                cout << "Total salary:   $" << setw(6) << TotalP << endl; //total salary displayed

            break;
            }
            case 2:
            {
                    /*Purpose: Ocean Levels
                    Assuming the ocean's level is currently rising about 1.5 millimeters
                    per year, Write a program that displays a table showing the number 
                    of millimeters that the ocean will have risen each year for the next
                    25 year.
                    */
                
                    //Declare Variables
                    const int   MIN_NUM = 1, //Beginning number of years.
                                MAX_NUM = 25; //Maximum number of years.
                    float       Mil = 1.5;
                    int         Num = MIN_NUM; // for the counter.
        
                    //table title.
                    cout << "Year\tMillimeters\n";
                    cout << "--------------------\n";
    
                    //table formating.    
                    cout << setprecision(1) << showpoint << fixed; 
                    //loop for each year.
                    while (Num <= MAX_NUM) 
                    {
                         //output values
                        cout << Num << "\t" << (Num * Mil) << endl;
                        Num++;
                    }
            break;
            }

            case 3:
            {
                 /*Purpose: Random Number Guessing Game
                Write a program the generates a random number and asks the user to
                guess what the number is. If the user's guess is higher than the
                random number, the program should display "Too high, try again." If
                the user's guess is lower than the random number, the program 
                should display "Too low, try again." The program should use a loop
                that repeats until the user correctly guesses the random number.
                */
                
                //Declare Variables
                int RNum;//random number
                int NumG;//user guess
    
                int seed = time(0); //get system time 
       
                srand(seed); //seed the random number generator.
            
                //Input values
                cout << "I'm thinking of a number from 1 to 25. Guess my number: \n";
                cin  >> NumG; //get user guess.
                RNum = 1 + rand() % 25; //set random number range so not guessing forever.
    
                //loop to test user guess.
                while (NumG != RNum) //while guess is wrong.
                {
                    if(NumG < RNum) //guess too low.
                        {
                        cout << "Too low, try again.\n";
                        cin  >> NumG; //get new guess.
                        }
        
                    else if (NumG > RNum) //while guess too high.
                        {
                            cout << "Too high, try again.\n";
                            cin  >> NumG; //get new guess.   
                        }
       
                if (NumG == RNum) //if guess is correct, end loop and display correct.
                    {
                        cout << "You guessed the correct number.";
                    }
                }        
                break;
            }
            
            case 4:
            {
                /*Purpose:Random Number Guessing Game Enhancement
                Write a program the generates a random number and asks the user to
                guess what the number is. If the user's guess is higher than the
                random number, the program should display "Too high, try again." If
                the user's guess is lower than the random number, the program 
                should display "Too low, try again." The program should use a loop
                that repeats until the user correctly guesses the random number.

               *Enhance the program that you wrote for Programming Challenge 20 so
                it keeps count of the number of guesses that the user makes. When
                the user correctly guesses the random number, the program should
                display the number of guesses. 
                */
                
                //Declare Variables
                int RNum;//random number
                int NumG;//user guess
                int counter; //holds number of guesses.

                int seed = time(0); //get system time 
    
    
                srand(seed); //seed the random number generator.

                //Input values
                cout << "I'm thinking of a number from 1 to 25. Guess my number: \n";
                cin  >> NumG; //get user guess.
                RNum = 1 + rand() % 25; //set random number range so not guessing forever.

                //loop to test user guess.
                while (NumG != RNum) //while guess is wrong.
                {
                    if(NumG < RNum) //guess too low.
                    {
                        cout << "Too low, try again.\n";
                        cin  >> NumG; //get new guess.
                        counter++; //increment guess.
                    }

                    else if (NumG > RNum) //while guess too high.
                    {
                        cout << "Too high, try again.\n";
                        cin  >> NumG; //get new guess.
                        counter++; //increment guess.
                    }

                    if (NumG == RNum) //if guess is correct, end loop and display correct.
                    {
                        counter++; //increment last guess.
                        cout << "You guessed the correct number.\n";
                        cout << "It took you " << counter << " tries to guess my number."; 
                    }
                }        
    
                break;
                }
            
    
            case 5:
            {
                /*Purpose: Sales Bar Chart
                Write a program that asks the user to enter today's sales for five
                stores. The program should then display a bar graph comparing each
                store's sales. Create each bar in the bar graph by displaying a row
                of asterisks. Each asterisk should represent $100 of sales.

                Here is an example of the programs output.
                Enter today's sales for store 1: 1000 [enter]
                Enter today's sales for store 2: 1200 [enter]
                Enter today's sales for store 3: 1800 [enter]
                Enter today's sales for store 4: 800 [enter]
                Enter today's sales for store 1: 1900 [enter]

                SALES BAR CHART
                (Each * = $100)
                Store 1: ********
                Store 2: **********
                Store 3: **************
                Store 4: ******
                Store 5: ****************
                */
                
                //Declare Variables
                //Sales $ amount for each store.
                int Sales1; 
                int Sales2;
                int Sales3;
                int Sales4;
                int Sales5;

                //Sales / 100 for each store.
                int Store1;
                int Store2;
                int Store3;
                int Store4;
                int Store5;

                // "*" for bar chart.
                char Ast = '*';

                //Input values
                cout << "This program will display a bar graph representing sales for\n"
                        "five stores.\n";
                cout << "Enter today's sales for Store 1:";
                cin  >> Sales1; //Get sales for store 1.

                cout << "Enter today's sales for Store 2:";
                cin  >> Sales2;//Get sales for store 2.
            
                cout << "Enter today's sales for Store 3:";
                cin  >> Sales3;//Get sales for store 3.

                cout << "Enter today's sales for Store 4:";
                cin  >> Sales4;//Get sales for store 4.

                cout << "Enter today's sales for Store 5:";
                cin >> Sales5;//Get sales for store 5.

                //Process by mapping inputs to outputs
                //divide store sales by 100 to give one '*' per $100.
                Store1 = Sales1 / 100;
                Store2 = Sales2 / 100;
                Store3 = Sales3 / 100;
                Store4 = Sales4 / 100;
                Store5 = Sales5 / 100;
                cout << endl;   
    
                //Output Values
                //Bar chart title and explanation of data.
                cout << "SALES BAR CHART\n"
                        "(Each * = $100)\n";

                cout << "Store 1: "; //display store number before loop so doesn't repeat.
                //loop for each asterisk on one line. quantity from Store1 calculation.
                for (int Count = 0; Count < Store1; Count++)
                {
                    cout << Ast;
                }
                //end line before next line. If done inside loop it displays vertically
                cout << endl; 

                cout << "Store 2: ";//display store number before loop so doesn't repeat.
                //loop for each asterisk on one line. quantity from Store2 calculation.
                for (int Count = 0; Count < Store2; Count++)
                {
                    cout << Ast;
                }
                //end line before next line. If done inside loop it displays vertically
                cout << endl;

                cout << "Store 3: ";//display store number before loop so doesn't repeat.
                //loop for each asterisk on one line. quantity from Store3 calculation.
                for (int Count = 0; Count < Store3; Count++)
                {
                    cout << Ast;
                }
                //end line before next line. If done inside loop it displays vertically
                cout << endl;

                cout << "Store 4: ";//display store number before loop so doesn't repeat.
                //loop for each asterisk on one line. quantity from Store4 calculation.
                for (int Count = 0; Count < Store4; Count++)
                {
                    cout << Ast;
                }
                //end line before next line. If done inside loop it displays vertically
                cout << endl;

                cout << "Store 5: ";//display store number before loop so doesn't repeat.
                //loop for each asterisk on one line. quantity from Store5 calculation.
                for (int Count = 0; Count < Store5; Count++)
                {
                    cout << Ast;
                }
            }

                break;
               
            case 6:
            {
                /*Purpose:The Greatest and Least of These
                Write a program with a loop that lets the user enter a series of 
                integers. The user should enter -99 to signal the end of the series.
                After all the numbers have been entered, the program should display
                the largest and the smallest numbers entered.
                 */
                
                 //Declare Variables
                int Num = 0;    //holds integer input.
                int Large = 0;  //holds largest integer.
                int Small = 0;  //holds smallest integer.
    
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


            break;
            }
            
            case 7:
            {
                 /*Purpose: Average Rainfall
                Write a program that uses nested loops to collect data and calculate
                average rainfall over a period of years.The program should first ask
                for the number of years. The outer loop will iterate once for every
                year. The inner loop will iterate 12 times, once for each month. 
                Each iteration of the inner loop will ask the user for inches of
                rainfall for that month.
                After all iterations the program should display the number of months,
                total inches of rainfall, and the average rainfall per month for the
                entire period.
                Input Validation: Do not accept a number less than 1 for the number
                of years. Do not accept negative numbers for the monthly rainfall.
                */
                
                //Declare Variables
                const int   MONTH = 12;    //months per year = 12.

                int         Years = 0;     //holds years input by user.
                int         MonthT;        //holds total months (Years * MONTH)            
                float       Inches = 0.0f; //holds inches of rain input by user.
                float       InchesT = 0.0f;//holds running total for inches.
                float       ARainF = 0.0f; //holds avg. rainfall (InchesT / MonthT).


                //introduction and Years Input Value.
                cout << "This program will display the number of months, total inches of\n"
                        "rainfall, and the average rainfall per month for a user specified\n"
                        "number of years.\n";
                cout << "Enter the number of years: ";
                cin  >> Years; //get years.

                //validate years input not less than 1.
                while (Years < 1) 
                {   //if invalid entry made display error message.
                    cout << "\nERROR: You must enter at least 1 year.\n"
                            "Enter the number of years: ";
                    cin  >> Years; //reenter years.
                }
    
                //outer loop for years.
                for (int Y = 1; Y <= Years; Y++)
                    {
                        //inner loop for months.
                        for (int M = 1; M <= MONTH; M++)
                        {
                            //get inches data for each iteration of month.
                            cout << "Enter the total rainfall, in inches, for month "
                                 << M << ":";
                            cin  >> Inches; //get inches rain.

                            //validate inches not less than 0.
                            while (Inches < 0)
                            {    //if invalid entry made display error message.
                                cout << "\nYou may not enter negative inches of rain.\n"
                                        "Enter the total rainfall, in inches, for "
                                     << "month " << M << ":";
                                cin  >> Inches; //reenter inches.
                            }
                            //add inches to total inches after each increment.
                            InchesT += Inches;   
                        }
                    //calculate total months.
                    MonthT = Years * MONTH;
                    //calculate average inches per month.
                    ARainF = InchesT / MonthT; 
                    }

                //Output values
                cout << setprecision(2) << showpoint << fixed;
                cout << "The number of months of rainfall was: " << MonthT << ".\n";
                cout << "The total inches of rainfall was: " << InchesT << " inches.\n";
                cout << "The average rainfall per month was: " << ARainF << " inches.\n";

                break;
            }
            
            case 8:
            {
                /* Purpose: Sum of Numbers
                Write a program that asks the user for a positive integer value. The program
                should use a loop to get the sum of all the integers from 1 up to the number
                entered. For example, if the user enters 50, the loop will find the sum of 
                1, 2, 3,4,... 50.
                Input Validation: Do not accept a negative starting number.
                */
                
                //Declare Variables
                int UsrNum, //holds number entered by user.
                    Sum = 0; //holds sum of incremented numbers.

                //Input values
                cout << "This program provides the sum of all\n"
                        "numbers from 1 to any positive integer.\n"
                        "Entered a positive integer here: ";
                cin  >> UsrNum; //get number from user.

                //Input Validation
                while (UsrNum < 0) //must be positive.
                    {
                //
                        cout << "You must enter a positive integer.\n"
                                "Please enter number 1 or greater: ";
                        cin  >> UsrNum;
                    }

                //loop counter starts at 1. Increment until UsrNum reached.
                for (int Count = 1; Count <= UsrNum; Count++)
                {
                    Sum += Count; //adds next increment to sum.
                }   

                //Output the sum.
                cout << "The sum is " << Sum; 
    
                break;
            }
            
            case 9:
            {
                /*Distance Traveled
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
                break;
            }

            default:
                //quit
                cout<<"You are exiting the program"<<endl;

        }
    cout << endl;
    }
    
    while(choice >= 1 && choice <= 9);

    
    //Exit stage right!

    return 0;

}