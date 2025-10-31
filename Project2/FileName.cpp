#include <iostream>
#include "student.h"
using namespace std;

int main()
{
	try
	{
		Student obj;
		obj.Input();
		obj.Print();
	}



	catch (...)
	{
		cout << "Error\n";
	}
}