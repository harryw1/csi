#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countChars(char a[], char character);
bool isAnagram(char a[], char b[]);
void clean(char raw_input[], char cleaned[]);


int main() {

	char string1[50];
	char string2[50];

	cout << "Please enter a string: ";
	cin.getline(string1, 50);
	
	cout << "Please enter another string: ";
	cin.getline(string2, 50);

	char clean1[50];
	char clean2[50];

	clean(string1, clean1);
	clean(string2, clean2);

	if (isAnagram(clean1, clean2)) {
		cout << "These strings are anagrams!" << endl;
	}
	else {
		cout << "These strings are not anagrams!" << endl;
	}

	

}

int countChars(char x[], char character)
{
	int index = 0;
	int characterCount = 0;
	while (x[index] != NULL) {
		if (x[index] == character) {
			characterCount++;
		}
		index++;
	}
	return characterCount;
}

bool isAnagram(char a[], char b[])
{
	
	int aLetter;
	int bLetter;
	int index = 0;
	while (a[index] != NULL && b[index] != NULL) {
		aLetter = countChars(a, a[index]);
		bLetter = countChars(b, a[index]);
		if (aLetter != bLetter) {
			return false;
		}
		index++;
	}
	return true;
	
}

void clean(char raw_input[], char cleaned[])
{
	int i = 0;
	int j = 0;

	while (raw_input[i] != '\0') {
		if (!isspace(raw_input[i])) {
			cleaned[j] = tolower(raw_input[i]);
			j++;
		}
		i++;
	}
	cleaned[j] = '\0';
}
