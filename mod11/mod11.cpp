#include <iostream>
using namespace std;

int main() {


	int x;
	int y;
	
	cout << "Please enter two integers: ";
	cin >> x >> y;

	if (x == y) {
		cout << "The values are equal." << endl;

	}
	if (x > y) {
		cout << "The first integer was larger" << endl;
	}
	if (x < y) {
		cout << "The second number was larger" << endl;
	}

	cout << "All done." << endl;

}