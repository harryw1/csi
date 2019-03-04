#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	//creates an array with size 15
	int a[15];
	//placeholder input so we can check fora sentinel
	int input;
	//count keeps track of where we are in the array
	int count = 0;

	//do while that checks for the sentinel
	do {
		cout << "Enter a number: ";
		//reads in the input
		cin >> input;
		//checks to see if input is equal to the sentinel
		if (input != -1) {
			//if not, then we add the value to the array in place (count) and then increment count
			a[count++] = input;
		}
	} while (input != -1 && count < SIZE);
	//search function for the array and prints out how many times that number appears in the array
	do {
		cout << "Enter a number to search for: ";
		cin >> input;
		if (input != -1) {
			bool numFound = 0;
			for (int i = 0; i < count; i++) {
				if (a[i] == input) {
					numFound++;
				}
			}
			if (numFound > 0) {
				cout << "Yes the value exists " << numFound << " times." << endl;
			}
			else {
				cout << "No, the value does not exist." << endl;
			}
		}
	} while (input != -1);
	
	
	//prints out all the values in the array
	//for (int i = 0; i < count; i++) {
		//cout << "Element " << i << ": " << a[i] << endl;
	//}
}