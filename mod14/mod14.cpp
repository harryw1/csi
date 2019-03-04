#include <iostream>
using namespace std;

int main() {
	double yearsWorked;
	double salary;

	cout << "Please enter your yearly salary: ";
	cin >> salary;

	cout << "Please enter number of years worked at current job: ";
	cin >> yearsWorked;

	if (salary > 60000 || salary >= 35000 && yearsWorked >= 5) {
		cout << "Approrved!" << endl;
	}
	else{
			cout << "You are not approved." << endl;
	}
}