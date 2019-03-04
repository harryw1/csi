#include <iostream>
using namespace std;

void printAll(int a[], int count);
int findUnique(int a[], int unique[], int count);
void printUnique(int a[], int unique[], int count);

int main() {

	int a[25];
	int unique[25];
	int count = 0;
	int userIn;

	cout << "Number Reader" << endl;
	cout << "-------------" << endl;
	cout << "Enter up to 25 positive numbers. Enter '-1' to stop." << endl;
	do {
		cout << "Please enter a positive number: ";
		cin >> userIn;
		if (userIn != -1) {
			a[count++] = userIn;
		}
	} while ((userIn > 0) && (userIn != -1) && (count < 25));

	
	printAll(a, count);
	cout << "You entered " << count << " numbers, " << findUnique(a, unique, count) << " unique." << endl;
	printUnique(a, unique, count);

}

void printAll(int a[], int count)
{
	cout << "The numbers you entered were: ";
	int j = count - 1;
	for (int i = 0; i < count - 1 ; i++) {
		cout << a[i] << ", ";
	}
	cout << a[j] << "." << endl;
}

int findUnique(int a[], int unique[], int count)
{
	int uniqueCount = 0;
	for (int i = 0; i < count; i++) {
		if (unique[uniqueCount] != a[i]) {
			unique[uniqueCount++] = a[i];
		}
	}
	return uniqueCount;
}

void printUnique(int a[], int unique[], int count)
{
	int uniqueCount = findUnique(a, unique, count);
	cout << "The unique numbers you entered were: ";
	int j = uniqueCount - 1;
	for (int i = 0; i < uniqueCount - 1; i++) {
		cout << unique[i] << ", ";
	}
	cout << unique[j] << "." << endl;
}
