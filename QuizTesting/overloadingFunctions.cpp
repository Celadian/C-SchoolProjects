#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int updateCount(int y){
	return ++y;
}

//void updateCount(int& y){
//	++y;
//}


int main(void){
	
	int x = 1; 
	cout << updateCount((int)x) << ":new x" << endl;
	cout << x << ":original x" << endl;

	cout << x << ":original x" << endl;
	ostringstream Course{};
	Course << "testing 1,2,3";
	cout << Course.str() << endl;

}


