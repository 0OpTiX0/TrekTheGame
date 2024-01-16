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

using namespace std;

int main() {
    
    random_device rd;
    mt19937 gen(rd());
    string enterbutton;
    string usrName;
    

    
    cout<<"__________________   __________________    __________________    _______  _______       "<<endl;
    cout<<"|_____      _____|   |     ---------   |   |   _____________|    |      \\/       |      "<<endl;
    cout<<"      |    |         |      ______    <    |   _____________|    |             <        "<<endl;   
    cout<<"      |____|         |____|       \\____|   |________________|    |______/\\_______|      "<<endl;
    cout<<"\n\n                     THE ROLE-PLAYING ADVENTURE GAME"<<endl;
    cout<<"\n\n                          PRESS ENTER TO START"<<endl;

    cin>> enterbutton;
    enterbutton = "1";

    cout<<"\n\n\n\n\n\n";    
    
    if (enterbutton == "1") {
    cout << "Loading..." << endl;
    this_thread::sleep_for(chrono::seconds(3));
}
    
    cout<<"\n\n\n\n\n\n";    


    cout<< "Welcome "<<usrName<< " to TREK. This game is soley based on your choices."<<endl;
    cout<< "What you choose from even character creation will impact your ending."<<endl;
    cout<< "Choose well and good luck!"<<endl;
    

    player character;
    character.createPlayer();



    return 0;
}