#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "NPC.h"
#include "player.h"


using namespace std;

/*
    string name; 
    float maxHealth;
    float health;
    int level;
    string type;
*/

NPC::NPC(){
    name = "ENEMY_X";
    maxHealth = 20.0;
    health = maxHealth;
    type = "DEFAULT";
    level = 0;
}



void NPC::setName(string &n){
    name = n;
}

string NPC::getName(){
    return name;
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




// There are three enemy types: minor, medium, and major. Major will have the most health and attack power,
    // medium will have a balanced set of health and attack power, and minor will have the least amound of 
    // health and attack power. Majors will have 2.5x the health and 1.5x the attack power as the player.Mediums
    // will have 2x the health and 1.25x the attack power of the player. Minors will have 1.5x the health and 1x
    // the attack power of the player.

void NPC::setType(string t){

    if(t == "minor"){
        type = "minor";
    }

    if(t == "medium"){
        type = "medium";
    }
    
    if(t == "major"){
        type = "major";
    }
    

}

string NPC::getType(){
    return type;
}

void NPC::setHealth(float &h){
    const int MINIMUM = 0;
    //lower and upper boundaries for NPC health.
    //Damage condtion
    if(h <= 0){
        health += h;
        if(health < MINIMUM){
            health = 0;
        }
    }

    //Healing condition
    if(h >= 0){
        health += h;
        if (health < maxHealth){
            health = maxHealth;
        }
    }

    if (health == MINIMUM){
        cout<<"ENEMY DEFEATED!";
    }

  
}

float NPC::getHealth(){
    return health;
}



void NPC::setMaxHealth(float &n){
    

    if(type == "minor"){
        maxHealth = n * 1.5;
    }
    if(type == "medium"){
        maxHealth = n * 2.0;
    }
    if(type == "major"){
        maxHealth = n *2.5;
    }
    health = maxHealth;

}

float NPC::getMaxHealth(){
    return maxHealth;
}

int NPC::getLevel(){
    return level;
}










//work on health, defense, class and attack method for NPC (for character work on attack method as well!)
