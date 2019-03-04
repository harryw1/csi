#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalendrome(char s[]);
void clean(char raw_input[], char cleaned[]);

int main() {

	char s[50];
	char c[50];

	cout << "Please enter a string: ";
	cin.getline(s, 50);

	//clean the input
	clean(s, c);

	if ( isPalendrome(c) ) {
		cout << "Palendrome!" << endl;
	}
	else {
		cout << "Nope." << endl;
	}



}

bool isPalendrome(char s[])
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
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
