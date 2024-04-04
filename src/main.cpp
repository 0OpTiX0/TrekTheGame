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
#include "game.h"

using namespace std;

int main() {
    player mainChar;
    float x = 1.5 ;
    double z = 5.5;
    string y = "joseph";


    //this simulates a player being created.


    mainChar.setName(y);
    mainChar.setStrength(x);
    mainChar.setEnduranc(x);
    mainChar.setIntellig(x);
    mainChar.setLuck(x);
    //set player level will not be used in this case, but will be used in the game by other functions.
    mainChar.setPlayerLv(8);

    cout<< "Name: "<<mainChar.getName()<<endl;

    z = 750.9;

    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl;

    mainChar.changeExp(z);
    
    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl;








    
}
