#include <iostream>
#include "Date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int newMonth,newDay,newYear;
	Date date(2,12,20);
	date.displayDate();
	std::cout << "\nNew Month: ";
	std::cin >> newMonth;
	std::cout << "\nNew Day: ";
	std::cin >> newDay;
	std::cout << "\nNew Year:";
	std::cin >> newYear;
	date.setMonth(newMonth);
	date.setDay(newDay);
	date.setYear(newYear);
	
	date.displayDate();
	
	return 0;
}
