#include <iostream>
using namespace std;

int main() {

	/*float weight;
	float distance;
	float finalCost;
	const double COST_PER_POUND = 2.50;

	//tells the user the cost of shipping and asks for a weight
	cout << "The shipping cost is $2.50 per pound per 200 miles." << endl;
	cout << "Please enter a weight in pounds: ";
	cin >> weight;
	
	//asks the user for a distance
	cout << "Please enter a distance in miles: ";
	cin >> distance;

	//prints the users inputs
	cout << "Shipping distance: " << distance << " miles." << " Shipping weight: " << weight << " pounds." << endl;

	//calculates the final cost
	finalCost = (COST_PER_POUND * weight) * (distance / 200.0);

	//prints the final cost
	cout << "The final cost of the freight is: $" << finalCost << "." << endl;*/

	/*double cost;
	double tax;
	double afterTax;

	cout << "PLease enter the pre-tax cost of your item: ";
	cin >> cost;

	cout << "Please enter a sales tax rate (ex: 0.07): ";
	cin >> tax;

	afterTax = cost + (cost * tax);

	cout << "Before tax: $" << cost << "." << endl;
	cout << "Sales tax rate: %" << tax * 100 << "." << endl;
	cout << "Final price: $" << afterTax << "." << endl;*/

	double input;
	int amount;
	int q, d, n;

	cout << "Please enter a dollar amount: $";
	cin >> input;

	amount = static_cast<int>(input * 100+0.5);

	q =  amount / 25;
	amount = amount % 25;
	d = amount / 10;
	amount = amount % 10;
	n = amount / 5;
	amount = amount % 5;
		
	cout << "Quarters: " << q << endl;
	cout << "Dimes: " << d << endl;
	cout << "Nickels: " << n << endl;
	cout << "Pennies: " << amount << endl;

}