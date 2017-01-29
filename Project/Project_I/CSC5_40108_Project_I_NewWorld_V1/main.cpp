/* 
  File:   main.cpp
  Author: Timothy Irwin
  Created on January 28, 2017, 4:30 PM

 Purpose: Your project needs to be a minimum of 100 lines.  The minimum 
          requirements will only meet a C grade.  It should implement one of
          your favorite games with sufficient logic to be worthy of a 
          programming project.

          It must illustrate all the concepts we have covered, specifically the
          7 constructs, primitive data types, formating, file i/o, etc...

          It must also include a writeup. See the attached examples.  Naturally,
          develop in your repository.  Place the Project 1 folder inside your
          projects folder.  Again, I want to see the progression of development.
          This is worth 20% of your grade, equivalent to all your homeworks, so
          make it look like you spent that kind of time.

          As always, submit the result here, copy yourself on the email, attach
          the zipped solution folder and send to

          mark.lehr@rcc.edu with subject:
          Lastname, Firstname - Project 1 - 40479 or 40108
 
          I have always been a big fan of story lines and board games so I have
          created this board game. It combines the use of dice for movement
          throughout the game and a point system that once equal to or less than
          zero will inform of loss. If you advance to the end of the game before
          your points run out you will win.
 */
 //System Libraries

#include <iostream>
#include <cstdlib> //for rand, srand.
#include <ctime>   //time function.

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
    int const MIN_VAL = 1;
    int const MAX_VAL = 2;
    int const MIN_BSP = 1;
    int const MAX_BSP = 36;
    
    float     Crew = 10000.00;
    float     FftnPLs = 15/100;
    float     Loss;
    
    int       Space = 1;
    int       Miles;
    
    int Die; //holds value of die.
    
    //Input values
    cout << "Welcome to ""New Earth"".\n";
    cout << "You are the only hope for the human race to survive.\n"
            "Humans have made the earth unlivable and must travel\n"
            "through space to reach ""New Earth"" before perishing\n"
            "from the dangers of space travel. This game starts you\n"
            "off with 10000 crew members. You will need to reach \n"
            """New Earth"" before your crew reaches zero. Along \n"
            "the way you will encounter dangers that could cause you\n"
            "to lose points and cause delays in reaching the end of\n"
            "the game.\n";
    cout << "There are 36 spaces on the game board. If you reach space\n"
            "36 you have won.\n";
   
          
    do
    {
    //Roll die.
    //get system time.
    unsigned seed = time(0);
    //seed random number generator.
    srand(seed);
    cout << "Press any key to roll the die.\n";
    cin.ignore();
    Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
    cout << "\nYou rolled a " << Die;
    Space += Die; 
    cout << "\nYou are now on space " << Space << endl;
    
    switch (Space)
    {
        case 2:
        {
            cout << "Radiation has killed one thousand crew members.\n";
            Crew = Crew - 1000;
            cout << "You only have " << Crew << " crew left.\n\n";
            
            
            break;
        }
        
        case 3:
        {
            cout << "Enter the amount of miles traveled so far (0 to 50000): ";
            cin >> Miles;
                if (Miles <= 15000)
                {
                    cout << "You are making poor progress. Move back 1 space.\n";
                    Space -= 1;
                    cout << "You are now on space " << Space << endl;
                    cin.ignore();
                }
                else if (Miles > 15000 && Miles <= 25000)
                {
                    cout << "You encountered a hostile alien race. You lose\n"
                            "15% of your crew.\n";
                    Loss = Crew * 0.15;        
                    cout << "You have lost " << Loss << " crew"
                                    " members.\n";
                            Crew -= Loss;
                            cout << Crew << " crew members remaining.";
                            cin.ignore();
                }
                else if (Miles > 25000)
                {
                    cout << "Your crew is multiplying. You now have 200"
                            " new crew members.\n";
                    Crew += 200;
                    cout << "Your crew has grown to " << Crew << ".\n";
                    cin.ignore();
                }
            }
            break;
        }
        
        
    
    
    }
    while (Space < MAX_BSP);    

    //Exit stage right!

    return 0;

}