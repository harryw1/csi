#include <iostream>
using namespace std;


void addInOrder(int a[], int &count, int value);
int findIndex(const int a[], int count, int value);
void addHere(int a[], int &count, int value, int index);
void printArray(int a[], int count);
void remove(int a[], int &count, int index);

int main() {

	int a[10];
	int count = 0;
	int input;

	do {
		cout << "Enter a value (-1 to stop): ";
		cin >> input;
		if (input != -1) {
			//add in order
			addInOrder(a, count, input);
		}
	
	} while (input != -1 && count < 10);

	cout << "In order... " << endl;
	printArray(a, count);
	do {
		cout << "Enter an index to remove: ";
		cin >> input;
			if (input != -1) {
				remove(a, count, input);
				printArray(a, count);
			}
	} while (input != -1);

}

void addInOrder(int a[], int &count, int value) {
	int index = findIndex(a, count, value);
	cout << "adding " << value << " at index " << index << endl;
	addHere(a, count, value, index);
}

int findIndex(const int a[], int count, int value)
{
	for (int i = 0; i < count; i++) {
		if (a[i] > value) {
			return i;
		}
	}
	return count;
}

void addHere(int a[], int & count, int value, int index)
{
	for (int i = count; i > index; i--) {
		a[i] = a[i - 1];
	}
	a[index] = value;
	count++;
}

void printArray(int a[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << i << ": " << a[i] << endl;
	}
}

void remove(int a[], int & count, int index)
{
	for (int i = index + 1; i < count; i++) {
		a[i - 1] = a[i];
	}
	count--;
}
