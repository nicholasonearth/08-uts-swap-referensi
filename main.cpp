#include <iostream>
#include "header.h" 

using namespace std;

int main() {
	int angka1 = 5;
	int angka2 = 10;

	cout << "Sebelum Dituker: " << angka1 << " dan " << angka2 << endl;

	tukar(angka1, angka2);

	cout << "Sesudah Ditukar: " << angka1 << " dan " << angka2 << endl;
		
	return 0;	

}