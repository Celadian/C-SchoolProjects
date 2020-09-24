#include <iostream>
#include <string>
#include "Player.h"
#include "RandomGenerator.h"

string checkWinner(string,string, int*);

using namespace std;

int main (){
	
	
	Player player;
	Player computer;
	RandomGenerator random;
	bool gameActive{true};
	string temp;
	int score[2]{0,0};
	
	string rock{"rock"}, paper{"paper"}, scissors{"scissors"};
	
	
	cout << "Welcome to rock paper scissors!" << endl;
	
	while(gameActive){
		cout << "\nType rock, paper, scissors or quit" << endl;
		cout << "Current Scores { " << " Player: " << score[0] << " Computer: " << score[1] << endl;
		
		cin >> temp;
		if(temp == "quit") break;
		player.setPlay(temp);
		computer.setPlay(random.newRoll(3));
		cout << computer.getPlay() << endl;
		cout << "The winner is: " << checkWinner(player.getPlay(), computer.getPlay(), score) << endl;
		
		
		
	}
	
	
}

string checkWinner(string playerChoice, string computerChoice, int *score){
	string winner;
	
	if(playerChoice == computerChoice){
		winner = "tie";
	} else if(playerChoice == "rock" && computerChoice == "scissors"){
		winner = "player";
		score[0]++;
	} else if(playerChoice == "paper" && computerChoice == "rock"){
		winner = "player";
		score[0]++;
	} else if(playerChoice == "scissors" && computerChoice == "paper"){
		winner = "player";
		score[0]++;
	} else {
		winner = "computer";
		score[1]++;
	}
	
	return winner;
}
