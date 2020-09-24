# include <iostream>

class Date{
	
	public:
		Date(int hardMonth, int hardDay, int hardYear){
			month = hardMonth;
			day = hardDay;
			year = hardYear;	
		}
		
		void const setMonth(int newMonth) {
			month = newMonth;
		}
		void const setDay(int newDay) {
			day = newDay;
		}
		void const setYear(int newYear) {
			year = newYear;
		}
		
		
		int getMonth(){ 
			return month;
		}
		int getDay(){
			return day;
		}
		int getYear(){
			return year;
		}
		
		void displayDate(){
			
			std::cout << "\nDate is " << month << "/" << day << "/" << year << std::endl;
		}
	private:
		int month;
		int day;
		int year;
	
};
