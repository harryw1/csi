#include <iostream>
#include <cmath>
using namespace std;

int computeCoin(int&amount, int denomination);


int main() {

	double input;
	int amount;
	int q, d, n;

	cout << "Enter an amount: $";
	cin >> input;

	amount = static_cast<int>(input * 100 + 0.05);

	q = computeCoin(amount, 25);
	d = computeCoin(amount, 10);
	n = computeCoin(amount, 5);

	cout << "Quarters:	" << q << endl;
	cout << "Dimes:		" << d << endl;
	cout << "Nickels:	" << n << endl;
	cout << "Pennies:	" << amount << endl;

	
}

//the ampersand makes it so that every time we call this function, we are updating the new vallue of amount... 
//if we dont, the function will run on the orginal value of amount each time, rather than calculating each new value
int computeCoin(int&amount, int denomination) { 
	int value = amount / denomination;
	amount %= denomination;
	return value;
}