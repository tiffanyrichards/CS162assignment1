#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 10;

int main() {
	int choice = 0;
	string itemName[MAX] = {};
	double itemPrice[MAX] = {0};
	char choice2 = '\n';
	double sum = 0;

	cout << fixed << setprecision(2);

	while (choice != 2) {

		cout << "Main menu:" << endl;
		cout << endl;
		cout << "1. Add item\n";
		cout << "2. Exit\n";
		cout << "Enter choice: ";

		cin >> choice;
		if (choice == 2) {
			break;
		}

		for (int i = 0; i < MAX && choice2 != 'n'; i++) {
			cout << "Enter the name of your item: ";
			cin >> itemName[i];
			cout << "Enter the price of your item: ";
			cin >> itemPrice[i];
			sum = sum + itemPrice[i];
			while (isalpha(itemPrice[i])) {
				cout << "Invalid price input - try again: " << endl;
				cin >> itemPrice[i];
				sum = sum + itemPrice[i];
			}	

			cout << "Would you like to enter another item? (y/n): ";
			cin >> choice2;
			while (choice2 != 'y' && choice2 != 'n') {
				cout << "Invalid input" << endl;
				cout << "Would you like to enter another item? (y/n): ";
				cin >> choice2;
			}		
	
		}
		choice2 = 'y';		

	}

	cout << "The total price of your items is: $" << sum << endl;
	cout << "\nGoodbye!" << endl;
	
	return 0;
}
