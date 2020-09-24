#include <iostream>
#include "rng.h"
#include "Spaceship.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Spaceship newSpaceship(1);
	std::cout << newSpaceship.toString() << std::endl;
	
	return 0;
}
