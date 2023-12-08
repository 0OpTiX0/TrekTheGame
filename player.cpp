#include "player.h"

using namespace std;

//Constructors:
//Default:
player::player(){
    this->name = "John Doe";
}

//Constructor with parameters:
player::player(string aName, int aStre, int aIntell, int aPerc, int aEndur, int aCharis, int aAgil, int aLuck){
    this->name = aName;
    this->strength = aStre;
    this->intelligence = aIntell;
    this->perception = aPerc;
    this->endurance = aEndur;
    this->charisma = aCharis;
    this->agility = aAgil;
    this->luck = aLuck;
}

