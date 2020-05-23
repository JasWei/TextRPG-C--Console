#ifndef FELINE_H
#define FELINE_H

#include <Player.h>


class Feline : public Player
{
    private:
    ///Player Stat Modifiers
    int defenseMod = .06;                                      //Thick layer of fur provides some coverage
    int staminaMod = .07;                                      //More efficient as fast movements than long term movements
    int damageMinMod = .03;
    int damageMaxMod = .08;                                    //Swift, nimble, claws
    int evasivnessMode = 1.06;                                 //Good night vision, quiet, fast

    public:
        Feline();
        ~Feline();
};

#endif // FELINE_H
