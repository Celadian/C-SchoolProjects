#include <time.h>
#include <random>
//this is a class I made for another project I was working on. 
//seemed in the spirit of good programming practices to not rewrite code

class RandomGenerator{
	public:
		RandomGenerator(){
			srand(time(NULL));
			
			
		}
		
		int newRoll(int numberOf){
			return rand() % numberOf;
		}	
};

