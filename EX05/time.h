#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class time
{
private:
	unsigned int h, m, s;
	const int hour = 24;
	const int minute = 60;
	const int second = 60;

public:
	time input();
	void output();
	bool check_time();
	void set_time();
	time time_before();
	time time_after();
	time();
	time(int hour);
	time(int hour, int min);
	time(int hour, int min, int sec);
	time(const time &a);
	~time();
};



