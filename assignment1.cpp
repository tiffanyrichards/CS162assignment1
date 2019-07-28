#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
	int choice = 0;
	string itemName[MAX] = '\n';
	double itemPrice[MAX] = 0;
	
	while (choice != 2) {

		cout << "Main menu:" << endl;
		cout << endl;
		cout << "1. Add item\n";
		cout << "2. Exit\n";
		cout << "Enter choice: ";

	cin >> choice;

	for (int i = 0; i > 0; i++) {
		cout << "Enter the name of your item: ";
		cin >> itemName[i];
		cout << "Enter the price of your item: ";
		cin >> itemPrice[i];

		cout << "Would you like to enter another item?\n"
			 << "Enter 1 for yes 2 for no: ";
		cin >> choice;
	{	

	}

	cout << "Goodbye!";
	
	return 0;
}
