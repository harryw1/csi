#include <iostream>
#include <cmath>
using namespace std;

int quad(double a, double b, double c, double &r1, double &r2);
double underRoot(double a, double b, double c);
double rootCalc1(double a, double b, double c);
double rootCalc2(double a, double b, double c);


int main() {
	
	double a, b, c, x, y;
	int quadResult;
	cout << "ROOT CALCULATOR" << endl;
	cout << "---------------" << endl;

	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
	cout << "Please enter c: ";
	cin >> c;

	quadResult = quad(a, b, c, x, y);

	if (quadResult == 0) {
		cout << "There are no roots." << endl;
	}
	else if (quadResult == 1) {
		cout << "There is one root: " << x << "." << endl;
	}
	else if (quadResult == 2) {
		cout << "There are two roots: " << x << ", " << y << "." << endl;
	}


}


int quad(double a, double b, double c, double &r1, double &r2) {
	
	double underRootAnswer = underRoot(a, b, c);


	if (underRootAnswer < 0) {
		//cout << "NO ROOTS" << endl;
		return 0;
	}
	else if (underRootAnswer >= 0) {
		//cout << "ROOTS EXIST" << endl;
		if (rootCalc1(a, b, c) == rootCalc2(a, b, c)) {
			//cout << "ONE ROOT" << endl;
			r1 = rootCalc1(a, b, c);
			r2 = rootCalc2(a, b, c);
			return 1;
		}
		else if (rootCalc1(a, b, c) != rootCalc2(a, b, c)) {
			//cout << "TWO ROOTS" << endl;
			r1 = rootCalc1(a, b, c);
			r2 = rootCalc2(a, b, c);
			return 2;
		}
	}
	
	
}

double underRoot(double a, double b, double c) {
	
	double value1;
	double sqrtValue;
	value1 = (pow(b, 2) - (4 * a * c));
	if (value1 < 0) {
		return -1;
	}
	else if (value1 >= 0) {
		sqrtValue = sqrt(value1);
		return sqrtValue;
	}
}

double rootCalc1(double a, double b, double c) {

	double value;
	value = (-b + underRoot(a, b, c)) / (2 * a);
	return value;

}

double rootCalc2(double a, double b, double c) {

	double value;
	value = (-b - underRoot(a, b, c)) / (2 * a);
	return value;

}

