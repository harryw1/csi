#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//power fucntion, can be called with many different parameters (inetegers, expressions, variables, even other functions)
	//              base exponent    
	/*double value = pow(3, 3);
	cout << value;*/

	//time it takes for an object to fall
	const double RATE_OF_ACC = 9.8;
	double height;
	double time;

	cout << "Please enter a height to fall from in meters: ";
	cin >> height;
	
	//calculates the time
	time = sqrt((2 * height) / RATE_OF_ACC);

	//prints
	cout << "The time it took for the object to fall was: " << time << "." << endl;


}