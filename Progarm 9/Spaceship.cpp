#include "Spaceship.h"


Spaceship::Spaceship(int newID){
	ID = newID;
	setCoords(10,10);

}

Spaceship::getID() const{
	return ID;
}

Spaceship::setCoords(int xCoordinate, int yCoordinate){
		coords[X] = xCoordinate;
		coords[Y] = yCoordinate;
}


std::string Spaceship::toString() const{
			std::ostringstream output;
			output << std::fixed;
			output << Type << " ID" <<  getID() << " Current Position: " << coords[X] << "," << coords[Y] << std::endl;
			return output.str();
}


