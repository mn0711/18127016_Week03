#include "time.h"

int main()
{
	time a;
	do
	{
		a.input();
	} while (a.check_time() == false);
	a.set_time();
	a.output();
	time b = a.time_before();
	time c = a.time_after();
	cout << "time before one second: ";
	b.output();
	cout << "time after one second: ";
	c.output();
}