#include "student.h"



student::student()
{
}

student::student(const student &a)
{
	ID = a.ID;
	firstname = a.firstname;
	lastname = a.lastname;
	address = a.address;
	dob = a.dob;
	mark = a.mark;
}

student::student(string id, string f_name, string l_name, string addr, string DoB, string m)
{
	ID = id;
	firstname = f_name;
	lastname = l_name;
	address = addr;
	dob = DoB;
	mark = m;
}

student::~student()
{
}

void student::input(ifstream &fi)
{
	getline(fi, ID, ',');
	getline(fi, lastname, ',');
	getline(fi, firstname, ',');
	getline(fi, address, ',');
	getline(fi, dob, ',');
	getline(fi, mark);
}

void student::output(ofstream &fo)
{
	fo << "<ID>" << ID << "</ID>";
	fo << "<firstname>" << firstname << "</firstname>";
	fo << "<lastname>" << lastname << "</lastname>";
	fo << "<address>" << address << "</address>";
	fo << "<date_of_birth>" << dob << "</date_of_birth>";
	fo << "<mark>" << mark << "</mark>";
}

int student::compare(student a)
{
	return lastname.compare(a.lastname);
}

