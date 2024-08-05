#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Teacher : public Person
{
private:
	int workHrs;
	int salary;
	string mainSubject;
public:
	Teacher() : Person(), workHrs(), salary() {};
	Teacher(string name, string lastName, string secondName, string phoneNum, int workHrs, double salary, string mainSubject) : Person(name, lastName, secondName, phoneNum)
	{
		this->workHrs = workHrs;
		this->salary = salary;
		this->mainSubject = mainSubject;
	}

	void setSal(int sal)
	{
		this->salary = sal;
	}
	void setWrkHrs(int hrs)
	{
		this->workHrs = hrs;
	}
	void setSubject(string subject)
	{
		this->mainSubject = subject;
	}

	double getSal()
	{
		return salary;
	}

	int getWorkHrs()
	{
		return workHrs;
	}

	string getMainSubject()
	{
		return mainSubject;
	}

	void printTeacherData()
	{
		cout << "\nTeacher's work data:\n";
		cout << "Working hours: " << workHrs << "\n"
			 << "Salary: " << salary << "\n"
			 << "Main subject: " << mainSubject << "\n";
	}

	string formData()
	{
		return "Teacher data: \n" + Person::formData() + "Main subject: " + mainSubject + "\n" + "Salary : " + to_string(salary) + "\n"\
			+ "Working hours: " + to_string(workHrs) + "\n_____________________________\n";

	}

	string getName()
	{
		return Person::getName();
	}
	string getLName()
	{
		return Person::getLName();
	}
	string getSName()
	{
		return Person::getSName();
	}
	string getPNum()
	{
		return Person::getPNum();
	}
};