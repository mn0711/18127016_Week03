#include "liststudent.h"

int main()
{
	liststudent a;
	a.loadfile();
	a.sort_by_lastname();
	a.outfile();
}