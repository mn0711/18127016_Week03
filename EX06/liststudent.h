#pragma once
#include "student.h"

class liststudent
{
private:
	student *a;
	int n;
public:
	void loadfile();
	void outfile();
	void sort_by_lastname();
	liststudent();
	liststudent(int n);
	liststudent(const liststudent &b);
	~liststudent();
};
