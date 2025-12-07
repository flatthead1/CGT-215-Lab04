#include <iostream>
using namespace std;

// Print out the menu of choices for the user to select from

void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int n;

	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> n;
	if (n < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}
	if (n == 0 || n == 1) {
		cout << "The factorial of " << n << " is 1" << endl;
	}
	cout << "IT WORKED!!!" << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}