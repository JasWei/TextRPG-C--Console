#include "Human.h"

Human::Human()
{
    Player P;
    P.setDefense(protection() + (protection()*defenseMod));
    P.setStamina(getStamina() + (getStamina()*staminaMod));
    P.setDamMin(getDamMin() + (getDamMin()*damageMinMod));
    P.setDamMax(getDamMax() + (getDamMax()*damageMaxMod));
    P.setEvasivness(getEvasiveness() + (getEvasiveness()*evasivnessMod));
}

Human::~Human()
{
    //dtor
}
