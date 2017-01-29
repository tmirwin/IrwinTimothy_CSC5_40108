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
 
          I have always been a big fan of role play and games with story lines
          so this is what I have come up with.  */

 //System Libraries

#include <iostream>//input/output.
#include <cstdlib> //for rand, srand.
#include <ctime>   //time function.
#include <string>  //string lib.
#include <iomanip> //format.
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
    int const MAX_VAL = 6;
    int const MIN_BSP = 1;
    int const MAX_BSP = 12;
        
    float     Crew = 10000.00;
    float     Loss;
    
    int       Space = 1;
    int       Miles;
    int       Die; //holds value of die.
    int       BackSp;
    
    char      chSP3;
    string    Name;
    
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
    cout << "There are 12 spaces on the game board. If you reach space\n"
            "12 without loosing your whole crew you have won.\n";
    cout << "Enter your last name: ";
    cin  >> Name;
   
          
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
    
    
    switch (Space)
    {
        case 2:
        {
            cout << "\nRadiation has killed one thousand crew members.\n";
            Crew = Crew - 1000;
            cout << "You only have " << Crew << " crew left.\n\n";
            cout << "You are now on space " << Space << endl;
            break;
        }
         case 3:
        {
            cout << "\nContinue your journey.\n";
            break;
            cout << "You are now on space " << Space << endl;
        }
        case 4:
        {
            cout << "\nJust another safe day in space Captain " << Name << ".\n";
            break;
            cout << "You are now on space " << Space << endl;
            cin.ignore();
        }
        case 5:
        {
            cout << "\nEnter the amount of miles traveled so far (0 to 50000): ";
            cin >> Miles;
                if (Miles <= 15000)
                {
                    cout << "You are making poor progress. 3000 Crew die of old"
                            " age.\n";
                    Crew -= 3000;
                    cout << "You have " << Crew << " left.\n";
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
                           
                }
                else if (Miles > 25000)
                {
                    cout << "Your crew is multiplying. You now have 200"
                            " new crew members.\n";
                    Crew += 200;
                    cout << "Your crew has grown to " << Crew << ".\n";
                    
                }
            cout << "You are now on space " << Space << endl;
            
            break;
        }
        case 6:
            {
            cout <<"\nGravity from an asteroid is pulling your ship at a faster"
                   " rate.\n";
            cout << "Stay in the gravitational pull and potentially get there "
                    "faster or exit for safety?\n"
                    "Type Y to stay or N to exit? ";
            cin  >> chSP3;
            
            if (chSP3 == 'Y' || chSP3 == 'y')
            {
                cout << "Gravity has its consequences. A portion of your ship\n"
                        "has been destroyed.\n"
                        "Roll the die to see how many crew members are lost.\n";
                cin.ignore();
                cin.ignore();
                Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
                cout << "\nYou rolled a " << Die << ".\n";
                Loss = Die * 1000;
                Crew -= Loss;
                cout << "You only have " << Crew << " Crew Members left.\n";
            }
            else
            {
                cout << "Your crew is safe. Continue your journey.\n";
                cin.ignore();
                
            }
            cout << "You are now on space " << Space << endl;
            break;
            }
        
        
         case 7:
        {
            cout << "\nYour ship needs emergency repairs. Go back to space 1.\n";
            Space = 1;
            cout << "You are now on space " << Space << endl;
            break;
        }
        case 8:
        {
            cout << "\nYour crew is suffering from disease. People are dying.\n"
                 << "at a rate of 70% per day. Roll the die to see how many\n"
                 << "days will pass before a cure is found.\n";
                
                cin.ignore();
                Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
                cout << "You rolled a " << Die << ".\n";
                
                for (int count = 1; count <= Die; count++)
                {
                    Loss = Crew * 0.70;
                    Crew -= Loss;
                }
                
                cout << "\nYou are down to " << static_cast<int>(Crew)
                     << " crew members.\n";
                cout << "You are now on space " << Space << endl;
            break;
        }
        case 9:
        {
            cout << "\nAlmost Home.\n";
            cout << "You are now on space " << Space << endl;
            break;
        }
        case 10:
        {
            cout << "\nYour ship has lost power and is drifting.\n"
                    "Roll the Die and move backward the amount shown.\n";
                   
            cin.ignore();
            Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
            cout << "\nYou rolled a " << Die << ".\n";
            cout << "Move back " << Die << " Spaces.\n";
            Space -= Die;
            cout << "You are now on space " << Space << ".\n";
            break;
        }
        
        case 11:
        {
            if (Crew <= 1)
            {
            cout << "\n1000 of your crew died of natural causes.";
            Crew -= 1000;
            cout << "You are now on space " << Space << endl;
            cout << "You have " << Crew << " Left.\n";
            }
            else
            {
                cout << "\nYour crew has died off. You lose.\n";
            }
           
            break;
        }
        case 12:
        {
            cout << "\nYou made it to ""New Earth"" and win the game.";
            break;
        }
        case 13:
        {
            cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000;
                    Space -= 2;
                   
                                        
            break;
        }
        case 14:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000;
                    Space -= 3;
                    
            break;
        }
        case 15:
        {
            cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000;
                    Space -= 4;
                    
            break;
        }
        case 16:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000;
                    Space -= 5;
                    
            break;
        }
         case 17:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000;
                    Space -= 6;
                    
            break;
        }
        
    }
    }
    while (Space < MAX_BSP && Crew >= 1);    

    //Exit stage right!

    return 0;

}