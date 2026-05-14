#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

std::vector<string> clientName = { "Bob Jones", "Sarah Davis", "Amy Friendly", "Johnny Smith", "Carol Spears" };
std::vector<int> serviceChoice = { 1, 2, 1, 1, 2 };

// it could also be string name1 = "Bob Jones", name2 = "Sarah Davis", name3 etc,.

int CheckUserPermissionAccess() {
	string username;
	string password;

	cout << "Enter username:" << endl;
	cin >> username;
	cout << "Enter a password:" << endl;
	cin >> password;

	if (password == "123") {
		return 1;
	}
	else {
		cout << "Invalid Password. Please try again" << endl;
		return 2;
	}
}

void DisplayInfo() {

	cout << "Client's Name    Service Selected (1 = Brokerage, 2 = Retirement)" << endl;

	cout << "1. " <<  clientName.at(0) << " selected option " << serviceChoice.at(0) << endl;
	cout << "2. " << clientName.at(1) << " selected option " << serviceChoice.at(1) << endl;
	cout << "3. " << clientName.at(2) << " selected option " << serviceChoice.at(2) << endl;
	cout << "4. " << clientName.at(3) << " selected option " << serviceChoice.at(3) << endl;
	cout << "5. " << clientName.at(4) << " selected option " << serviceChoice.at(4) << endl;
}

void ChangeCustomerChoice() {
	int changeChoice = 0;
	int newService = 0;

	cout << "Enter the number of the client that you wish to change" << endl;
	cin >> changeChoice;
	cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
	cin >> newService;

	switch (changeChoice) {
	case 1:
		serviceChoice.at(0) = newService;
		break;
	case 2:
		serviceChoice.at(1) = newService;
		break;
	case 3:
		serviceChoice.at(2) = newService;
		break;
	case 4:
		serviceChoice.at(3) = newService;
		break;
	case 5:
		serviceChoice.at(4) = newService;
		break;
	}
}

int main() {
	int valid = 0;
	int choice = 0;

	cout << "Created by Levi Bajuscik \n" << endl;
	cout << "Hello! Welcome to our Investment Company" << endl;

	while (valid != 1) {
		valid = CheckUserPermissionAccess();
	}

	while (choice != 3) {
		cout << "What would you like to do?" << endl;
		cout << "DISPLAY the client list (enter 1)" << endl;
		cout << "Change a client's choice (enter 2)" << endl;
		cout << "Exit the program.. (enter 3)" << endl;
		cin >> choice;
		cout << "You chose " << choice << endl;

		switch (choice) {
		case 1:
			DisplayInfo();
			break;
		case 2:
			ChangeCustomerChoice();
			break;
		case 3:
			break;
		}
	}
	return 0;
}