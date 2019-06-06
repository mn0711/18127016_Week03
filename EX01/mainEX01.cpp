#include "ArrayF.h"

int main()
{
	ArrayF a;
	Fraction m;
	int n;
	a.loadfile();
	cout << " Fraction array: " << endl;
	a.outarray();
	cout << "\n";
	float x = a.sum();
	cout << " sum of fraction array: " << x << endl;
	m = a.find_max();
	cout << " Fraction has max value: ";
	m.output();
	cout << endl;
	m = a.find_min();
	cout << " Fraction has min value: ";
	m.output();
	cout << endl;
	cout << " Sort the array in ascending order: " << endl;
	a.sort_asc();
	a.outarray();
}