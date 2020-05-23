#include "Player.h"
#include "Menu.h"
#include "Game.h"
int main()
{
    srand(time(NULL));
    Game game;
    Player P1;

    while(game.getPlaying())
    {
    game.mainMenu();
    }

	return 0;
}
