#include "Rational.h"


void main() {
	Rational a(3, 4);
	cout << a << endl;
	Rational b(12, 9);
	cout << b << endl;
	Rational c;
	c = a - b;
	cout << c << endl;
	c = a + b;
	cout << c << endl;
	c = a*b;
	cout << c << endl;
	c = a / b;
	cout << c << endl;

	system("pause");
}