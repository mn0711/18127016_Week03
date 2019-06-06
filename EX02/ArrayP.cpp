#include "ArrayP.h"



ArrayP::ArrayP()
{
}

ArrayP::ArrayP(int n)
{
	if (n < 0)
	{
		exit(0);
	}
	this->n = n;
	a = new Point[n];
}

ArrayP::ArrayP(const ArrayP &b)
{
	n = b.n;
	a = new Point[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
}

ArrayP::~ArrayP()
{
	delete[]a;
}

void ArrayP::loadfile()
{
	ifstream fi;
	fi.open("input.txt");
	if (!fi.is_open())
	{
		cout << "cant open this file!" << endl;
		return;
	}
	fi >> n;
	a = new Point[n];
	for (int i = 0; i < n; i++)
	{
		a[i].input(fi);
	}
}

void ArrayP::outarray()
{
	for (int i = 0; i < n; i++)
	{
		a[i].output();
		cout << "\t";
	}
	cout << "\n";
}

ArrayP ArrayP::point_longest(Point p)
{
	ArrayP b;
	Point max = a[0];
	int count = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].distance(p) > max.distance(p))
		{
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i].distance(p) == max.distance(p))
		{
			count++;
		}
	}
	b.n = count;
	b.a = new Point[count];
	for (int i = 0; i < n; i++)
	{
		if (a[i].distance(p) == max.distance(p))
		{
			b.a[j] = a[i];
			j++;
		}
	}
	return b;
}
