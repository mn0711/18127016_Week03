#include "ArrayF.h"



void ArrayF::loadfile()
{
	ifstream fi;
	fi.open("input.txt");
	if (!fi.is_open())
	{
		cout << " cant open this file" << endl;
		return;
	}
	fi >> n;
	a = new Fraction[n];
	for (int i = 0; i < n; i++)
	{
		a[i].input(fi);
	}
	fi.close();
}

void ArrayF::outarray()
{
	for (int i = 0; i < n; i++)
	{
		a[i].output();
	}
}

float ArrayF::sum()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i].set_fraction();
	}
	return s;
}

Fraction ArrayF::find_max()
{
	Fraction max = a[0];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (max.compare(a[j]) == -1)
			{
				max = a[j];
			}
		}
	}
	return max;
}

Fraction ArrayF::find_min()
{
	Fraction min = a[0];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (min.compare(a[j]) == 1)
			{
				min = a[j];
			}
		}
	}
	return min;
}

void ArrayF::sort_asc()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].compare(a[j]) == 1)
			{
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

ArrayF::ArrayF()
{
}

ArrayF::ArrayF(int n)
{
	if (n < 0)
	{
		exit(0);
	}
	this->n = n;
	a = new Fraction[n];
}

ArrayF::ArrayF(const ArrayF &b)
{
	n = b.n;
	a = new Fraction[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
}

ArrayF::~ArrayF()
{
	delete[]a;
}

