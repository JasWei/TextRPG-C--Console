#define _WIN32_WINNT 0x0500
#define SCREENWIDTH getmaxx()

#include "Settings.h"
#include "Player.h"
#include <windows.h>
#include <iostream>
#include <iomanip>

using std::cout;

Settings::Settings()
{
    setTextSpeed(70);
    speed = "70";
}

void Settings::slow_print(const std::string& str, int textspeed)
{
    //Goes through the string array and prints one char at a time
    for (int count = 0; count != str.size(); count++)
    {
        std::cout << str[count];
        //Delays each letter being printed by textspeed amount of milliseconds
        Sleep(textspeed);
    }
}

void Settings::changeTextSpeed()
{
    slow_print("Fast, Normal, or Slow text speed? ", 70);
    std::cin >> speed;

    if(speed == "Fast" || speed == "fast" || speed == "FAST")
    {
        setTextSpeed(120);
        //textspeed = 120;
    }
    else if(speed == "Normal" || speed == "normal" || speed == "NORMAL")
    {
        setTextSpeed(70);
        //textspeed = 70;
    }
    else if(speed == "Slow" || speed == "slow" || speed == "SLOW")
    {
        setTextSpeed(20);
        //textspeed = 20;
    }
}

void Settings::setTextSpeed(int value)
{
    textspeed = value;
}

int Settings::getTextSpeed()
{
    return textspeed;
}

void Settings::centerstring(char* s)
{
HANDLE hOut;
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
COORD NewSBSize;
NewSBSize = GetLargestConsoleWindowSize(hOut);
int l=strlen(s);
int pos=(int)((NewSBSize.X-l)/2);
for(int i=0;i<pos;i++)
cout<<" ";

cout<<s;
}
/*
    This function clears the screen
*/
void Settings::clearScreen()
{
   system("CLS");
}
