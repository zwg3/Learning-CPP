#pragma once
#include <string>
#include <vector>
#include "human.h"
#include <iomanip>

using namespace std;

class Student : public Human 
{
private:
	vector <int> scores;
public:
	Student(string lastName, string name, string secondName, vector<int> scores) : 
		Human(lastName, name, secondName)
		{
			this->scores = scores;
		}

	float getAvgScore()
	{
		unsigned int countScores = this->scores.size();
		unsigned int sumScores = 0;
		float avg_score;
		for (unsigned int i = 0; i < countScores; ++i)
		{
			sumScores += this->scores[i];
		}
		avg_score = (float)sumScores / (float)countScores;
		return avg_score;
	}

	string getData() override
	{
		Human::getData();
		string fullData = Human::getData();
		string avrg = to_string(getAvgScore()).substr(0, 3);		
		return "Student data:\nFull name: " + fullData + "Average score: " + avrg + "\n";
	}
};
