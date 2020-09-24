#include <string>


class Car {
	
	private:
		std::string make;
		int price;
		
	public:
		Car(std::string enteredMake, int enteredPrice){
			make = enteredMake;
			price = enteredPrice;
		}
		
		std::string getMake(){
			return make;
		}
	
		int getPrice(){
			return price;
		}
};
