#pragma once
#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Settings.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdlib.h>
//For srand function using in battle
#include <time.h>

class Game
{
private:
    int choice;
    bool playing;
public:
    Game();
    ~Game();

    ///Functions
    //The main menu you see when you first load up the game
    void mainMenu();
    //Is this a new file or a returning file?
    void GamePlay(bool NewLoad);
    //This function is for initiating and carrying out a battle sequence
    //The location parameter is used to determine what encounters you may face
    void battle(string location);
    //This function is the menu the player will use to navigate the world
    void worldMenu();
    ///Accessors
    //Are we playing the game?
    bool getPlaying() const;

    ///Modifiers
};
#endif // GAME_H

