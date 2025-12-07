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

// Factorial function
void factorial() {
	int n;

	// Gets user input for factorial function
	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> n;
	// Validates user input
	while (n < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}

	long long fact = 1;

	cout << n << "! = ";
	// Calculates the factorial
	for (int i = 1; i <= n; ++i) {
		fact *= i;
		cout << i;
		if (i < n) {
			cout << " * ";
		}
	}
	cout << " = " << fact << endl;
	
}

// Arithmetic series function
void arithmetic() {
	int d;
	int s;
	int e;

	// Gets user input for arithmetic series variables
	// d = starting number, s = step size, e = number of elements
	cout << "Arithmetic Series : " << endl;
	cout << "Enter a number to start at: ";
	cin >> d;

	cout << "Enter a number to add each time: ";
	cin >> s;
	
	cout << "Enter the number of elements in the series: ";
	cin >> e;

	long long sum = 0;

	for (int i = 0; i < e; ++i) {
		cout << d;
		// Ensures plus sign isn't printed last
		if (i < e - 1) {
			cout << " + ";
		}
		// Adds current "d" to sum and updates "d" for next element
		// Starts by adding initial "d" value, follows series from there
		sum += d;
		d += s;
	}

	cout << " = " << sum << endl;

}

// Geometric series function
void geometric() {
	int r;
	int a;
	int e;

	// Gets user input for geometric series variables
	// r = starting number, a = multiplied each time, e = number of elements
	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> r;

	cout << "Enter a number to multiply by each time: ";
	cin >> a;

	cout << "Enter the number of elements in the series: ";
	cin >> e;

	long long product = 0;

	for (int i = 0; i < e; ++i) {
		cout << r;
		if (i < e - 1) {
			cout << " + ";
		}
		product += r;
		r *= a;
	}

	cout << " = " << product << endl;
}

// Main function
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