//For the Devs: DO NOT USE GPT! This is a demonstration of our abilities as software engineers. Lets show 
//recruiters that we are capable of producing something functional and enjoyable!


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <thread>

#include "player.h"
#include "NPC.h"
#include "game.h"

using namespace std;

int main() {
    string x = "goblin";

    string y = "minor";
    string z = "medium";
    string a = "major";

    float playerMax = 25.0;
    float playerMax2 = 50.0;
    float playerMax3 = 75.0;

    NPC goblin;

    goblin.setName(x);
    cout<< goblin.getName()<<endl<<endl;


    goblin.setType(y);
    cout<<goblin.getType()<<endl<<endl;

    goblin.setMaxHealth(playerMax);

    cout<<"NPC's Health: "<<goblin.getHealth()<<"/"<<goblin.getMaxHealth()<<endl<<endl;
    





    
}