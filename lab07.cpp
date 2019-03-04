#include <iostream>
using namespace std;

int main() {

	int n;

	do {
		cout << "Enter a number of rows between 2 and 10: ";
		cin >> n;
	} while (n < 2 || n > 10);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}