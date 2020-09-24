#include <iostream>


using namespace std;

int main()
{ 
	int month, day, year;
	
	cout << "What is the day? ";
	cin >> day;
	
	cout << "\nWhat is the month? ";
	cin >> month;
	
	cout << "\nWhat is the year? ";
	cin >> year;
	
	cout << "\nThe date is: " << month << "/" << day << "/" << year << endl; //does not print out "0" before integer i.e "01" becomes "1"
	
	
	return 0;
}






