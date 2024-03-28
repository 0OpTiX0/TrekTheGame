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
    private:
        string playerName = 0;
        float luck = 0;
        float strength = 0;
        float intelligence = 0;
        float endurance = 0;
    public:
        player();
        void setName(string &n);
        void setLuck(float &l);
        void setStrength(float &s);
        void setIntellig(float &i);
        void setEnduranc(foat &e);

        string getName();
        float getLuck();
        float getStrength();
        float getIntellig();
        float getEnduranc();
    


};

#endif
