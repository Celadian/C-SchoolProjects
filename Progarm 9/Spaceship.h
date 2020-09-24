#ifndef SPACESHIP_H
#define SPACESHIP_H
#define X 0
#define Y 1

#include <string>
#include <stdexcept>
#include <sstream>

#include "Spaceship.h"

class Spaceship{
	private:
		std::string Type {"DEFAULT"};
		int ID;
		int coords[2];
		
	protected:
		int getID() const;
		
		int setCoords(int xCoordinate, int yCoordinate);
		
	public:
		Spaceship(int);
		
		std::string toString() const;
};

#endif
