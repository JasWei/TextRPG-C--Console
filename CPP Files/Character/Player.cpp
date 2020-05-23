//Player class functions

#include "Player.h"
#include "Settings.h"
#include <string>
#include <iostream>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
/*
    The default constructor for building the player character
*/
Player::Player()
{
    //Attributes
	health = 100;
	maxHealth = 100;
	level = 1;
	exp = 0;
	expNext = 10;
	stamina = 100;
	name = "";
	damMin = 0;
	damMax = 10;
	defense = 100;
	evasiveness = 100;

	//Descriptive Details
	hairColor = "";
	eyeColor = "";
	species = "";
}

void Player::setName()
{
    Settings s;
	bool confirm = false;
    string line;
	s.slow_print("What is your name? ", s.getTextSpeed());
	while (confirm == false)
	{
	    cin.clear();
	    cin.ignore();
		std::getline(cin, name);
		//Clears the console screen
		s.clearScreen();
		s.slow_print("So your name is ", s.getTextSpeed());
        s.slow_print(name, s.getTextSpeed());
        s.slow_print("? ", s.getTextSpeed());
        cout << "[Y/N] ";
		cin >> yn;
		//Used to keep program from skipping getline, in the event that the player decides to change their name
		if (yn == "Y" || yn == "y")
		{
            confirm = true;
		}
		else //((yn != 'Y' && yn != 'y') || (yn == 'N' || yn == 'n'))
		{
			s.slow_print("I said- what is your name? ", s.getTextSpeed());
		}
	}
}
/*
    This function sets the players hair color
*/
void Player::PlayerDescriptionHair()
{
    Settings s;
    int choice;
    bool done = false;
    s.slow_print(name, s.getTextSpeed());
    s.slow_print("'s Hair Color: ", s.getTextSpeed());
    cout << endl
         << "1. Amber" << endl
         << "2. Blonde" << endl
         << "3. Platinum Blonde" << endl
         << "4. Brown" << endl
         << "5. Chocolate Brown" << endl
         << "6. Dark Brown" << endl
         << "7. Black" << endl
         << "8. Brunette" << endl
         << "9. Red" << endl;
    while(done == false)
    {
    cin >> choice;
    switch(choice)
    {
    case 1:
        hairColor = "Amber";
        done = true;
        break;
    case 2:
        hairColor = "Blonde";
        done = true;
        break;
    case 3:
        hairColor = "Platinum Blonde";
        done = true;
        break;
    case 4:
        hairColor = "Brown";
        done = true;
        break;
    case 5:
        hairColor = "Chocolate Brown";
        done = true;
        break;
    case 6:
        hairColor = "Dark Brown";
        done = true;
        break;
    case 7:
        hairColor = "Black";
        done = true;
        break;
    case 8:
        hairColor = "Brunette";
        done = true;
        break;
    case 9:
        hairColor = "Red";
        done = true;
        break;
    default:
        cout << "That doesn't make any sense..." << endl;
    }
    }
    //Clears the console screen
    s.clearScreen();
}
/*
    This function sets the players race/species
*/
void Player::PlayerRace()
{
    //Clears cin so it doesn't carry over
    cin.clear();
    Settings s;
    int choice;
    bool done = false;
    //Ask user for species
    s.slow_print("What is your species", s.getTextSpeed());
    s.slow_print(":", s.getTextSpeed());
    //The menu
    cout << endl
         << "1. Human" << endl
         << "2. Reptilian" << endl
         << "3. Feline" << endl;
    //Loop until we get a valid answer
    while(done == false)
    {
        cin >> choice;
        switch(choice)
        {
        case 1:
            species = "Human";
            done = true;
            break;
        case 2:
            species = "Reptile";
            done = true;
            break;
        case 3:
            species = "Feline";
            done = true;
            break;
        default:
            cout << "That doesn't make any sense..." << endl;
        }
    }
    //Clears the console screen
    s.clearScreen();
}
/*
    This function sets the player eye color
*/
void Player::PlayerDescriptionEyes()
{
    Settings s;
    int choice;
    bool done = false;
    s.slow_print(name, s.getTextSpeed());
    s.slow_print("'s Eye Color: ", s.getTextSpeed());
    cout << endl
         << "1. Black" << endl
         << "2. Blue" << endl
         << "3. Brown" << endl
         << "4. Gray" << endl
         << "5. Green" << endl
         << "6. Red" << endl;
    while(done == false)
    {
    cin >> choice;
    switch(choice)
    {
    case 1:
        eyeColor = "Black";
        done = true;
        break;
    case 2:
        eyeColor = "Blue";
        done = true;
        break;
    case 3:
        eyeColor = "Brown";
        done = true;
        break;
    case 4:
        eyeColor = "Gray";
        done = true;
        break;
    case 5:
        eyeColor = "Green";
        done = true;
        break;
    case 6:
        eyeColor = "Red";
        done = true;
        break;
    default:
        cout << "That doesn't make any sense..." << endl;
    }
    }
    //Clears the console screen
    s.clearScreen();
}
/*
    This function calls the other functions used in designing the player
*/
void Player::makePlayer()
{
    setName();
    PlayerRace();
    PlayerDescriptionHair();
    PlayerDescriptionEyes();
}
/*
    This function calculates the protection rating the player has
    ********************For now it's just a default of 10********
*/
int Player::protection()
{
    return 10;
}
