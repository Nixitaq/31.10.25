#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
	double Average;
	int year;  //курс обучения от 1 до 5
public:
	Student();
	Student(string n, string s, int a, double av, int y);
	void Print();

	double GetAverage();
	int GetAge();
	int GetYear();

	void SetAverage(double y);
	void SetAge(int y);
	void SetYear(int y);
	void Input();
};
Student::Student() {
	age = 0;
	Average = 0.0;
	year = 0;
}

Student::Student(string n, string s, int a, double Av, int y)
{
	name = n;
	surname = s;
	if (a < 17 || a > 65)
	{
		throw "!!!!!Age exception!!!!!!";
	}
	age = a;
	if (Av < 0)
	{
		throw "!!!!Average exception!!!!!";
	}
	Average = Av;

	if (y < 1 || y > 5)
	{
		throw "!!!!Age exception!!!!";
	}
	year = y;
}

void Student::Print()
{
	cout << "Name: " << name << "\t"
		<< "Surname: " << surname << "\t"
		<< "Age: " << age << "\t"
		<< "Agerage: " << Average << "\t"
		<< "Year: " << year << endl << endl;
}

double Student::GetAverage()
{
	return Average;
}

inline int Student::GetAge()
{
	return age;
}

inline int Student::GetYear()
{
	return year;
}


void Student::SetAverage(double y)
{
	if (y < 0)
	{
		throw "Average error\n";
	}
	y = Average;
}

void Student::SetAge(int y)
{
	if (y < 17 || y > 65)
	{
		throw "Age error\n";
	}
	age = y;
}

void Student::SetYear(int y)
{
	if (y < 1 || y > 5)
	{
		throw "Year error\n";
	}
	year = y;
}

void Student::Input()
{
	cout << "Enter name \t";
	cin >> name;
	cout << "Enter Surname \t";
	cin >> surname;


	cout << "Enter Age \t";
	int a;
	cin >> a;
	if (a < 17 || a > 65)
	{
		throw "!!!!!Age exception!!!!!!";
	}

	cout << "Enter Average \t";
	int Av;
	cin >> Av;
	if (Av < 0)
	{
		throw "!!!!Average exception!!!!!";
	}


	cout << "Enter Year \t";
	int y;
	cin >> y;
	if (y < 1 || y > 5)
	{
		throw "!!!!Age exception!!!!";
	}
}

