#include <iostream>
#include "student.h"
using namespace std;

int main()
{
	try
	{
		Student obj;
		obj.SetAge(19);
		obj.GetAverage(10.1);
		obj.GetYear(1);
		obj.Input();
		obj.Print();
	}



	catch (...)
	{
		cout << "Error\n";
	}
}