#include <iostream>
#include <cstring>
using namespace std;

bool equal(char a[], char b[]);
int length(char str[]);

int main() {

	char str1[50];
	char str2[50];

	cout << "Please enter first string: ";
	cin.getline(str1, 50);

	cout << "Please enter second string: ";
	cin.getline(str2, 50);

	cout << "String 1: " << str1 << endl;
	cout << "String 2: " << str2 << endl;

	if (strcmp(str1, str2) == 0) {
		cout << "These strings are equal" << endl;
	}
	else {
		cout << "These strings are different" << endl;
	}

}
/*
bool equal(char a[], char b[])
{
	//if not same length, return false
	//if same length, check eahc elemtn and if not equal return false
	//else, true
	if (strlen(a) != strlen(b)) {
		return false;
	}
	int i = 0;
	while (a[i] != '\0') {
		if (a[i] != b[i]) {
			return false;
		}
		i++;
	}
	return true;
}
*/
int length(char str[])
{
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
