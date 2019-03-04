#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(string a);
int countConsonant(string a);
int countWords(string a);

int main() {

	string userEnteredString;

	cout << "String Reader" << endl;
	cout << "This program will read your string and tell you " << endl;
	cout << "how many vowels, consonants, and words appear in your string. " << endl;
	cout << "-------------" << endl;
	cout << "Please enter a string: ";
	getline(cin, userEnteredString);

	int numVowels = countVowels(userEnteredString);
	cout << "The number of vowels in your string is: " << numVowels << "." << endl;

	int numConsonant = countConsonant(userEnteredString);
	cout << "The number of consonants in your string is: " << numConsonant << "." << endl;

	int numWords = countWords(userEnteredString);
	cout << "The number of words in your string is: " << numWords << "." << endl;

}

int countVowels(string a)
{
	//checks to see if the current index holds is a letter and if it matches any of the vowels listed
	int numVowelFound = 0;
	for (int i = 0; i < a.length(); i++) {
		if (isalpha(a.at(i)) && a.at(i) == 'a' || a.at(i) == 'e' || a.at(i) == 'i' || a.at(i) == 'o' || a.at(i) == 'u') {
			numVowelFound++;
		}
	}
	return numVowelFound;
}

int countConsonant(string a)
{
	//checks to see if the current index is a letter and not any of the listed vowels
	int numConsonantFound = 0;
	for (int i = 0; i < a.length(); i++) {
		if (isalpha(a.at(i)) && a.at(i) != 'a' && a.at(i) != 'e' && a.at(i) != 'i' && a.at(i) != 'o' && a.at(i) != 'u') {
			numConsonantFound++;
		}
	}
	return numConsonantFound;
}

int countWords(string a)
{
	//if the first position is not a space, we count it as a word
	//otherwise, check to see if the previous postion is a space and that the current position is not a space
	int wordCount = 0;
	for (int i = 0; i < a.length(); i++) {
		if (!isspace(a.at(i)) && i == 0) {
			wordCount++;
		}
		else if ((isspace(a.at(i - 1))) && (!isspace(a.at(i)))) {
			wordCount++;
		}
	}
	return wordCount;
}
