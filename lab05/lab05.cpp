#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//initializes the variables
	double weight;
	double distance;
	double finalPrice;
	double s, m, l, xl;
	
	//tells the user what the prices are and what is going to be calculated
	cout << "SHIPPING COST CALCULATOR" << endl;
	cout << "------------------------" << endl;
	cout << "The shipping costs per 500 miles are as follows:" << endl;
	cout << "<2kg: $1.10" << endl << "2kg to 6kg: $2.20" << endl << "6kg to 10kg: $3.70" << endl << "10kg to 20 kg: 4.80" << endl;
	cout << "------------------------" << endl;

	//asks the user for their input
	cout << "Please enter the weight of your package in kg: ";
	cin >> weight;
	cout << "Please enter the distance of your shipment in miles: ";
	cin >> distance;

	//creates the temporary cost per 500 miles for each package size
	s = 1.10 * (distance/500.0);
	m = 2.20 * (distance/500.0);
	l = 3.70 * (distance/500.0);
	xl = 4.80 * (distance/500.0);

	//reads back the user input
	cout << "You entered: " << weight << "kg" << endl;

	cout << setprecision(2) << fixed;
	//calculates and prints the final price
	if (weight <= 2) {
		finalPrice = s;
		cout << "Your price is: " << "$" << finalPrice << endl;
	}
	else if (weight > 2 && weight <= 6) {
		finalPrice = m;
		cout << "Your price is: " << "$" << finalPrice << endl;
	}
	else if (weight > 6 && weight <= 10) {
		finalPrice = l;
		cout << "Your price is: " << "$" << finalPrice << endl;
	}
	else if (weight > 10 && weight <= 20) {
		finalPrice = xl;
		cout << "Your price is: " << "$" << finalPrice << endl;
	}
	else {
		cout << "You did not enter a valid weight." << endl;
	}
}