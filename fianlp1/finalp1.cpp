#include <iostream>
#include <iomanip>
using namespace std;

void convertToF(double a[], int &count);
void convertToK(double a[], int &count);

int main() {

	double userEnteredTemps[50];
	double inputTemp;
	int arrayCount = 0;
	int kCount = 0;
	int fCount = 0;
	cout << setprecision(2) << fixed << right;
	do {
		cout << "Temperature Calculator" << endl;
		cout << "----------------------" << endl;
		cout << "Enter '-1' to stop." << endl;
		cout << "Please enter up to 50 different temperatures between 273.15 and 1000 (Celcius): " << endl;
		cin >> inputTemp;
		if (inputTemp != -1) {
			userEnteredTemps[arrayCount++] = inputTemp;
		}
	} while ((inputTemp < 273.15 || inputTemp > 1000.00) && (arrayCount < 50) && (inputTemp != -1));
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "C" << setw(17) << "F" << setw(17) << "K" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < arrayCount; i++) {
		cout << userEnteredTemps[i];
		convertToF(userEnteredTemps, fCount);
		convertToK(userEnteredTemps, kCount);
		cout << endl;
		fCount++;
		kCount++;
	}



}

void convertToF(double a[], int &count)
{
	double fArray[50];
	fArray[count] = (a[count]) * (9.0/5) + 32;
	if (a[count] == 0) {
		cout << setw(18) << fArray[count];
	}
	else {
		cout << setw(17) << fArray[count];
	}
}

void convertToK(double a[], int &count){
	double kArray[50];
	kArray[count] = (a[count]) + 273.15;
	if (a[count] == 0) {
		cout << setw(17) << kArray[count];
	}
	else {
		cout << setw(17) << kArray[count];
	}
}
