#include <iostream>
using namespace std;

int main() {

	

	int x[100];

	for (int i = 0; i < 100; i++) {
		cout << "Enter a value: ";
		cin >> x[i];
	}
	for (int i = 99; i >= 0; i--) {
		cout << x[i];
	}

}