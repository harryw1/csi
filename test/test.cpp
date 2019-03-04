#include <iostream>
using namespace std;

int main() {

	int input;
	bool valid = false;
	do {
		cin >> input;
		if (input % 3 == 0) {
			if (input > 3 && input < 100) {
				return valid;
			}
		}
	} while (!valid);


}
