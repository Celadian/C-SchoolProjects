#include <iostream>
#include "Average.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Average average;
	cout << "Find the average of any 2 or 3 numbers!" << endl;
	{
		int num1, num2, num3;
		cout << "Please type two integers separated by a space" << endl;
		cin >> num1 >> num2;
		cout << "The average of " << num1 << " and " << num2 << " is " << average.getAverage(num1,num2) << endl;
	
	
		cout << "Please type three integers separated by a space" << endl;
		cin >> num1 >> num2 >> num3;
		cout << "The average of " << num1 << " and " << num2 << " and " << num3 << " is " << average.getAverage(num1,num2,num3) << endl;
	}
	{
		double num1, num2, num3;
		cout << "Please type two float values separated by a space" << endl;
		cin >> num1 >> num2;
		cout << "The average of " << num1 << " and " << num2 << " is " << average.getAverage(num1,num2) << endl;
	
	
		cout << "Please type three floats separated by a space" << endl;
		cin >> num1 >> num2 >> num3;
		cout << "The average of " << num1 << " and " << num2 << " and " << num3 << " is " << average.getAverage(num1,num2,num3) << endl;
	}
	return 0;
}
