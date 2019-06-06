#pragma once
#include "Triangle.h"
class ArrayT
{
private:
	Triangle *p;
	int n;
public:
	void remove_invalid_triangle(int k);
	void remove_all_invalid_triangle();
	void loadfilie();
	void outarray();
	int sum_of_invalid_triangle();
	int *sum_of_triangle();
	ArrayT();
	ArrayT(int n);
	ArrayT(const ArrayT &a);
	~ArrayT();
};
