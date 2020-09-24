#ifndef RNG_H
#define RNG_H

#include <time.h>
#include <random>


class RNG{
	public:
		RNG(){
			srand(time(NULL));
		}
		
		int roll(int numberOf){
			return rand() % numberOf;
		}	
};

#endif
