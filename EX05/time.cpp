#include "time.h"



time::time()
{
	h = m = s = 0;
	set_time();
}

time::time(int hour)
{
	if (hour > 24)
	{
		exit(0);
	}
	h = hour;
	m = s = 0;
	set_time();
}

time::time(int hour, int min)
{
	if (hour > 24)
	{
		exit(0);
	}
	if (hour == 24 && min > 0)
	{
		exit(0);
	}
	if (min > 60)
	{
		exit(0);
	}
	h = hour;
	m = min;
	s = 0;
	set_time();
}

time::time(int hour, int min, int sec)
{
	if (sec > second)
	{
		exit(0);
	}
	else
	{
		if (sec == second && min == minute)
		{
			exit(0);
		}
		if (min == minute && sec> 0)
		{
			exit(0);
		}
		if (hour == this->hour && min > 0 && sec > 0)
		{
			exit(0);
		}
	}
	h = hour;
	m = min;
	s = sec;
	set_time();
}

time::time(const time &a)
{
	h = a.h;
	m = a.m;
	s = a.s;
	set_time();
}

time::~time()
{
}

time time::input()
{
	cout << "enter hour: ";
	cin >> h;
	cout << "enter minute: ";
	cin >> m;
	cout << "enter second: ";
	cin >> s;
	return *this;
}

void time::output()
{
	cout << h << ":" << m << ":" << s << endl;
}

bool time::check_time()
{
	if (s > second)
	{
		return false;
	}
	else
	{
		if (s == second && m == minute)
		{
			return false;
		}
		if (m == minute && s > 0)
		{
			return false;
		}
		if (h == hour && m > 0 && s > 0)
		{
			return false;
		}
	}
	return true;
}

void time::set_time()
{
	if (s == second)
	{
		s = 0;
		if (m == minute - 1)
		{
			m = 0;
			if (h == hour - 1)
			{
				h = 0;
			}
			else
			{
				h += 1;
			}
		}
		else
		{
			m += 1;
		}
	}
	if (s == 0 && m == minute)
	{
		if (h == hour - 1)
		{
			s = h = m = 0;
		}
		else
		{
			h = h + 1;
		}
	}
	if (s == 0 && m == 0 && h == hour)
	{
		s = h = m = 0;
	}
}

time time::time_before()
{
	time a;
	if (s == 0)
	{
		if (m == 0)
		{
			if (h == 0)
			{
				a.s = second - 1;
				a.m = minute - 1;
				a.h = hour - 1;
			}
			else
			{
				a.s = second - 1;
				a.m = minute - 1;
				a.h = h - 1;
			}
		}
		else
		{
			a.s = second - 1;
			a.m = m - 1;
			a.h = h;
		}
	}
	else
	{
		a.s = s - 1;
		a.m = m;
		a.h = h;
	}
	return a;
}

time time::time_after()
{
	time a;
	if (s == second - 1)
	{
		if (m == minute - 1)
		{
			if (h == hour - 1)
			{
				a.s = a.h = a.m = 0;
			}
			else
			{
				a.s = a.m = 0;
				a.h = h + 1;
			}
		}
		else
		{
			a.s = 0;
			a.m = m + 1;
			a.h = h + 1;
		}
	}
	else
	{
		a.s = s + 1;
		a.m = m;
		a.h = h;
	}
	return a;
}