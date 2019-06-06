#include "Fraction.h"



Fraction::Fraction()
{
	nu = 0;
	de = 1;
}

Fraction::Fraction(int n, int d)
{
	nu = n;
	if (d == 0)
	{
		exit(0);
	}
	de = d;
}

Fraction::Fraction(int d)
{
	nu = 1;
	if (d == 0)
	{
		exit(0);
	}
	de = d;
}

Fraction::Fraction(const Fraction &b)
{
	nu = b.nu;
	de = b.de;
}

Fraction::~Fraction()
{
}

void Fraction::input(ifstream &fi)
{
	fi >> nu;
	fi >> de;
}

void Fraction::output()
{
	cout << nu << "/" << de << "\t";
}

float Fraction::set_fraction()
{
	return  nu * 1.0 / de;
}

int Fraction::compare(Fraction b)
{
	float x = this->set_fraction();
	float y = b.set_fraction();
	if (x > y)
	{
		return 1;
	}
	if (x == y)
	{
		return 0;
	}
	if (x < y)
	{
		return -1;
	}
}


