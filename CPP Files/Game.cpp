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
   }
   else
   {
      //This is where we will load the player file
   }
}
