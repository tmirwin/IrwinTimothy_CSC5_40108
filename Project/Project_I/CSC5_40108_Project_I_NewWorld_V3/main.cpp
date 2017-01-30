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
    int const MIN_VAL = 1; //min val for die
    int const MAX_VAL = 6; //max val for die
    int const MIN_BSP = 1; //starting space on board.
    int const MAX_BSP = 12; //final space on board
        
    float     Crew = 10000.00; //starting crew number
    float     Loss; // holds amount lost at various points.
    
    int       Space = 1; //set space equal to 1
    int       Miles; //holds miles traveled.
    int       Die; //holds value of die.
    int       BackSp; //holds amount of spaces to go backward.
    
    char      chSP3; //holds choice to stay or leave gravity pull.
    string    Name; //holds name string 
    
    //Input values
    //introduction
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
    cin  >> Name; //get name string.
   
    //board movement loop     
    do
    {
    //Roll die.
    //get system time.
    unsigned seed = time(0);
    //seed random number generator.
    srand(seed);
    cout << "Press enter to roll the die.\n"; 
    cin.ignore();  //pause before rolling dice.
    //roll a random number between 1 & 6
    Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL; 
    cout << "\nYou rolled a " << Die << endl; //display number roll.
    Space += Die; //calculate new board space.
    
    //switch menu to determine what happens depending on what space landed on.
    switch (Space)
    {   //space2
        case 2:
        {   
            cout << "\nRadiation has killed one thousand crew members.\n";
            Crew = Crew - 1000; //get new crew amount
            //Display crew left.
            cout << "You only have " << Crew << " crew left.\n\n";
            //Display current space
            cout << "You are now on space " << Space << endl;
            break;
        }
        //space3
         case 3:
        {
            cout << "\nContinue your journey.\n";
            //Display current space
            cout << "You are now on space " << Space << endl;
            break;
        }
        //space4
        case 4:
        {
            cout << "\nJust another safe day in space Captain " << Name << ".\n";
            //Display current space
            cout << "You are now on space " << Space << endl;
            break;
        }
        //space5
        case 5:
        {
            cout << "\nEnter the amount of miles traveled so far : ";
            cin >> Miles; //get miles
                if (Miles <= 15000) //if less than 15000
                {   //lose 3000 crew members
                    cout << "You are making poor progress. 3000 Crew die of old"
                            " age.\n";
                    Crew -= 3000; //get new crew amount
                    //Display crew left.
                    cout << "You have " << Crew << " left.\n";
                cin.ignore(); //was skipping forward so stopped it here.
                }
                else if (Miles > 15000 && Miles <= 25000) //mile 15K - 25K. 
                {   //lose 15% of crew
                    cout << "You encountered a hostile alien race. You lose\n"
                            "15% of your crew.\n";
                    Loss = Crew * 0.15; //calculate loss.
                    //display loss
                    cout << "You have lost " << Loss << " crew"
                            " members.\n";
                            Crew -= Loss; //get new crew amount
                            //Display crew left.
                            cout << Crew << " crew members remaining.";
                cin.ignore(); //was skipping forward so stopped it here.          
                }
                else if (Miles > 25000) 
                {
                    cout << "Your crew is multiplying. You now have 200"
                            " new crew members.\n";
                    Crew += 200; //get new crew amount
                    //Display crew left.
                    cout << "Your crew has grown to " << Crew << ".\n";
                cin.ignore(); //was skipping forward so stopped it here.   
                }
            //Display current space
            cout << "You are now on space " << Space << endl;
            
            break;
        }
        //space6
        case 6:
            {
            cout <<"\nGravity from an asteroid is pulling your ship at a faster"
                   " rate.\n";
            cout << "Stay in the gravitational pull and potentially get there "
                    "faster or exit for safety?\n"
                    "Type Y to stay or N to exit? ";
            cin  >> chSP3; //get choice
            //if choice 
            if (chSP3 == 'Y' || chSP3 == 'y') 
            {
                cout << "Gravity has its consequences. A portion of your ship\n"
                        "has been destroyed.\n"
                        "Roll the die to see how many crew members are lost.\n";
                cin.ignore();
                cin.ignore();
                //roll die.
                Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
                //display die value
                cout << "\nYou rolled a " << Die << ".\n";
                Loss = Die * 1000; //caclulate loss
                Crew -= Loss; //get new crew amount
                //Display crew left.
                cout << "You only have " << Crew << " Crew Members left.\n";
            }
            else if (chSP3 == 'n' || chSP3 == 'N')//if choice no.
            {
                cout << "Your crew is safe. Continue your journey.\n";
                cin.ignore(); 
            }
            //validate input
            while (chSP3 != 'n' || chSP3 != 'N' || chSP3 != 'y' || chSP3 != 'Y')
            {
                cout << "Please select Y or N!";
                cin  >> chSP3;
            }
            //Display current space
            cout << "You are now on space " << Space << endl;
            break;
            }
        //space7
         case 7:
        {
            cout << "\nYour ship needs emergency repairs. Go back to space 1.\n";
            Space = 1; //now at space 1
            //Display current space
            cout << "You are now on space " << Space << endl;
            break;
        }
         //space8
        case 8:
        {
            cout << "\nYour crew is suffering from disease. People are dying.\n"
                 << "at a rate of 70% per day. Roll the die to see how many\n"
                 << "days will pass before a cure is found.\n";
                
                cin.ignore();
                //roll die
                Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
                cout << "You rolled a " << Die << ".\n";
                //loop to determine amount of days until cure
                for (int count = 1; count <= Die; count++)
                {   //lose 20% each increment/day
                    Loss = Crew * 0.20; //calculate loss per day
                    Crew -= Loss; //get new crew amount
                }
                
                if (Crew >= 1) //ensure not less than 1 crew member.
                {   //Display crew left.
                    cout << "\nYou are down to " << static_cast<int>(Crew)
                     << " crew members.\n";
                    //display current space.
                    cout << "You are now on space " << Space << endl;
                }
                else if (Crew < 1) //if less than one crew
                {   //lost game
                    cout << "You have lost your crew. You lose";
                }
               
            break;
        }
        //space9
        case 9:
        {
            cout << "\nAlmost Home.\n";
            //current space.
            cout << "You are now on space " << Space << endl;
            break;
        }
        //space10
        case 10:
        {
            cout << "\nYour ship has lost power and is drifting.\n"
                    "Roll the Die and move backward the amount shown.\n";
                   
            cin.ignore(); //stop to allow key entry
            //roll die
            Die = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
            //indicate roll
            cout << "\nYou rolled a " << Die << ".\n";
            //spaces moved backward
            cout << "Move back " << Die << " Spaces.\n";
            Space -= Die; //calculate new space
            //Display current space
            cout << "You are now on space " << Space << ".\n";
            break;
        }
        //space11
        case 11:
        {
            if (Crew > 1000) //ensure enough crew to continue.
            {//lose 1000 crew
            cout << "\n1000 of your crew died of natural causes.";
            Crew -= 1000; //get new crew amount
            cout << "You are now on space " << Space << endl;
            //Display crew left.
            cout << "You have " << Crew << " Left.\n";
            }
            else //if land here with less than 1001 crew
            {   //lose game
                cout << "\nYour crew has died off. You lose.\n";
            }
            break;
        }
        //space12
        case 12:
        {   //indicate winner
            cout << "\nYou made it to ""New Earth"" and win the game.\n";
            
           
            cout << setw(20) << " 0   0\n";
            cout << setw(18) << "   -\n";
            cout << setw(20) << " *   *\n";
            cout << setw(19) << "  ***\n";
            
            
            break;
        }
        //space13. went to far go back to 11
        case 13:
        {
            cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000; //get new crew amount
                    Space -= 2;
                    //Display crew left.
                    cout << Crew << " crew left.\n";
                     //if 0 crew is zero or less, lose game.
                    if (Crew <=0)
                    {
                        cout << "\nYou have lost your crew. You lose";
                    }
        break;
        }
        //space14. went to far go back to 11
        case 14:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000; //get new crew amount
                    Space -= 3;
                    //Display crew left.
                    cout << Crew << " crew left.\n";
                    //if 0 crew is zero or less, lose game.
                    if (Crew <=0)
                    {
                        cout << "\nYou have lost your crew. You lose";
                    }
            break;
        }
        //space15. went to far go back to 11
        case 15:
        {
            cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000; //get new crew amount
                    Space -= 4;
                    //Display crew left.
                    cout << Crew << " crew left.\n";
                     //if 0 crew is zero or less, lose game.
                    if (Crew <=0)
                    {
                        cout << "\nYou have lost your crew. You lose";
                    }
            break;
        }
        //space16. went to far go back to 11
        case 16:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000; //get new crew amount
                    Space -= 5;
                    //Display crew left.
                    cout << Crew << " crew left.\n";
                     //if 0 crew is zero or less, lose game.
                    if (Crew <=0)
                    {
                        cout << "\nYou have lost your crew. You lose";
                    }
            break;
        }
        //space17. went to far go back to 11
         case 17:
        {
             cout << "\nYou must roll the correct number to gain entry to\n"
                    """New Earth"". You are stopped at space 11 and will need\n"
                    "to roll a 1 before your crew dies off.\n";
                    Crew -= 1000; //get new crew amount
                    Space -= 6;
                    //Display crew left.
                    cout << Crew << " crew left.\n";
                    //if 0 crew is zero or less, lose game.
                    if (Crew <=0)
                    {
                        cout << "\nYou have lost your crew. You lose";
                    }
            break;
        }
        
    }
    }
    while (Space < MAX_BSP && Crew >= 1);    

    //Exit stage right!

    return 0;

}