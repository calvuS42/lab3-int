#include "Rational.h"


void main() {
	Rational a;
	cout << "enter the value of a. \n";
	cin >> a;
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