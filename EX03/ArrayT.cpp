#include "ArrayT.h"



ArrayT::ArrayT()
{
}

ArrayT::ArrayT(int n)
{
	if (n < 0)
	{
		exit(0);
	}
	this->n = n;
	p = new Triangle[n];
}

ArrayT::ArrayT(const ArrayT &a)
{
	n = a.n;
	p = new Triangle[n];
	for (int i = 0; i < n; i++)
	{
		p[i] = a.p[i];
	}
}

ArrayT::~ArrayT()
{
	delete[]p;
}


void ArrayT::loadfilie()
{
	ifstream fi;
	fi.open("input.txt");
	if (!fi.is_open())
	{
		cout << "cant open this file!" << endl;
		return;
	}
	fi >> n;
	p = new Triangle[n];
	for (int i = 0; i < n; i++)
	{
		p[i].input(fi);
	}
	fi.close();
}

void ArrayT::outarray()
{
	for (int i = 0; i < n; i++)
	{
		p[i].output();
	}
}

int ArrayT::sum_of_invalid_triangle()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].check_triangle() == false)
		{
			count++;
		}
	}
	return count;
}

int *ArrayT::sum_of_triangle()
{
	int x;
	int *b = new int[6];
	for (int i = 0; i < 6; i++)
	{
		b[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		x = p[i].type_of_triangle();
		switch (x)
		{
		case 0:
		{
			b[0]++;
			break;
		}
		case 1:
		{
			b[1]++;
			break;
		}
		case 2:
		{
			b[2]++;
			break;
		}
		case 3:
		{
			b[3]++;
			break;
		}
		case 4:
		{
			b[4]++;
			break;
		}
		case 5:
		{
			b[5]++;
			break;
		}
		default:
			break;
		}
	}
	return b;
}

void ArrayT::remove_invalid_triangle(int k)
{
	for (int i = k; i < n; i++)
	{
		p[i] = p[i + 1];
	}
	n--;
}

void ArrayT::remove_all_invalid_triangle()
{
	for (int i = 0; i < n; i++)
	{
		if (p[i].check_triangle() == false)
		{
			remove_invalid_triangle(i);
			i--;
		}
	}
}
