#pragma once
#include <string>
#include "human.h"

class Teacher : public Human
{
private:
	unsigned int workTime;
public:
	Teacher(string lastName, string name, string secondName, unsigned int workTime) : Human (lastName, name, secondName)
	{
		this->workTime = workTime;
	}

	unsigned int getWorkTime()
	{
		return this->workTime;
	}

	string getData() override
	{
		Human::getData();
		string fullData = Human::getData();
		string wrk = to_string(getWorkTime());
		return  "Teacher data:\nFull name: " + fullData + "Alloted work time: " + wrk + "\n";
	}
};