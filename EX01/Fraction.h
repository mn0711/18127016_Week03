#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class Fraction
{
private:
	int nu, de;
public:
	void input(ifstream &fi);
	void output();
	float set_fraction();
	int compare(Fraction b);
	Fraction();					//0/1
	Fraction(int n, int d);		//n/d
	Fraction(int d);			//1/d
	Fraction(const Fraction &b);
	~Fraction();
};



