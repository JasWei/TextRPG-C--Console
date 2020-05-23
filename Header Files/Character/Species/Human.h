#ifndef HUMAN_H
#define HUMAN_H

#include <Player.h>


class Human : public Player
{
    private:
    ///Player Stat Modifiers
    float defenseMod = -.04;                                      //Bare skin and soft, not a good combo
    float staminaMod = 04;                                        //4 chamber heart, excellent at long term
    float damageMinMod = -.05;                                    //Not all that strong, no natural weapons beyond limbs
    float damageMaxMod = .03;                                    //Fighting smart
    float evasivnessMod = -.05;                                  //Not the fastest or most nimble

    public:
        Human();
        ~Human();
};

#endif // HUMAN_H
