#include <iostream>

using namespace std;

struct Time
{
	int hours, minutes, seconds;
};

Time inputTime()
{
	Time t;
	cin >> t.hours >> t.minutes >> t.seconds;
	cout << endl;
	if (t.hours > 24 || t.hours < 0)
	{
		cout << "Incorrect hours value, please retry using the 24 hrs format" << endl << "Amend hours value: ";
		cin >> t.hours;
	}
	if (t.minutes > 60 || t.minutes < 0)
	{
		cout << "Incorrect minutes value, the value cannot exceed \'60\' or be lower than \'0\'. Please retry input" << endl << "Amend minutes value: ";
		cin >> t.minutes;
	}
	if (t.seconds > 60 || t.seconds < 0)
	{
		cout << "Incorrect seconds value, the value cannot exceed \'60\' or be lower than \'0\'. Please retry input" << endl << "Amend seconds value: ";
		cin >> t.seconds;
	}
	return t;
}

int getSeconds(Time t)
{
	int sec = 0;
	sec += t.seconds;
	sec += t.minutes * 60;
	sec += t.hours * 3600;
	return sec;
}


void  trackTime(Time &t)
{
	if (t.seconds < 0)
	{
		while (t.seconds < 0)
		{
			t.seconds += 60;
			t.minutes -= 1;
		}
	}
	if (t.minutes < 0)
	{
		while (t.minutes < 0)
		{
			t.minutes += 60;
			t.hours -= 1;
		}
	}
	if (t.seconds >= 60)
	{
		while (t.seconds >= 60)
		{
			t.seconds -= 60;
			t.minutes ++;
		}
	}
	if (t.minutes >= 60)
	{
		while (t.minutes >= 60)
		{
			t.minutes -= 60;
			t.hours++;
		}
	}

}

Time subtractT(const Time &t1, const Time &t2)
{
	Time res;
	res.hours = t1.hours - t2.hours;
	res.minutes = t1.minutes - t2.minutes;
	res.seconds = t1.seconds - t2.seconds;
	trackTime(res);
	return res;
}

Time addT(const Time &t1, const Time &t2)
{
	Time res;
	res.hours = t1.hours + t2.hours;
	res.minutes = t1.minutes + t2.minutes;
	res.seconds = t1.seconds + t2.seconds;
	trackTime(res);
	return res;
}


void printTime(const Time &t)
{
	cout << "Hours: " << t.hours << endl << "Minutes: " << t.minutes << endl << "Seconds: " << t.seconds << endl << endl;
}

void printSeconds(const Time &t)
{
	cout << "This amounts to " << getSeconds(t) << " seconds";
}

int main()
{	
	cout << "Please enter time values for the first period (hours, minutes, seconds): \n";
	Time t1 = inputTime();
	cout << "Please enter time values for the second period (hours, minutes, seconds): \n";
	Time t2 = inputTime();
	cout << "Resulted values: \n";
	cout << "Period 1: \n---------------\n";
	printTime(t1);
	cout << "Period 2: \n---------------\n";
	printTime(t2);
	cout << "After subtracting: "<< endl;
	printTime(subtractT(t1, t2));
	cout << "After adding: " << endl;
	printTime(addT(t1, t2));
}

