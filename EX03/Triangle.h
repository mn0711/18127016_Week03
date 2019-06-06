#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class Triangle
{
private:
	float a, b, c;
public:
	void input(ifstream &fi);
	void output();
	float cos(float a, float b, float c);
	bool check_triangle();
	int type_of_triangle();
	Triangle();
	Triangle(const Triangle &p);
	Triangle(float x, float y, float z);
	~Triangle();
};

