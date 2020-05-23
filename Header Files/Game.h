#pragma once
#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Settings.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdlib.h>

class Game
{
private:
    int choice;
    bool playing;
public:
    Game();
    ~Game();

    //Functions
    void mainMenu();
    void GamePlay(bool NewLoad);
    //Accessors
    bool getPlaying() const;

    //Modifiers
};
#endif // GAME_H

