#include <string>


#ifndef TIME_H
#define TIME_H

class Player{
	private:
		std::string playerClass;
		int level;
		
	public:
		Player();
		Player(std::string enteredClass);
		Player(std::string enteredClass, int startingLevel);
		
		int getLevel();
		std::string getClass();
		
		
};

#endif
