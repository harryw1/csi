#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int value);
int reverse(int value);

int main() {
	
	//declares the user input
	int input;
	//tells the user what the program will do
	cout << "Emirp Calculator" << endl;
	cout << "----------------" << endl;
	cout << "This program will print out prime numbers, whose reversal is also a prime number." << endl;
	cout << "----------------" << endl;
	//asks the user for input and performs input validation on numbers less than 1
	do {
		cout << "Please enter a positive number: ";
		cin >> input;
	} while (input < 1);
	//test starts at 2 because we dont need to test numbers 1 and below
	int test = 2;
	//numberEmrips is count that will end this loop when we've printed the number
	//of emrips defined by the user
	int numberEmirps = 0;
	//while loop that controls the test
	//print count for decinding when to endl;
	int printCount = 0;
	while (numberEmirps < input) {
		//if statement that checks to see if both the test number and its reverse are prime
		if (isPrime(test) && isPrime(reverse(test))) {
			if ((printCount % 5) == 0 && printCount > 0) {
				cout << endl;
			}
			cout << left;
			cout << setw(10) << test;
			//increases the count of emrips we've printed
			numberEmirps++;
			printCount++;
		}
		//takes us to the next test number
		test++;
	}

}

bool isPrime(int value) {
	//starting at 2, checks whether or not the current value mod i is equal to 0
	if (value <= 2) {
		return true;
	}
	for (int i = 2; i <= (value -1); i++) {
		if ((value % i) == 0) {
			return false;
		}
	}
	return true;	
}

int reverse(int value) {
	//set n equal to the current value 
	int n = value;
	//place holder for the final output
	int reversedNumber = 0;
	//place holder for the result of each modular division
	int modResult;
	//runs until we've filled each digit place
	while (n != 0) {
		modResult = n % 10;
		reversedNumber = (reversedNumber * 10) + modResult;
		n /= 10;
	}

	return reversedNumber;

}