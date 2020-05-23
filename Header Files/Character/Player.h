//Header file for Player
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using std::string;

class Player
{
private:
    ///THE PLAYER'S ATTRIBUTES
	int health;
	int maxHealth;
	int level;
	int exp;
	int expNext;
	int stamina;
	string name;
	int damMin;
	int damMax;
	int defense;
	int evasiveness;
	///Player Description
	string hairColor;
	string eyeColor;
	string species;


	string yn;                                                    //Used for taking yes or no answers
public:
    Player();                                                   //Player object
    ///Functions

    void makePlayer();
    ///Accessors
	inline int getHealth() const {return this->health;}        //Retrieve the health of the player
	inline int getmaxHealth() const {return this->maxHealth;}
	inline int getLevel() const {return this->level;}          //Retrieve the current level of the player
    inline int getExp() const {return this->exp;}              //Retrieve current exp amount
	inline int getExpNext() const {return this->expNext;}      //Retrieve next exp
	inline int getStamina() const {return this->stamina;}      //Retrieve stamina
	inline string getName() const {return this->name;}         //Retrieve Player name
    inline int getDamMin() const {return this->damMin;}        //Retrieve minimum damage
    inline int getDamMax() const {return this->damMax;}        //Retrieve maximum damage
    inline int getDefense() const {return this->defense;}      //Retrieve defense
    inline int getEvasiveness() const {return this->evasiveness;}//Retrieve Evasiveness
    ///Modifiers
    void actions();                                             //Actions the player can make
    ///Change Stats
    inline int setDefense(int D) {defense = D;}                 //Sets the new defense stat
    inline int setStamina(int S) {stamina = S;}                 //Sets the new stamina stat
    inline int setDamMin(int D) {damMin = D;}                   //Sets the new damMin stat
    inline int setDamMax(int D) {damMax = D;}                   //Sets the new damMax stat
    inline int setEvasivness(int E) {evasiveness = E;}          //Sets the new evasiveness stat
    ///Modifiers for player description
	void setName();                                             //Sets the name of the player
    void PlayerDescriptionHair();                               //Sets Player hair
    void PlayerDescriptionEyes();                               //Sets eye color
    void PlayerRace();

    int protection();


};

#endif
