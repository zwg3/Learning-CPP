#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;	
	string lastName;
	string secondName;
	string phoneNum;
public:
	Person() : name(), lastName(), secondName(), phoneNum() {};
	Person(string name, string lastName, string secondName, string phoneNum)
	{
		this->name = name;
		this->lastName = lastName;
		this->secondName = secondName;
		this->phoneNum = phoneNum;
	}

	string virtual getName() = 0
	{
		return name;
	}
	string virtual getLName() = 0
	{
		return lastName;
	}
	string virtual getSName() = 0
	{
		return secondName;
	}
	string virtual getPNum() = 0
	{
		return phoneNum;
	}

	void virtual setName(string name)
	{
		this->name = name;
	}
	void virtual setLName(string lName)
	{
		this->lastName = lName;
	}
	void virtual setSName(string sName)
	{
		this->secondName = sName;
	}
	void virtual setPNum(string pNum)
	{
		this->phoneNum = pNum;
	}

	string virtual formData()
	{
		return "Name: " + name + "\n" + "Last name : " + lastName + "\nSecond name : " + secondName + "\nPhone number: " + phoneNum + "\n";
	}
};
