#include <iostream>
using namespace std;

int main() {

	//initializes the variables needed (user input, the three digits, and the final sum)
	int input, x, y, z, sum;
	
	
	//prompts the user for an input
	cout << "Please enter an integer between 0 and 999 (inclusively): ";
	cin >> input;

	//reads back this input
	cout << "You entered: " << input << "." << endl;

	//performs the breakdown of the input
	x = input / 100;
	//cout << x << endl;
	input -= x * 100;
	//cout << input << endl;
	y = input / 10;
	//cout << y << endl;
	input -= y * 10;
	//cout << input << endl;
	z = input;
	//cout << z << endl;

	//prints the three digits: x,y,z
	cout << "The digits are: " << x << ", " << y << ", and, " << z << "." << endl;

	//adds the digits
	sum = x + y + z;

	//prints the sum
	cout << "The sum of the digits is: " << sum << "." << endl;
	
}