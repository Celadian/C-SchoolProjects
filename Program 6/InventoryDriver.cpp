#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctype.h>
#include "Car.h"

using namespace std;

void displayMenu();
void addData(vector<Car>&);
void deleteData(vector<Car>&);
void printData(vector<Car>&);



int main() {
	vector <Car> inventory;
	bool on{true};
	int choice{0};	
	cout << "Welcome to the JJC dealership inventory program" << endl;
	while(on){
		
		
		
		
		displayMenu();
		cin >> choice; //so i noticed upon typing any letter into this on accident, it activates a while loop and seems to break the program. Could you explain why and how I could resolve this?
		if (cin.fail()){ //actually I think i fixed it here! This was a process to solve!
			cout << "ERROR -- You did not enter an integer" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			choice = 0;
		}
		
		
		switch(choice){ 
			case 1:
				addData(inventory);
				break;
			case 2:
				deleteData(inventory);
				break;
			case 3:
				printData(inventory);
				break;
			case 4:
				on = false;
				break;
			default:
				cout << "Not valid choice" << endl;
				break;
		}
		
		
		
	}
	
	
	
	
	
	
}

void addData(vector<Car> &inventory){
	int price;
	string make;
	cout << "Please enter make and cost of car separated by a space!" << endl;
	cout << "Make/cost: ";
	cin >> make >> price;
	Car newCar(make, price);
	inventory.push_back(newCar);
	
	
}

void deleteData(vector<Car> &inventory){
	string removeChoice;
	cout << "which car would you like to remove?" << endl;
	cout << "Remove: ";
	cin >> removeChoice;
	for(int i = 0; i < inventory.size(); i++){
		if(removeChoice == inventory[i].getMake()){
			inventory.erase(inventory.begin() + i);
		}
	}
	cout << "\n" << removeChoice << " removed from list." << endl;
}

void printData(vector<Car> &inventory){
	cout << setw(20) << "Make" << setw(10) << "Price" << endl;
	cout << setw(20) << "----" << setw(10) << "-----" << endl;
	for(int i = 0; i < inventory.size(); i++){
		cout << setw(20) << inventory[i].getMake() << setw(10) << inventory[i].getPrice() << endl;
	}
}

void displayMenu(){
		cout << "###################################" << endl;
		cout << "#         Choose an item          #" << endl;
		cout << "# 1. Add a car to inventory       #" << endl;
		cout << "# 2. Delete a car from inventory  #" << endl;
		cout << "# 3. Print Inventory              #" << endl;
		cout << "# 4. exit                         #" << endl;
		cout << "###################################" << endl;
		cout << "\nNumber Command: ";
}
