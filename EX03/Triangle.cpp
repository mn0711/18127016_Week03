#include "Triangle.h"



Triangle::Triangle()
{
}

Triangle::Triangle(const Triangle &p)
{
	a = p.a;
	b = p.b;
	c = p.c;
}

Triangle::Triangle(float x, float y, float z)
{
	a = x;
	b = y;
	c = z;
}

Triangle::~Triangle()
{
}

void Triangle::input(ifstream &fi)
{
	fi >> a;
	fi >> b;
	fi >> c;
}

void Triangle::output()
{
	cout << "triangle has 3 edge: (" << a << ";" << b << ";" << c << ")" << endl;
}

float Triangle::cos(float a, float b, float c)
{
	float cos;
	cos = (b*b + c * c - a * a) / (2 * b*c);
	return cos;
}

bool Triangle::check_triangle()
{
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int Triangle::type_of_triangle()
{
	float cosA, cosB, cosC;
	cosA = cos(a, b, c);
	cosB = cos(b, a, c);
	cosC = cos(c, a, b);
	if (abs(a*a - b * b + c * c) < 0.000001 || abs(a*a + b * b - c * c) < 0.000001 || abs(-a * a + b * b + c * c) < 0.000001)
	{
		if (a == b || b == c || c == a)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		if ((a == b) && (b == c))
		{
			return 2;
		}
		else
		{
			if (a == b || b == c || c == a)
			{
				return 3;
			}
			else
			{
				if (cosA < 0 || cosB < 0 || cosC < 0)
				{
					return 4;
				}
				else
				{
					return 5;
				}
			}
		}
	}
}

