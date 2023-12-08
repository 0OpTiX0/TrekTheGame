#ifndef GAME_H
#define GAME_H

#include "player.h"

#include <string>
#include <iostream>
#include <vector>
#include <string>

//This Class is to manage the the game. 
//It will have the main function and helper functions to run the game.
class game{

public:
    void playGame();
    void createPlayer();
    

private:
    player mainChar;

};

#endif
