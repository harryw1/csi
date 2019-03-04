#include <iostream>
using namespace std;

int main() {

	//initializes celcius and farenheit
	float cel;
	float far;

	//prompts the user to enter a temperature in celcius
	cout << "Please enter a temperature in celcius: ";
	cin >> cel;

	//tells the user what they've entered
	cout << "You entered: " << cel << endl;

	//calculates the temperature in farenheit
	//adding the decimal point makes it so 9/5 doesn't come out to 1 instead of 1.8
	far = (9.0 / 5) * cel + 32;

	//Prints the temperatures in celcius and farenheit
	cout << "The temperature is: " << cel << " degrees Celcius and " << far << " degrees Farenheit." << endl;
}