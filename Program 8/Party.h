#ifndef PARTY_H
#define PARTY_H
#include <vector>
#include <iostream>

class Party{
	private:
		std::vector<Player> partyList;

	public:
		void operator ++() 
		{ 
			Player newPlayer;
			partyList.push_back(newPlayer);
		}
		
		void operator +=(Player& newPlayer)
		{
			partyList.push_back(newPlayer);
       	}
       	
       	void print(){
       		std::cout << std::setw(10) << "Class: " << std::setw(10) << "Level: " << std::endl;
       		for(int i = 0; i < partyList.size(); i++){
       			std::cout << std::setw(10) << partyList[i].getClass() << std::setw(10) << partyList[i].getLevel() << std::endl;
       		}
       	}
	

};


#endif
