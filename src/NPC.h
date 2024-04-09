#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NPC{
    private:
        string name; 
        float maxHeath;
        float health;
        int level;
        string type;

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