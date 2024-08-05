#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

vector<string> getLocalDate()
{	
	time_t now = time(0);
	struct tm localTime;
	localtime_s(&localTime, &now);
	string currY = to_string(1900 + localTime.tm_year);
	string currM = to_string(1 + localTime.tm_mon);
	string currD = to_string(localTime.tm_mday);
	vector<string> res { currM, currD, currY };
	return res;
}

