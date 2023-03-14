#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

using namespace std;

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int base = 10;
	char numberString[] = "13.5ab_1x";
	char* end;
	long long int number;

	number = strtoll(numberString, &end, base);
	cout << "String value = " << numberString << endl;
	cout << "Long long int value = " << number << endl;
	cout << "End String = " << end << endl;

	strcpy(numberString, "13");
	cout << "String value = " << numberString << endl;
	number = strtoll(numberString, &end, base);
	cout << "Long long int value = " << number << endl;

	if (*end) {
		cout << end;
	} else {
		cout << "Null pointer";
	}

	_getch();
	return 0;
}
