#pragma once
#include "Fraction.h"
class ArrayF
{
private:
	Fraction *a;
	int n;
public:
	void loadfile();
	void outarray();
	float sum();
	Fraction find_max();
	Fraction find_min();
	void sort_asc();
	ArrayF();
	ArrayF(int n);
	ArrayF(const ArrayF &a);
	~ArrayF();

};

