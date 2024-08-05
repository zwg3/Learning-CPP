#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Person.h"

using namespace std;

struct Grade
{
	string subject;
	string score;
};

class Student : public Person
{
private:
	map <string, string> studentGrades;
public:
	Student(): Person(){};
	Student(string name, string lastName, string secondName, string phoneNum) : Person(name, lastName, secondName, phoneNum){};

	void inputGrades()
	{		
		Grade g;
		string input;
		cout << "Please input subject name and grade (enter \'q\' at any time to quit)\n";	
		while (true)
		{	
			cout << "Subject: ";
			cin >> input;
			if (input == "q")
			{
				break;
			}
			g.subject = input;
			cout << "Grade: ";
			cin >> input;
			if (input == "q")
			{
				break;
			}
			g.score = input;
			studentGrades[g.subject] = g.score;				
		}	
	}

	map <string, string> getGrades()
	{
		return studentGrades;
	}

	void printGrades()
	{		
		map<string, string>::iterator it;
		cout << "\n" << getLName() << "'s grades: \n";
		for (it = studentGrades.begin(); it != studentGrades.end(); ++it)
		{
			cout << it->first << ": " << it->second << "\n";
		}
		cout << "\n";
	}

	string formGrades()
	{
		string res = "Grades:\n";
		map<string, string>::iterator it;
		for (it = studentGrades.begin(); it != studentGrades.end(); ++it)
		{
			res+= it->first + ": " + it->second + "\n";
		}
		return res;
	}

	void setGrades(map <string, string> grades)
	{
		this->studentGrades = grades;
	}

	string formData()
	{
		return "Student data \n" + Person::formData() + formGrades() + "\n_____________________________\n";

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

