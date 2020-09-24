#include "Speeder.h"

Speeder::Spaceship(int ID){
	
	
}

Speeder::toString(){
		std::ostringstream output;
			output << fixed;
			output << Type << " ID" <<  getID() << " Current Position: " << coords[X] << "," << coords[Y] << std::endl;
			return output.str();
}
