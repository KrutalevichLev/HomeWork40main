#include "logic.h"

int find_trbonachi_number(int number) {

	if (number < 0) {
		return -1;
	}

	int a = 0;
	int b = 0;
	int c = 1;

	for (int i = 0; i < number; i++)
	{
		int temp = a + c + b;
		a = b;
		b = c; 
		c = temp;
	}

	return a;
}