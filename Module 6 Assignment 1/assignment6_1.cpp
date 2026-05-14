#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

void displayMenu() {
	cout << "----------------" << endl;
	cout << "- 1)Add -" << endl;
	cout << "- 2)Subtract -" << endl;
	cout << "- 3)Multiply -" << endl;
	cout << "- 4)Divide -" << endl; // added ability to divide
	cout << "- 5)Exit -" << endl;  // 5 is now exit program
	cout << "----------------" << endl;

}

// Added input validation for integers
void validateInput(int &number) {
	while (!(cin >> number)) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number: ";
		}	
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // After integer input is succusfully read, ignore any subsequent characters. example: 1abc
}

int add(int num1, int num2) {
	
	return num1 + num2;
}

int subtract(int num1, int num2) {
	
	return num1 - num2;
}

int multiply(int num1, int num2) {

	 return num1 * num2;	
}

double divide(int num1, int num2) {
	if (num2 != 0) {
		return static_cast<double>(num1) / num2;
	}
	else {
		cout << "Error: Division by zero." << endl;
		return 0;
	}
}

int main() {

	// Initialize integer variables
	int choice = 0;
	int num1 = 0, num2 = 0;

	while (choice != 5) {  // Added an actual way to end the program
		displayMenu();

		cout << "Enter your choice: ";
		validateInput(choice);

		switch (choice) {
		case 1:
			cout << "Enter the first number: ";
			validateInput(num1);

			cout << "Enter the second number: ";
			validateInput(num2);
			cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;  // Changed sign and arithmetic operation to match menu option
			break;

		case 2:
			cout << "Enter the first number: ";
			validateInput(num1);

			cout << "Enter the second number: ";
			validateInput(num2);
			cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;  // Changed arithmetic operation from add to subtract to match menu option
			break;

		case 3:
			cout << "Enter the first number: ";
			validateInput(num1);

			cout << "Enter the second number: ";
			validateInput(num2);
			cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;  // Changed sign and arithemetic operation to match menu option
			break;

		case 4:
			cout << "Enter the first number: ";
			validateInput(num1);

			cout << "Enter the second number: ";
			validateInput(num2);
			cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;  // added division option
			break;

		case 5:
			cout << "Exited program." << endl;
			break;

		// if user inputs anything not 1 through 5:
		default: 
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
	}
	return 0;
}
