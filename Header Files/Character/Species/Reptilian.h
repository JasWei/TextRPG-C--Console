#ifndef REPTILIAN_H
#define REPTILIAN_H

#include <Player.h>


class Reptilian : public Player
{
   private:
    ///Player Stat Modifiers
    int defenseMod = 1.03;                                      //Scales provide decent armor against bare attacks
    int staminaMod = .04;                                       //3 chambered heart reduces blood flow
    int damageMinMod = .03;
    int damageMaxMod = .08;
    int evasivnessMode = .06;                                   //Color change to blend in but scales are noisy

    public:
        Reptilian();
        ~Reptilian();
};

#endif // REPTILIAN_H
