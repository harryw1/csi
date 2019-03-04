#include <iostream>
using namespace std;

void addUnique(int a[], int u[], int count, int &uCount);
void printInitial(int a[], int count);
void printUnique(int u[], int uCount);

int main() {
	//initial input
	int a[25];
	//unique input
	int u[25];
	//initial count
	int count = 0;
	//unique count
	int uCount = 0;
	//user input
	int input;

	cout << "Number Reader" << endl;
	cout << "Reads back the numbers you enter and tells you the unique entries" << endl;
	cout << "Enter 25 positive numbers. Enter '-1' to stop." << endl;
	cout << "-------------" << endl;
	do {
		cout << "Please enter a positive number: ";
		cin >> input;
		if (input != -1) {
			a[count++] = input;
			addUnique(a, u, count, uCount);
		}
	} while (input != -1 && count < 25);

	printInitial(a, count);
	printUnique(u, uCount);

	cout << "You entered " << count << " numbers, " << uCount << " unique." << endl;
	cout << "Have a nice day!" << endl;

}

void addUnique(int a[], int u[], int count, int &uCount) {
	for (int i = 0; i < count; i++) {
		if (u[i] != a[i]) {
			u[i] = a[i];
			uCount++;
		}
	}
}

void printInitial(int a[], int count) {
	int lastNumber = count - 1;
	cout << "The numbers you entered are: ";
	for (int i = 0; i < count - 1; i++) {
		cout << a[i] << ", ";
	}
	cout << lastNumber << "." << endl;
}

void printUnique(int u[], int uCount) {
	int lastNumber = uCount - 1;
	cout << "The unique numbers are: ";
	for (int i = 0; i < uCount - 1; i++) {
		cout << u[i] << ", ";
	}
	cout << lastNumber << "." << endl;
}