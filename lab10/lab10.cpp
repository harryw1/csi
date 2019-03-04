#include <iostream>
using namespace std;

void addValue(int a[], int &count, int value);
void printArray(int a[], int count);

int main() {

	int a[10];
	int input;
	int count = 0;
	//input validation
	do {
		cout << "Enter a value (-1 to stop): ";
		cin >> input;
		if (input != -1) {
			addValue(a, count, input);
		}
	} while (input != -1 && count < 10);
	printArray(a, count);
}

void addValue(int a[], int &count, int value)
{
	//adds the values the user enters to the array
	a[count++] = value;
}

void printArray(int a[], int count)
{
	//index starts at the 0 place in the array
	int index = 0;
	//for outer for loop starts at the 0 place
	for (int i = 0; i < count; i++) {
		//prints the place number of the array
		cout << i << ":";
		//at place index, whateever the value is, print stars until j is less than that number
		for (int j = 0; j < a[index]; j++) {
			cout << "*";
		}
		//new line and increment the index to move to the next place
		cout << endl;
		index++;
	}
}


