#include <iostream>
#include <iomanip>
using namespace std;

//prototype for calculation function
void finalPrice(char userInput, double salesTax);

int main() {
	//initializes the user input and sales tax to be read in later
	char userInput;
	double salesTax;
	//tells the user what the program will do and asks for an input
	cout << left;
	cout << "CAR COST CALCULATOR" << endl;
	cout << "-------------------" << endl;
	cout << "Base cost of car: $30,000" << endl;
	cout << "Available Trims:" << endl;
	cout << "A: Basic Model (+$0.00)" << endl;
	cout << "B: All-Wheel Drive Package (+$2,500)" << endl;
	cout << "C: Sport Package (+$3,500)" << endl;
	cout << "D: Luxury Interior (+5,000)" << endl;
	cout << "E: Self Driving / Self Aware (+$12,000)" << endl;
	cout << "--------------------" << endl;
	//input validation
	do {
		cout << "Select an option from above: ";
		cin >> userInput;
	} while (userInput != 'A' && userInput != 'a' && userInput != 'B' && userInput != 'b' && userInput != 'C' && userInput != 'c' && userInput != 'D' && userInput != 'd' && userInput != 'E' && userInput != 'e');
	//prevents the user from entering a negative sales tax
	do {
		cout << "Enter your area's sales tax (E.G.: Enter '7' for 7% sales tax): ";
		cin >> salesTax;
	} while (salesTax < 0);
	//calls the final price function with parameter userInput
	finalPrice(userInput, salesTax);

}

void finalPrice(char userInput, double salesTax) {
	//value for base car price
	double base = 30000;
	//values for each of the packages prices
	double a = 0.00;
	double b = 2500;
	double c = 3500;
	double d = 5000;
	double e = 12000;
	//value for sales tax
	double taxRate = (salesTax / 100) + 1;
	//final price holder
	double afterTax;
	//series of if else statements that perform the proper calculations for each package based on user input
	if (userInput == 'A' || userInput == 'a') {
		afterTax = (base + a) * taxRate;
	}
	else if (userInput == 'B' || userInput == 'b') {
		afterTax = (base + b) * taxRate;
	}
	else if(userInput == 'C' || userInput == 'c') {
		afterTax = (base + c) * taxRate;
	}
	else if (userInput == 'D' || userInput == 'd') {
		afterTax = (base + d) * taxRate;
	}
	else if (userInput == 'E' || userInput == 'e') {
		afterTax = (base + e) * taxRate;
	}
	cout << setprecision(2) << fixed;
	cout << "The final price of your new car is: $" << afterTax << "." << endl;
}