#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int input);
int reverse(int value);

int main() {

	int input;

	cout << "Emirp Calculator" << endl;
	cout << "----------------" << endl;
	cout << "This program will print out prime numbers, whose reversal is also a prime number." << endl;
	cout << "----------------" << endl;
	do {
		cout << "Please enter a positive number: ";
		cin >> input;
	} while (input < 1);

	//bool itWorks;
	isPrime(input);

	//cout << itWorks << endl;

}

bool isPrime(int input) {
	int value;
	if ((input == 1) || (input == 2)) {
		cout << input << endl;
		return true;
	}
	if ((input % 2) == 0) {
		cout << "Here 2" << endl;
		return false;
	}
	for (int i = 3; i <= input; i++) {
		if ((input % i) == 0) {
			cout << "here 4" << endl;
			return false;
		}
		if (isPrime(reverse(input))) {
			cout << input << endl;
			return true;		
		}
	}
}

int reverse(int value) {
	int n = value;
	int newNumber = 0;
	int mod;

	while (n != 0) {
		mod = n % 10;
		newNumber = (newNumber * 10) + mod;
		n /= 10;
	}
	return n;
}