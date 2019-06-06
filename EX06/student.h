#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
	string ID, firstname, lastname, address, dob, mark;
public:
	void input(ifstream &fi);
	void output(ofstream &fo);
	int compare(student a);
	student();
	student(const student &a);
	student(string id, string f_name, string l_name, string addr, string DoB, string m);
	~student();
};


