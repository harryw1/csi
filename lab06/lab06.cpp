#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
	//tells the user what the game is and how to play
	cout << "GUESSING GAME" << endl;
	cout << "-------------" << endl;
	cout << "HOW TO PLAY:" << endl;
	cout << "The computer is thinking of a number between 0 and 10 (inclusively). Enter a number to make a guess." << endl;
	cout << "(Entering -1 will quit the game)" << endl;
	cout << "-------------" << endl;


	//seeds rand and gives the computer a random number between 0 and 10
	int compNumber;
	srand(time(0));
	compNumber = rand() % 11;
	//initializes input, guess number, and user choice (controls replay after winning)
	int input;
	int guesses = 0;
	char userChoice;
	//dowhile loop that runs the game and checks the users inputs
	do {
		cout << "Guess a number between 0 and 10: ";
		cin >> input;
		guesses++;
		if (input != -1 && input >= 0 && input <= 10) {
			if (input < compNumber) {
				cout << "Too low! Try again." << endl;
			}
			else if (input > compNumber) {
				cout << "Too high! Try again." << endl;
			}
			else if (input == compNumber) {
				cout << "You're right! Congratulations!" << endl;
				cout << "It took you " << guesses << " guesses." << endl;
			}
		}
	} while (input != compNumber && input != -1);
}
