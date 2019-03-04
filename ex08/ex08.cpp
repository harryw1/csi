#include <iostream>
#include <cmath>
using namespace std;

int main() {

	/*double value;
	double circle;
	const double PI = 3.14159;
	double triangle, square, pentagon, hexagon;



	//asks the using for a value
	cout << "Please enter a dimension: ";
	cin >> value;

	//calculates the various areas
	circle = PI * value * value;

	cout << "Area of circle: " << circle << endl; 

	triangle = sqrt(3) / 4 * pow(value, 2);

	cout << "Area of tringle: " << triangle << endl;

	square = value * value;

	cout << "Area of a square: " << square << endl;

	pentagon = (1 / 4.0)*(sqrt(5*(5 + 2 * sqrt(5))))*pow(value, 2);

	cout << "Area of pentagon: " << pentagon << endl;

	hexagon = 3 * sqrt(3) / 2 * pow(value, 2);

	cout << "Area of hexagon: " << hexagon << endl;*/

	//amount of money in a savings account after one year
	double a;
	double p;
	double r;
	int t;


	//asks for a principle
	cout << "Please enter a principle: $";
	cin >> p;
	//asks for a rate
	cout << "Please enter a yearly interest rate: %";
	cin >> r;
	//asks for a length of time
	cout << "Please enter a number of times interest compounds per year: ";
	cin >> t;

	r /= 100.0;

	//calculates the total amount
	a = p * pow(1 + r / t , t);
	

	cout << "End of year amount: $" << a << endl;


}