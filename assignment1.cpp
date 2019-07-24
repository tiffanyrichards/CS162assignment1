#include <iostream>
using namespace std;

int main() {
	int choice = 0;
	
	cout << "Main menu:" << endl;
	cout << endl;
	cout << "1. Add item\n";
	cout << "2. Exit\n";
	cout << "Enter choice: ";

	cin >> choice;
	if (choice == 2) {
	cout << "Goodbye!";
	return 0;
	}
return 0;
}
