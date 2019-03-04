#include <iostream>
using namespace std;

int main() {
	
	// initializes user input and placeholders for the largest and smallest numbers
	// initializes char for user input to continue
	int number0;
	int numberLarge;
	int numberSmall;
	char cont;
	//starts the program
	do {
		//tells the user what the program will do and how to exit
		cout << "NUMBER READER" << endl;
		cout << "-------------" << endl;
		cout << "To exit this program, enter -1." << endl;
		cout << "-------------" << endl;
		//first loop that asks for user input
		do {
			cout << "Please enter a number between 0 and 9999 (inclusively): ";
			cin >> number0;
		} while (number0 < 0 || number0 > 9999);
		//sets the largest and smallest numbers equal to the first input
		numberLarge = number0;
		numberSmall = number0;
		//reads the user input for subsequent numbers
		do {
			cout << "Please enter a number between 0 and 9999 (inclusively): ";
			cin >> number0;
			//checks that the user is entering a valid number and checks it against the current largest and smallest numbers
			if (number0 >= numberLarge && number0 <= 9999) {
				numberLarge = number0;
			}
			else if (number0 <= numberSmall && number0 >= 0) {
				numberSmall = number0;
			}
			else if (number0 > numberSmall && number0 < numberLarge) {
				
			}
			else if (number0 != -1){
				cout << "Please enter a valid number (0-9999)." << endl;
			}
		} while (number0 >= 0 || number0 <= 9999 && number0 != -1);
		//prints the largest and smallest numbers entered after dropping out of the do while
		cout << "The largest number you entered was: " << numberLarge << "." << endl;
		cout << "The smallest number you entered was: " << numberSmall << "." << endl;
		//asks the user if they want to continue to enter new numbers
		cout << "Do you want to continue? (Y/N): ";
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');
	cout << "Goodbye." << endl;
}