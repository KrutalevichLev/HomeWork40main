#include "logic.h"

string find_fibonachi_number(int number){
	if (number < 0) {
		return "Error";
	}
	string msg = "0 1 ";

	int a = 0;
	int b = 1;

	while (a + b < number) {
		int temp = b + a;
		a = b;
		b = temp;
		msg += to_string(b) + " ";
	}

	return msg;
}