#include "Player.h"



Player::Player(){
	playerClass = "Knight";
	level = 0;
}

Player::Player(std::string enteredClass){
	playerClass = enteredClass;
	level = 0;
}

Player::Player(std::string enteredClass, int startingLevel){
	playerClass = enteredClass;
	level = startingLevel;
}


std::string Player::getClass(){return playerClass;}

   int Player::getLevel(){return level;}
   
   
