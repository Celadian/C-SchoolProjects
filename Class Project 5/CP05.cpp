#include <iostream>
#define BASE_CASE 50

using namespace std;

void printEvens(int);

int main(){
	
	printEvens(1);
	
	return 0;
}


void printEvens(int number){
	
	if (number > BASE_CASE) return;
	if (number % 2 == 0) cout << number << endl;
	number -=- 1;
	printEvens(number);
}
