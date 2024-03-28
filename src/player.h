#ifndef PLAYER_H
#define PLAYER_H


#include <string>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//This Class is to manage the player character for the game. 
//It will hold all stats that will be used for skill checks.

class player{
    private:
        string playerName;
        float luck;
        float strength;
        float intelligence;
        float endurance;
    public:
        player();
        void setName(string &n);
        void setLuck(float &l);
        void setStrength(float &s);
        void setIntellig(float &i);
        void setEnduranc(float &e);
        void changeStat(string &t, float &cs);
        

        string getName();
        float getLuck();
        float getStrength();
        float getIntellig();
        float getEnduranc();
    


};

#endif
