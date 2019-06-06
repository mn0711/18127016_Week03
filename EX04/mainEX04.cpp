#include "date.h"

int main()
{
	date a;
	do
	{
		a.input();
	} while (a.check_date() == false);
	cout << "day: ";
	a.output();
	date b = a.yesterday();
	date c = a.tomorrow();
	cout << "day before: ";
	b.output();
	cout << "day after: ";
	c.output();
}