#include "ArrayP.h"

int main()
{
	ArrayP a;
	Point p;
	a.loadfile();
	cout << "point array: ";
	a.outarray();
	cout << " enter point P: " << endl;
	p.inputP();
	p.output();
	cout << endl;
	ArrayP max = a.point_longest(p);
	cout << "point has  max distance value from P: ";
	max.outarray();
	cout << endl;
}