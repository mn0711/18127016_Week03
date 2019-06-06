#pragma once
#include <iostream>
#include <ctime>
using namespace std;
const int dom[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
class date
{
private:
	int day, month, year;
	const int *monthdays;
public:
	date(int y);
	date();
	date(int y, int m);
	date(int y, int m, int d);
	date(const date &a);
	void get_day_of_month();
	date input();
	date yesterday();
	date tomorrow();
	bool check_leap_year(int y);
	bool check_date();
	void output();
	~date();
};

