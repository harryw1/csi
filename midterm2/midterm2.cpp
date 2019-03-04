#include <iostream>	
using namespace std;

void summationOf(int n);

int main() {

	int userInput;

	do {
		cout << "Calculates the sum of the first N numbers that are divisble by 13 or 5." << endl;
		cout << "Please enter a number greater than 0: ";
		cin >> userInput;
	} while (userInput < 0);

	
	summationOf(userInput);
	

}

void summationOf(int n) {
	//three integers integer is the counter for the user input, will run n number of times
	//value is the total of the addition of each number that is actually divisble by 13 or 5
	//number will count up every loop until it reaches a a number that itself mod 13 or 5 equals 0
	int integer = 0;
	int value = 0;
	int number = 1;
	do {
		if (number % 13 == 0) {
			cout << number << endl;
			value += number;
			integer++;
		}
		else if (number % 5 == 0) {
			cout << number << endl;
			value += number;
			integer++;
		}
		number++;
	} while (integer < n);
	
	cout << "-----------" << endl;

	cout << value << endl;

}

