#include <iostream>
using namespace std;

int main() {

	double grade;

	cout << "Please enter your numeric grade: ";
	cin >> grade;

	if (grade >= 90) {
		cout << "Your grade is an A." << endl;
	}
	else if (grade >= 80) {
		cout << "Your grade is a B." << endl;
	}
	else if (grade >= 70) {
		cout << "Your grade is a C." << endl;
	}
	else if (grade >= 60) {
		cout << "Your grade is a D." << endl;
	}
	else if (grade <= 59) {
		cout << "Your grade is an F." << endl;
	}
}