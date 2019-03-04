#include <iostream>
using namespace std;

int readArray(int x[], int capacity);
bool equal( const int a1[], int count1, const int a2[],  int count2);
bool equivelant(const int a1[], int count1, const int a2[],  int count2);
void printArray(const int a[], int count);
int search(const int a[], int count, int key);

int main() {
	//size of arrays and counts
	const int SIZE = 10;
	int a1[SIZE];
	int a2[SIZE];
	int count1 = 0;
	int count2 = 0;

	//result: a1 has values from user and count 1 is the number of items enetred
	cout << "First List" << endl;
	count1 = readArray(a1, SIZE);
	cout << "Second List" << endl;
	count2 = readArray(a2, SIZE);

	//calls the function equal that wil return true for false
	if (equal(a1, count1, a2, count2)) {

		cout << "The arrays are equal." << endl;
		
	}
	//calls the equivelant function to check theuir values
	else if (equivelant(a1, count1, a2, count2)) {
		
		cout << "The arrays are equivelant." << endl;
		
	}
	else {
		cout << "The arrays are completely different." << endl;
	}

	printArray(a1, count1);
	cout << "-----------" << endl;
	printArray(a2, count2);
}

int readArray(int x[], int capacity) {
	int count = 0;
	int input;
	do {
		cout << "Please enter a number (-1 to stop): ";
		cin >> input;
		if (input != -1) {
			x[count++] = input;
		}
	} while (input != -1 && count < capacity);
	return count;
}

bool equal(const int a1[], int count1, const int a2[], int count2) {
	
	if (count1 != count2) {
		return false;
	}
	for (int i = 0; i < count1; i++) {
		if (a1[i] != a2[i]) {
			return false;
		}
	}
	return true;
}

bool equivelant(const int a1[], int count1, const int a2[], int count2) {
	if (count1 != count2) {
		return false;
	}
	for (int i = 0; i < count1; i++) {
		int times_a1 = search(a1, count1, a1[i]);
		int times_a2 = search(a2, count2, a2[i]);
		if (times_a1 != times_a2) {
			return false;
		}
	}
	return true;
}

void printArray(const int a[], int count) {
	for (int i = 0; i < count; i++) {
		cout << a[i] << endl;
	}
}

int search(const int a[], int count, int key) {

	int numFound = 0;
	for (int i = 0; i < count; i++) {
		if (a[i] == key) {
			numFound++;
		}
	}
	return numFound;

}