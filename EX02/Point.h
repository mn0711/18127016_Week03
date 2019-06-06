#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class Point
{
private:
	float x, y;
public:
	void input(ifstream &fi);
	void inputP();
	void output();
	float distance(Point p);
	Point();
	Point(float a);
	Point(float a, float b);
	Point(const Point &a);
	~Point();
};


