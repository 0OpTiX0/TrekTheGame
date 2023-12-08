#include "game.h"

using namespace std;

//Main function, calls all other functions:
void game::playGame(){

}

//Creates the Player:
void game::createPlayer(){
    string aName;

    cout<<"Lets start your character creation!"<<endl;

    //Taking in variables:
    cout<<"Please type your name:"<<endl;
    cin>>mainChar.name;
    
    cout<<"How strong are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.strength;
    cout<<"How smart are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.intelligence;
    cout<<"How perceptive are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.perception;
    cout<<"How much can you endure? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.endurance;
    cout<<"How charismatic are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.charisma;
    cout<<"How fast are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.agility;
    cout<<"How lucky are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.luck;
    //PUT STATS OR CLASS INPUT HERE

}