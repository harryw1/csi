#include <iostream>
using namespace std;

int main() {
	//initializes the users input
	int n;
	//reads in the user input and validates it
	do {
		cout << "Enter a number of rows between 2 and 10: ";
		cin >> n;
	} while (n < 2 || n > 10);
	//the first half of the half diamond (asking j < or = to i instead of just < makes it so the first line isnt blank)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	//second half of the half diamond
	//n-1 because we've already printed the 5 star line so we dont need to do that again and it also removes an extra blank space at the end (i think)
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n-1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}