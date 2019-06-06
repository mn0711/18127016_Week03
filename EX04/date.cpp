#include "date.h"



date::date()
{
	get_day_of_month();
	time_t t(0);
	time(&t);
	tm TM = *localtime(&t);
	year = TM.tm_year + 1900;
	month = TM.tm_mon + 1;
	day = TM.tm_mday;

}

date::date(int y)
{
	get_day_of_month();
	year = y;
	month = 1;
	day = 1;
}

date::date(int y, int m)
{
	get_day_of_month();
	year = y;
	if (m > 12)
	{
		exit(0);
	}
	month = m;
	day = 1;
}

date::date(int y, int m, int d)
{
	get_day_of_month();
	year = y;
	if (m > 12)
	{
		exit(0);
	}
	if (check_leap_year(y))
	{
		if (m == 2)
		{
			if (d > 29)
			{
				exit(0);
			}
		}
	}
	if (d > this->monthdays[m - 1])
	{
		exit(0);
	}
	day = d;
	month = m;

}

date::date(const date &a)
{
	day = a.day;
	month = a.month;
	year = a.year;
	get_day_of_month();
}

bool date::check_leap_year(int y)
{
	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
	{
		return true;
	}
	return false;
}

date date::input()
{
	cout << "enter day: ";
	cin >> day;
	cout << "enter month: ";
	cin >> month;
	cout << "enter year: ";
	cin >> year;
	return *this;
}

void date::output()
{
	cout << day << "/" << month << "/" << year << endl;
}

void date::get_day_of_month()
{
	monthdays = dom;
}

date date::yesterday()
{
	date a;
	if (day == 1)
	{
		if (month == 1)
		{
			a.year = year - 1;
			a.month = 12;
			a.day = monthdays[11];
		}
		else
		{
			if (month == 3 && check_leap_year(year) == true)
			{
				a.year = year;
				a.month = month - 1;
				a.day = monthdays[month - 2] + 1;
			}
			else
			{
				a.year = year;
				a.month = month - 1;
				a.day = monthdays[month - 2];
			}

		}
	}
	else
	{
		a.day = day - 1;
		a.month = month;
		a.year = year;
	}
	return a;
}

date date::tomorrow()
{

	int b = monthdays[month - 1];
	if (this->day == 29 && this->month == 2 && check_leap_year(this->year) == true)
	{
		this->day = 1;
		this->month = 3;
		this->year = year;
		return *this;
	}
	if (this->day == b)
	{
		if (month == 12)
		{
			this->year = year + 1;
			this->month = 1;
			this->day = 1;
		}
		else
		{
			if (month == 2 && check_leap_year(year) == true)
			{
				this->day = day + 1;
				this->month = month;
				this->year = year;
			}
			else
			{
				this->day = 1;
				this->month = month + 1;
				this->year = year;
			}
		}
	}
	
	else
	{
		this->day = day + 1;
		this->month = month;
		this->year = year;
	}
	return *this;
}

bool date::check_date()
{
	if (month == 2 && day == 29 && check_leap_year(year) == true)
	{
		return true;
	}
	if (day > monthdays[month - 1] || month > 12)
	{
		return false;
	}
	else
	{
		return true;
	}
}

date::~date()
{

}

