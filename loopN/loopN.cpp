#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double x, y, z;
	x = 2;
	y = 2;
	z = 4;
	cout << setprecision(2) << fixed;
	if (x == y && y == z) {
		cout << "All three numbers are equal" << endl;
	}
	else if (x >= y && y >= z) {
		cout << "Descending Order" << endl;
	}
	else if (x <= y && y <= z) {
		cout << "Ascending Order" << endl;
	}
	else {
		cout << "These numbers are not ordered!" << endl;
	}

}