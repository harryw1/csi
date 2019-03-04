#include <iostream>
#include <cmath>
using namespace std;

double estimateEx(double x, int num_terms);
double computeTerm(double x, int i);
double factorial(int i);

int main() {

	double x;
	int n;
	
	cout << "Enter an x value: ";
	cin >> x;
	cout << "Enter N (number of terms): ";
	cin >> n;

	double ex = estimateEx(x, n);
	cout << "Estimate: " << ex << endl;
	
}


double estimateEx(double x, int num_terms) {
	double value = 0;
	for (int i = 0; i <= num_terms; i++) {

		double term = computeTerm(x, i);
		value += term;
		cout << "Terms for: " << i << " => " << term << endl;


	}

	return value;


}

double computeTerm(double x, int i) {
	
	double num = pow(x, i);
	double denom = factorial(i);

	return num / denom;

}

double factorial(int n) {

	double value = 1;
	for (int i = 2; i <= n; i++) {

		value *= i;

	}
	return value;
}