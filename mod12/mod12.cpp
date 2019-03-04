#include <iostream>
#include <ctime>
using namespace std;

int main() {

	int x, y;
	srand(time(0));
	
	x = rand() % 10 +1;
	y = rand() % 10+ 1;
	
	cout << x << endl;
	cout << y << endl;
	cout << rand()% 10 +1 << endl;



}