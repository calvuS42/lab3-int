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

void Rational::scor()
{
	while (nod(m, n) > 1) {
		int t = nod(m, n);
		m /= t;
		n /= t;
	}
}

void Rational::operator=(Rational A)
{
	m = A.m;
	n = A.n;
}

bool Rational::operator==(Rational A)
{
	this->scor();
	A.scor();
	return (m == A.m && n == A.n) ?  true :  false;
}

ostream & operator<<(ostream & stream, Rational ration)
{
	stream << ration.ration;
	return stream;
}
