#include "Point.h"



Point::Point()
{
}


Point::~Point()
{
}

Point::Point(float a)
{
	x = a;
	y = 0;
}

Point::Point(float a, float b)
{
	x = a;
	y = b;
}

Point::Point(const Point &a)
{
	x = a.x;
	y = a.y;
}

void Point::input(ifstream &fi)
{
	fi >> x;
	fi >> y;
}

void Point::inputP()
{
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
}

void Point::output()
{
	cout << "(" << x << ";" << y << ")";
}

float Point::distance(Point p)
{
	return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}


