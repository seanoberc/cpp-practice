#if 1

#include <iostream>
using namespace std;

// prints an array of letters in reverse order
void printReverseLetter(char letterInput) {
	
	if (letterInput == 'a') {
		cout << letterInput << endl;
	}
	else {
		cout << letterInput << " ";
		printReverseLetter(letterInput - 1);
	}
}

int main() {
	char input;

	cout << "Enter input: ";
	cin >> input;

	printReverseLetter(input);

	return 0;
}

#endif

#if 0
#include <iostream>
#include <vector>
using namespace std;

int guessNum(int lowVal, int highVal) {
	// base case #1
	if ()

		// base case #2


		// recursive call


		return 0;
}

int main() {



	return 0;
}

#endif
