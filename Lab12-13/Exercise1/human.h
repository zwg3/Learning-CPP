#include <string>
#include <sstream>
#pragma once

using namespace std;

class Human
{
private:
	string name;
	string lastName;
	string secondName;
public:
	Human(string lastName, string name, string secondName)
	{
		this->lastName = lastName;
		this->name = name;
		this->secondName = secondName;
	}

	virtual string getData()
	{
		ostringstream fullName;
		fullName 
			<<this->lastName << " "
			<< this->name << " "
			<< this->secondName << "\n";
		return fullName.str();
	}
};
