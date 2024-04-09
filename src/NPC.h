#include <iostream>
#include <vector>
#include <string>
#include "player.h"

using namespace std;

class NPC{
    private:
        string name; 
        float maxHealth;
        float health;
        int level;
        string type;
        friend player;

    public:

        NPC();
        void setName(string &n);
        void setMaxHealth(float &mH);
        void setHealth(float &h);
        void setLevel(int &pl);
        void setType(string t);

        string getName();
        float getMaxHealth();
        float getHealth();
        int getLevel();
        string getType();


};