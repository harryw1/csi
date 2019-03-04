#include <iostream>
using namespace std;

void printChars(int rowNumber, char userInput) {
	//placeholder values that are used to calculate number of spaces and character necessary per line
	int spaces = rowNumber - 1;
	int characterNumber = 1;
	//top half of diamond
	for (int i = 0; i < rowNumber; i++) {
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		for (int k = 0; k < characterNumber; k++) {
			cout << userInput;
		}
		cout << endl;
		spaces--;
		characterNumber += 2;
	}
	int spacesBottom = 1;
	int charactersBottom = characterNumber - 2;
	for (int i = 0; i < rowNumber - 1; i++) {
		for (int j = 0; j < spacesBottom; j++) {
			cout << " ";
		}
		for (int k = 0; k < charactersBottom - 2; k++) {
			cout << userInput;
		}
		cout << endl;
		spacesBottom++;
		charactersBottom -= 2;
	}

}


int main() {

	//asks the user for a number of rows
	int rowNumber;
	//really this can accept any number, but it looks best when it actually fits in the command prompt so i limited it to an upper end of 100
	do {
		cout << "Please enter a number of rows between 1 and 100: ";
		cin >> rowNumber;
	} while (rowNumber < 1 || rowNumber > 100);

	//asks the user for a character to print
	//not sure how to input validate for a char
	char userInput;
	cout << "Please enter a character to print: ";
	cin >> userInput;

	printChars(rowNumber, userInput);

}