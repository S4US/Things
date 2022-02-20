// made by saus
#include <iostream>																																																																																																																	// saus
#include <cmath>
using namespace std;

int main()
{
	beginning:

	cout << "calculator" << endl;
	cout << "************************" << endl;
	cout << "* choose:             * " << endl;
	cout << "* 1. regular calculator   * " << endl;
	cout << "* 2. square root * " << endl;
	cout << "* 3. potency  * " << endl;
	cout << "************************" << endl;

	int answer;
	cin >> answer;

	if (answer == 3) {
		system("cls");
		cout << "potency" << endl;
		cout << "**********************" << endl;
		int baseNumber;
		int exponent;

		while (1) {
			cout << "type a base number: ";
			cin >> baseNumber;
			cout << "type a exponent: ";
			cin >> exponent;
			cout << "answer: ";

			cout << pow(baseNumber, exponent) << endl;
			if (baseNumber == 0 || exponent == 0) {
				system("cls");
				goto beginning;
			}
		}

	}

	if (answer == 2) {
		system("cls");
		cout << "square root calculator" << endl;
		cout << "type 0 to leave" << endl;
		cout << "**********************" << endl;
		int num;
		
		while (1) {
			cout << "type a number: ";
			cin >> num;
			cout << "answer: ";
			cout << sqrt(num) << endl;

			if (num == 0) {
				system("cls");
				goto beginning;
			}
		}

	}

	if (answer == 1) {
		system("cls");
		cout << "regular calculator" << endl;
		cout << "**********************" << endl;
		int num1;
		int num2;
		string method;

		while (1) {
			cout << "type a number: ";
			cin >> num1;
			cout << "choose operator +,-,*,/ : ";
			cin >> method;
			cout << "type a second number: ";
			cin >> num2;

			if (method == "+") {
				cout << "answer: ";
				cout << num1 + num2 << endl;
			}
			else if (method == "-") {
				cout << "answer: ";
				cout << num1 - num2 << endl;
			}
			else if (method == "*") {
				cout << "answer: ";
				cout << num1 * num2 << endl;
			}
			else if (method == "/") {
				cout << "answer: ";
				cout << num1 / num2 << endl;
			}
			else {
				cout << "Error" << endl;
				system("cls");
				goto beginning;
			}
		}
	}

	return 0;
}