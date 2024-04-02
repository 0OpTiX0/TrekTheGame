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
    mainChar.setPlayerLv(0);

    cout<< "Name: "<<mainChar.getName()<<endl;
    cout<< "Strength: "<<mainChar.getStrength()<<endl;
    cout<< "Endurance: "<<mainChar.getEnduranc()<<endl;
    cout<< "Intelligence: "<<mainChar.getIntellig()<<endl;
    cout<< "Luck: "<<mainChar.getLuck()<<endl;
    cout<< "Level: "<<mainChar.getPlayerLv()<<endl;



    
    //this will simulate a player gaining xp and leveling up.

    /*

    cout<<endl<<endl;
    cout<<"simulating xp increase."<<endl;
    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl;
    
    mainChar.changeExp(z);

    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl;
    cout<<endl<<endl;
    cout<<"simulating level up"<<endl;

    z = 200.0;
    
    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl<<endl;

    cout<<"+200 XP"<<endl;
    mainChar.changeExp(z);
    
    cout<< "current XP: "<<mainChar.getExp()<< "/"<<mainChar.getPlayerLv()*100<<endl;
    cout<<"Player Level: "<<mainChar.getPlayerLv()<<endl;

    */



   //this will simulate a player gaining HP and losing HP.

cout<<endl<<endl;
cout<<"simulating HP."<<endl;

double h = 5.0;
double d = -25.0;

cout<< "current HP: "<<mainChar.getHealth()<< "/"<< mainChar.getMaxHealth()<<endl;



z = 200.0;
    


cout<<"+200 XP"<<endl;
mainChar.changeExp(z);

cout<< "current HP: "<<mainChar.getHealth()<< "/"<< mainChar.getMaxHealth()<<endl;


cout<<endl<<endl;
cout<<"simulating damage. after level up"<<endl;





cout<<"-25 HP"<<endl;
mainChar.alterHealth(d);
cout<< "current HP: "<<mainChar.getHealth()<<endl;











    
}
