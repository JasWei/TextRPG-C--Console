/*
#include "Menu.h"
#include "Settings.h"
#include "Player.h"
#include <iostream>
#include <stdlib.h>

void Menu::menu()
{
    int choice = 0;
    Settings S;
    Player P1;
    while(true)
    {
    S.centerstring("Welcome to TEXT RPG");
    S.centerstring("1. Start New Game");
    S.centerstring("2. Load Game");
    S.centerstring("3. Exit");

    switch(choice)
    {
    case 1: std::cout << "Welcome new player!";
            P1.makePlayer();
        break;
    case 2: std::cout << "Loading...";
        break;
    case 3: exit;
            //Exits the game
        break;
    default: std::cout << "Not an option";
    }
    }

}
*/
