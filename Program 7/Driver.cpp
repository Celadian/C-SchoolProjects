#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Player.h"
#include "RandomGenerator.h"
#include "Party.h"


using namespace std;

int main(int argc, char** argv) {

	
	Party playersParty;
	RandomGenerator rand;
	
	for(int i = 1; i < 6; i++){
		int roll{0};
		string chosenClass{""};
		int chosenLevel{};
		roll = rand.newRoll(3);
		switch(roll){
			case 0:{
				cout << endl;
				cout << "Enter Player " << i << " class:";
				cin >> chosenClass;
				cout << "Enter Player " << i << " level:";
				cin >> chosenLevel;
				Player newPlayer(chosenClass, chosenLevel);
				
				break;
			}
			
			case 1:{
				cout << endl;
				cout << "Enter Player " << i << " class:";
				cin >> chosenClass;
				cout << "Player " << i << " created with default level" << endl;
				Player newPlayer(chosenClass);
				playerList.push_back(newPlayer);
				break;
			}
		
			case 2:{
				cout << endl;
				cout << "Player " << i << " created with default class and level" << endl;
				Player newPlayer;
				playerList.push_back(newPlayer);
				break;
			}
		}
		cout << "Player " << i << " created" << endl;
		
	}
	
	
	return 0;
}


