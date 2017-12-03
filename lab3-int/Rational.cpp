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

Rational::Rational(int a, int b)
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

Rational Rational::operator+(Rational A)
{
	this->scor();
	A.scor();
	int Mt = m*A.n + A.m*n;
	int Nt = n*A.n;
	Rational t(Mt, Nt);
	t.scor();
	return t;
}

Rational Rational::operator-(Rational A)
{
	this->scor();
	A.scor();
	int Mt = m*A.n - A.m*n;
	int Nt = n*A.n;
	Rational t(Mt, Nt);
	t.scor();
	return t;
}

Rational Rational::operator*(Rational A)
{
	this->scor();
	A.scor();
	int Mt = m*A.m;
	int Nt = n*A.n;
	Rational t(Mt, Nt);
	t.scor();
	return t;
}

Rational Rational::operator/(Rational A)
{
	this->scor();
	A.scor();
	int Mt = m*A.n;
	int Nt = n*A.m;
	Rational t(Mt, Nt);
	t.scor();
	return t;
}

void Rational::operator^(int a)
{
}

ostream & operator<<(ostream & stream, Rational ration)
{
	stream << ration.ration;
	return stream;
}
