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
    player();

    // Too tired to implement, need to figure out how to get template class to take in
    // different datatypes...
    player();
    T getInfo(string x);
    T getInfo(int x)

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
