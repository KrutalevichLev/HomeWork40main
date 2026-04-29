#include "logic.h"

int main() {
	cout << "Enter index of fibonachi number: ";
	int number;

	cin >> number;

	cout << find_fibonachi_number(number);

	return 0;
}