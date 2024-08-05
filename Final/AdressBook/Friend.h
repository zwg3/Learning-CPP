#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "DateCalc.h"

using namespace std;

class Friend: public Person
{
private:
	string birthDate;
public:
	Friend() : Person(), birthDate() {};
	Friend(string name, string lastName, string secondName, string phoneNum, string birthDate) : Person(name, lastName, secondName, phoneNum)
	{
		this->birthDate = birthDate;
	}

	void setBdate(string bDate)
	{
		this->birthDate = bDate;
	}

	string getBDate()
	{
		return birthDate;
	}

	bool isBirthday()
	{
		string bDay = birthDate.substr(0, 2);
		if (bDay.substr(0, 1) == "0")
		{
			bDay = bDay.substr(1, 1);
		}
		string bMonth = birthDate.substr(3, 2);
		if (bMonth.substr(0, 1) == "0")
		{
			bMonth = bMonth.substr(1, 1);
		}
		vector <string> d{ getLocalDate() };

		if (d[1] == bDay && d[0] == bMonth)
		{
			return true;
		}

		return false;
	}

	int getAge()
	{
		vector <string> d{ getLocalDate() };
		return stoi(d[2]) - stoi(birthDate.substr(6, 4));
	}

	void printBirthDay()
	{
		bool flag = isBirthday();
		if (flag == true)
		{
			cout << "\nToday is "
				 << getName() << "\'s birthday!\n"
				 << getName() << " is now "
				 << getAge() << " years old!\n";
		}
		else
		{
			cout << "\nToday is not "
				 << getName() << "\'s birthday...\n";
		}
	}

	string formData()
	{
		return "Friend data \n" + Person::formData() + "Birth date: " + birthDate + "\n_____________________________\n";

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