#pragma once
#include <iostream>
#include <string>

using namespace std;

class Rational
{
private:
	int m;
	int n;
	string ration = to_string(m) + " / " + to_string(n);

public:
	Rational();
	Rational(Rational& A);
	Rational(double a, double b);
	void scor();
	void operator =(Rational A);
	bool operator ==(Rational A);
	Rational operator +(Rational A);
	Rational operator +(double a);
	friend ostream& operator<<(ostream & stream, Rational ration);

};

int nod(int, int);