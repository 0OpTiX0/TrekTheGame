#ifndef PLAYER_H
#define PLAYER_H


#include <string>
#include <iostream>
#include <vector>
#include <string>

//This Class is to manage the player character for the game. 
//It will hold all stats that will be used for skill checks.
class player{

public:
    player();
    player(string, int, int, int, int, int, int, int);
    string name;

    //Stats:
    //For now stats will have a range of -5 to +5
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
