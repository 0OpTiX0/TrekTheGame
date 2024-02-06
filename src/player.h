#ifndef PLAYER_H
#define PLAYER_H


#include <string>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//This Class is to manage the player character for the game. 
//It will hold all stats that will be used for skill checks.

template <class T>
class player{

public:

    player(){ name = "default"; strength = 0; intelligence = 0; 
    perception = 0; endurance = 0; charisma = 0; agility = 0; luck = 0;};

  

    //Stats:
    //For now stats will have a range of -5 to +5
    string name;
    int strength;
    int intelligence;
    int perception;
    int endurance;
    int charisma;
    int agility;
    int luck;



private:

    





};

#endif
