#include<iostream>
#include<string>
#include"player.h"




//default constructor
player::player(){
    endurance = 0;
    playerName ="DEFAULT";
    intelligence = 0;
    luck = 0;
    strength = 0;
    pLevel = 1;
    pHealth = 25;
    pMaxHealth = 25;
    experience = 0;
    
}

//Setters~~~~~~~~~~~

//Sets playername to user selected string at beginning of the game.
void player::setName(string &n){
    playerName = n; 
}

//Sets player endurance at the beginning of the game.
void player::setEnduranc(float &e){

    if(e < -5 || e > 5){
        cerr<<"ERROR: OUTSIDE STAT BOUNDS."<<endl;
        return;
    }

    endurance = e;

}
//Sets player intelligence at the beginnign of the game.
void player::setIntellig(float &i){

    if(i < -5 || i > 5){
        cerr<<"ERROR: OUTSIDE STAT BOUNDS."<<endl;
        return;
    }

    intelligence = i;

}
//sets player luck at the beginning of the game
void player::setLuck(float &l){

    if(l < -5 || l > 5){
        cerr<<"ERROR: OUTSIDE STAT BOUNDS."<<endl;
        return;
    }

    luck = l;

}
// sets strength value at the beginning of the game.
void player::setStrength(float &s){

    if(s < -5 || s > 5){
        cerr<<"ERROR: OUTSIDE STAT BOUNDS."<<endl;
        return;
    }

    strength = s;
}

//changes player stat values in game
void player::changeStat(string &t, float &cs){
    //base cases to prevent bounding errors.
    if (getLuck()>5 || getLuck()<-5){
        cout<<"LV MAX"<<endl;
        return;
    }
    else if(getIntellig()>5 || getIntellig()<-5){
        cout<<"LV MAX"<<endl;
        return;
    }
    else if(getStrength()>5 || getStrength()<-5){
        cout<<"LV MAX"<<endl;
        return;
    }
    else if(getEnduranc()>5 || getEnduranc()<-5){
        cout<<"LV MAX"<<endl;
        return;
    }

    //if lv is not maxed, lv is changed. IF lv change goes over boundary, the value is set to max value.
    else{
        if(t == "lukUp"){
            luck = luck + cs;
            if(luck > 5){
                luck = 5;
            }
        }
        if(t == "lukDn"){
            luck = luck - cs;
            if(luck < -5){
                luck = -5;
            }
        }
        if(t == "strUp"){
            strength = strength + cs;
            if(strength > 5){
                strength = 5;
            }
        }
        if(t == "strDn"){
            strength = strength - cs;
            if(strength< -5){
                strength = -5;
            }
        }
        if(t == "endUp"){
            endurance = endurance + cs;
            if(endurance > 5){
                endurance = 5;
            }
        }
        if(t == "endDn"){
            endurance = endurance - cs;
            if(endurance < -5){
                endurance = -5;
            }
        }
        if(t == "intUp"){
            intelligence = intelligence + cs;
            if(intelligence > 5){
                intelligence = 5;
            }
        }
        if(t == "intDn"){
            intelligence = intelligence - cs;
            if(intelligence < -5){
                intelligence = -5;
            }
        }
    }
}

//This will be used in states where heath is being manipulated.
double player::alterHealth(double &cs){
    pMaxHealth = getMaxHealth();
    const int MINIMUM = 0;



    // stating heath is 25 and increments by 25 per level
    // max lv health is 100. Implement this limit and allow it to be changed per lv up. alterHealth() and getHealth()
    // need to be created and implemented. alterHealth() has a max range of 0-max and can be changed when a player
    // heals and takes damage. 


    // player's maximum health is determined via their level.
    

    //keeps health in bounds so erors dont occur.
    if (pHealth > pMaxHealth || pHealth < MINIMUM){
        cerr<<"ERROR: HEALTH OUT OF BOUNDS"<<endl;
        return 1001;
    }

    //damage condition that also ensures tha the health boundaries arent violated.
    if (cs <= 0){
        pHealth += cs;
        if(pHealth <= MINIMUM){
            pHealth = MINIMUM;
            cout<<"DEATH STATE"<<endl;
            return MINIMUM;
        }

    }

    //healing condition that also ensures that the health boundaries arent violated.
    if (cs >= 0){
        pHealth += cs;

        if(pHealth >= pMaxHealth){
            pHealth = pMaxHealth;
            cout <<"FULL HEALTH"<<endl;
            return pMaxHealth;
        }
    }

    return pHealth;
}

void player::setMaxHealth(double h){
    pMaxHealth = pMaxHealth+h;
}

double player::getMaxHealth(){
    return pMaxHealth;
}


void player::setPlayerLv(int lv){
    pLevel += lv;
    if (pLevel <= 0){
        cout<< "LEVEL OUT OF BOUNDS, DEBUG IMMEDIATELY"<<endl;
        pLevel = 1;
    }
    
    if(pLevel >= 10){
        cout<< "LEVEL MAX!"<<endl;
        pLevel = 10;
    }
    
}

void player::changeExp(double &exp){

    const double MINIMUM = 0;
    //max exp is calculated based on player level. It is 10x the level. (1; 100)
    double maxExp = static_cast<double>(pLevel) * 100;

    if (maxExp < 0){
        cerr<< "ERROR: EXP OUT OF BOUNDS"<<endl;
        return;
    }
    //when a player gains exp, it is simply added to the current exp.
    experience += exp;
    
    

    //when a player levels up, the level is incremented and the current exp is set to 0.
    if(experience >= maxExp){
        cout<<"LEVEL UP"<<endl;
        //this will increase the player's level by 1. THIS SHOULD NEVER BE NEGATIVE!
        setPlayerLv(1);
        // this will increase the player's health by 25.
        setMaxHealth(25);
        pHealth = pMaxHealth;
        experience = MINIMUM;
    }
}




//Getters~~~~~~~~~~~~




//Sends playername elsewhere
string player::getName(){
    return playerName;
}
//sends strength value elsewhere
float player::getStrength(){
    return strength;
}

//sends intelligence value elsewhere
float player::getIntellig(){
    return intelligence;
}

//sends endurance value elsewhere
float player::getEnduranc(){
    return endurance;
}

//sends luck value elsewhere
float player::getLuck(){
    return luck;
}
//sends player level elsewhere
int player::getPlayerLv(){
    return pLevel;
}
//sends player health elsewhere
double player::getHealth(){
    return pHealth;
}
//sends player level elsewhere


double player::getExp(){
    return experience;
}


