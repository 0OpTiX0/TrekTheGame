#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "NPC.h"


using namespace std;


void NPC::setName(string &n){
    name = n;
}

//This function will decide the level of NPC characters
//The level will always be between zero and three levels above the players level.
//The deciding factor of that level will be rolling a d10.
void NPC::setLevel(int & pl){
    srand(time(NULL));

    int lvChance  = (rand() % 10)+1;

    // if the dice rolls a number between 1-3, the lv will remain the same
    if(lvChance >= 1){
        level = pl+0;
    }
    // if the dice rolls a number between 4 and 6, the lv will increase by 1
    if(lvChance >= 4){
        level = pl+1;
    }
    //if the dice rolls a number between 7 and 8, the lv will be increased by 2
    if(lvChance >= 7){
        level = pl +2;
    }
    //if the dice rolls a number between 9 and 10, the level will increased by 3
    if(lvChance >= 9){
        level = pl +3;
    }
    


}


//work on health, defense, class and attack method for NPC (for character work on attack method as well!)
