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
    
    random_device rd;
    mt19937 gen(rd());
    string enterbutton;
    string difficulty;
    
    

    
    cout<<"__________________   __________________    __________________    _______  _______       "<<endl;
    cout<<"|_____      _____|   |     -------     |   |   _____________|    |      \\/       |      "<<endl;
    cout<<"      |    |         |      ______    <    |   _____________|    |             <        "<<endl;   
    cout<<"      |____|         |____|       \\____|   |________________|    |______/\\_______|      "<<endl;
    cout<<"\n\n                     THE ROLE-PLAYING ADVENTURE GAME"<<endl;
    cout<<"\n\n                      PRESS '1' and 'Enter' TO START"<<endl;

    cin>> enterbutton;
    enterbutton = "1";

    cout<<"\n\n\n\n\n\n";    
    
    if (enterbutton == "1") {
    cout << "Loading..." << endl;
    this_thread::sleep_for(chrono::seconds(3));
}
    
    cout<<"\n\n\n\n\n\n";    


    cout<< "Welcome survivor to TREK. This game is soley based on your choices."<<endl;
    cout<< "What you choose throughout the game will impact your ending."<<endl;
    cout<< "Choose well and good luck!"<<endl;


    //Suggestion by joseph:

    // What if we tried making our story procedually generated?
    // using the chance system we discussed for the game, what 
    // if we could use the same system for the generation of our story!
    // For instance, our model is given 4 genre options to choose from. 
    // once the playre hits "enter", the computer will choose a random genre
    // from a pool to generate the story that way the player can always have a
    // different experience! This may be above our skill level but it's something
    // look into.

    //Braden Thoughts:
    //By procedural generation do you mean by AI? Or just having different genres?
    //I wouldn't mind working with AI on it but I don't know how it would turn out.
    //We could always do two modes, selected at the beginning: "Press 1 for man-made story 2 for AI story"

    //Joseph: 2




    

    game g1;

    // Suggestion from Joseph: I dont think there is a need to include character 
    // creation in game.cpp. I think it would be best if the character should 
    // be created in the player.h file. That way we can use a template class to handle
    // the different input as well as having a file dedicated to the character. 
    // I found some issues with the pointer method i.e. bkroll11 implemented.
    // failure to detect chars and strings and as well as out-of-bounds 
    // scenarios which can be fixed with the template class method and even
    // just implementing some standard condtinals. Will continue working on this tmmr.
    



    



    return 0;
}
