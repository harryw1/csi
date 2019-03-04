#include <iostream>
#include <cctype>
using namespace std;

char getUnitInput();
double getTempFromUser();
double toF(double c);
double toC(double f);
void displayTemps(double c, double f);

int main() {
	
	char cOrF;
	double input;
	double c, f;

	cOrF = getUnitInput();
	input = getTempFromUser();
	if(cOrF == 'C') {
		c = input;
		f = toF(c);
	}
	else {
		f = input;
		c = toC(f);
	}
	displayTemps(c, f);
}


char getUnitInput() {
	char input;
	do {
		cout << "Please enter (c) for celcius and (f) for fahrenheit: ";
		cin >> input;
		input = toupper(input);
	} while (input != 'C' && input != 'F');
	return toupper(input);

}

double getTempFromUser() {
	double input;
	cout << "Please enter a temperature: ";
	cin >> input;
	return input;

}
double toF(double c) {

	return c * (9.0 / 5) + 32;

}
double toC(double f) {

	return 5.0 / 9* (f - 32);

}
void displayTemps(double c, double f) {

	cout << "Celcius: " << c << endl;
	cout << "Fahrenheit: " << f << endl;

}
