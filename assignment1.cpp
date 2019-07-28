#include <iostream>
using namespace std;

int main() {
	int choice = 0;
	
	while (choice != 2) {

		cout << "Main menu:" << endl;
		cout << endl;
		cout << "1. Add item\n";
		cout << "2. Exit\n";
		cout << "Enter choice: ";

	cin >> choice;
	}

	cout << "Goodbye!";
	
	return 0;
}
