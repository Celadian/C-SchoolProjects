#include <iostream>

using namespace std;

class Payroll{
	private:
		int total = 10;
		
	public:
		Payroll(){
			cout << "payroll object created" << endl;
		}
		void printTotal(){
			cout << total << endl;
		}
};

int main(){
	Payroll payroll;
	Payroll& payrollRef = payroll;
	Payroll* payrollPtr = 
	payroll.printTotal();
	payrollRef.printTotal();
 	payrollPtr
}
