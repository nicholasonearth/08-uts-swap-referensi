#include "header.h"

void tukar(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}