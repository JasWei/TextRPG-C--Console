#include "Game.h"
#include "Player.h"

using std::cout;
using std::cin;
using std::endl;

Game::Game()
{
    choice = 0;
    playing = true;
}

Game::~Game()
{

}

void Game::mainMenu()
{
   Settings s;
    cout << "MAIN MENU" << endl
         << "1. New Game" << endl
         << "2. Load Game" << endl
         << "3. Settings" << endl
         << "4. Quit" << endl << endl
         << "Choice: ";
         cin >> choice;

         switch(choice)
         {
         case 1:
            {
               s.clearScreen();
               GamePlay(true);
            }
            break;
         case 2:
            s.clearScreen();
            cout << "Load Game is not ready" << endl;
            break;
         case 3:
            s.clearScreen();
            cout << "Settings is not ready yet" << endl;
            break;
         case 4:
             //Exits the game
            playing = false;
         default:
            s.clearScreen();
         }
}

bool Game::getPlaying() const
{
    return this->playing;
}

void Game::GamePlay(bool NewLoad)
{
   Player P;
   if(NewLoad == true)
   {
      P.makePlayer();
      while(getPlaying())
      {
         worldMenu();
      }
   }
   else
   {
      //This is where we will load the player file
   }
}
void Game::battle(string location)
{
   //creates a settings object
   //Used for text
   Settings S;

   //What species is being faced
   string EnemySpecies;
   //How many enemies there are
   int EnemyCount;

   //In the city possible species are dog, human, cat, feline, reptilian
   if(location == "city")
   {
      //Enemy species
      string species[5] = {"dog", "human", "cat", "feline", "reptilian"};
      //The amount that can be encountered at once
      int counts[4] = {1, 2, 3, 4};

      //Randomly picks what species they are
      int RandSpecies = rand() % 5; //generates a random number between 0 and 4
      //Assigns the picked species
      EnemySpecies = species[RandSpecies];

      //Randomly picks how many there are
      int RandCount = rand() % 4; //generates a random number between 0 and 3
      //Assigns the picked species
      EnemyCount = counts[RandCount];
   }

   //These if-else conditions are for if we encounter 1, 2, or more enemies
   if(EnemyCount == 1)
   {
      S.slow_print("You have encountered a ", S.getTextSpeed());
      S.slow_print(EnemySpecies, S.getTextSpeed());
   }
   else if(EnemyCount == 2)
   {
      S.slow_print("You have encountered two ", S.getTextSpeed());
      S.slow_print(EnemySpecies, S.getTextSpeed());
   }
   else
   {
      S.slow_print("You have encountered a group of ", S.getTextSpeed());
      S.slow_print(EnemySpecies, S.getTextSpeed());
   }
}

void Game::worldMenu()
{
 Settings s;
    cout << "What should I do now?" << endl
         << "1. Explore" << endl
         << "2. Return home" << endl
         << "3. Market" << endl
         << "4. Save" << endl
         << "5. Quit" << endl << endl
         << "Choice: ";
         cin >> choice;

         switch(choice)
         {
         case 1:
            {
               s.clearScreen();
               cout << "We are exploring" << endl;
               battle("city");
            }
            break;
         case 2:
            s.clearScreen();
            cout << "This is to return home" << endl;
            break;
         case 3:
            s.clearScreen();
            cout << "This is to go to the market" << endl;
            break;
         case 4:
            s.clearScreen();
            cout << "This is to save progress" << endl;
            break;
         case 5:
             //Exits the game
            playing = false;
         default:
            s.clearScreen();
         }
}

