#include "ArrayT.h"

int main()
{
	ArrayT p;
	p.loadfilie();
	p.outarray();
	int x = p.sum_of_invalid_triangle();
	cout << "sum of invalid triangles: " << x << endl;
	p.remove_all_invalid_triangle();
	cout << "triangle array after remove all invalid triangles: " << endl;
	p.outarray();
	int *b = p.sum_of_triangle();
	cout << "right isosceles triangles: " << b[0] << endl;
	cout << "right triangles: " << b[1] << endl;
	cout << "equilatral triangles: " << b[2] << endl;
	cout << "isosceles triangles: " << b[3] << endl;
	cout << "obtuse triangles: " << b[4] << endl;
	cout << "acute triangles: " << b[5] << endl;
	delete[]b;
}