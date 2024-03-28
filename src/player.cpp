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

    // stating heath is 20 and increments by 25 per level
    // max lv health is 200. Implement this limit and allow it to be changed per lv up. alterHealth() and getHealth()
    // need to be created and implemented. alterHealth() has a max range of 0-max and can be changed when a player
    // heals and takes damage. 




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

double player::alterHealth(double &cs){


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




