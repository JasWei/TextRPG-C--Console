#ifndef SETTINGS_H
#define SETTINGS_H
// SETTINGS_H

#include <string>

class Settings
{
private:
    int textspeed = 70;
    std::string speed;

public:
    Settings();
    void changeTextSpeed();
    void slow_print(const std::string& str, int textspeed);
    void setTextSpeed(int value);
    int getTextSpeed();
    void centerstring(char* s);
    void menu();
    void clearScreen();
};

#endif
