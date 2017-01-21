/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 20, 2017, 8:55 PM

 Purpose:Write a program that asks the user to enter today's sales for five
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

    return 0;

}