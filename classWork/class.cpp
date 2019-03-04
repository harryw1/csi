#include <iostream>
using namespace std;

int main() {
	/*
	//intializes the variables
	int x;
	int y;
	//prompts the user for two integers, assigns them, then prints those inetgers
	cout << "Please enter an integer: " ;
	cin >> x;
	cout << "Please enter another integer: ";
	cin >> y;
	cout << "You typed: " << x << " and " << y << endl;
	*/

	double radius;
	double area;
	const double pi = 3.14159;

	cout << "To calculate the area, please enter a radius: ";
	cin >> radius;
	cout << "The radius you entered: " << radius << endl;

	area = pi * radius * radius;

	cout << "The area of the circle is: " << area << endl;

}