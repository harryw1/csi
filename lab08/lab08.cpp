#include <iostream>
using namespace std;

//a void function because we aren not returning anything, were just printing

void printChars(int row, char character) {

	//prints the proper number of spaces on the left for the first half of the diamond
	for (int i = 0; i < row; i++) {
		for (int j = row - 1; j > i; j--) {
			cout << " ";
		}
		//prints the character that the user input
		for (int k = 0; k <= (2*row) - i; k++) {
			cout << character;
		}
		cout << endl;
	}
	//spaces for second half of diamond
	for (int i = 0; i < row - 1; i++) {
		for (int j = 1; j <= i + 1; j++) {
			cout << " ";
		}
		//prints the character the user input
		for (int k = i + 1; k <= row - 1; k++) {
			cout << character;
		}
		cout << endl;
	}
}



int main() {

	//initializes the number of rows and the character the user wants
	int n;
	char output;
	//input validation for number of rows
	do {
		cout << "Enter a number of rows between 2 and 10: ";
		cin >> n;
	} while (n < 2 || n > 10);

	//input validation here?
	//asks the user for a character
	cout << "Enter a character to print: ";
	cin >> output;
	
	//calls the function from above
	printChars(n, output);


}