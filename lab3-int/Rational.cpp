#include "Rational.h"



int nod(int a, int b)
{
	while (a && b)
		if (a >= b)
			a %= b;
		else
			b %= a;
	return a | b;
}

Rational::Rational()
{
	m = 0;
	n = 0;
}

Rational::Rational(Rational & A)
{
	m = A.m;
	n = A.n;
}

Rational::Rational(double a, double b)
{
	m = a;
	n = b;
}

void Rational::scor(Rational A)
{
	while (nod(A.m, A.n) > 1) {
		int t = nod(A.m, A.n);
		m /= t;
		n /= t;
	}
}

void Rational::operator=(Rational A)
{
	m = A.m;
	n = A.n;
}

ostream & operator<<(ostream & stream, Rational ration)
{
	stream << ration.ration;
	return stream;
}
