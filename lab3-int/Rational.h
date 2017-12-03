#pragma once
#include <iostream>
#include <string>

using namespace std;

class Rational
{
private:
	int m;
	int n;
public:
	Rational();
	Rational(Rational& A);
	Rational(int a, int b);
	void scor();
	void operator =(Rational A);
	bool operator ==(Rational A);
	Rational operator +(Rational A);
	Rational operator -(Rational A);
	Rational operator *(Rational A);
	Rational operator /(Rational A);
	void operator ^(int a);
	friend ostream& operator<<(ostream & stream, Rational ration);
	friend istream& operator>>(istream & stream, Rational ration);
};

int nod(int, int);