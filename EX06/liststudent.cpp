#include "liststudent.h"


liststudent::liststudent()
{

}


liststudent::liststudent(int n)
{
	if (n < 0)
	{
		exit(0);
	}
	this->n = n;
	a = new student[n];
}


liststudent::liststudent(const liststudent &b)
{
	n = b.n;
	a = new student[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
}

liststudent::~liststudent()
{
	delete[]a;
}


void liststudent::loadfile()
{
	ifstream fi;
	fi.open("input.txt");
	if (!fi.is_open())
	{
		cout << "cant open this file!" << endl;
		return;
	}
	fi >> n;
	a = new student[n];
	for (int i = 0; i < n; i++)
	{
		a[i].input(fi);
	}
	fi.close();
}

void liststudent::outfile()
{
	ofstream fo;
	fo.open("output.xml");
	if (!fo.is_open())
	{
		cout << "cant open this file!" << endl;
		return;
	}
	fo << "<list_of_student>";
	for (int i = 0; i < n; i++)
	{
		fo << "<student" << i + 1 << ">";
		a[i].output(fo);
		fo << "</student" << i + 1 << ">";
	}
	fo << "</list_of_student>";
	fo.close();
}

void liststudent::sort_by_lastname()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].compare(a[j]) > 0)
			{
				student temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
