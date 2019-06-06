#pragma once
#include "Point.h"
class ArrayP
{
private:
	Point *a;
	int n;
public:
	void loadfile();
	void outarray();
	ArrayP point_longest(Point p);
	ArrayP();
	ArrayP(int n);
	ArrayP(const ArrayP &b);
	~ArrayP();
};

