#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
    float hr, min, sec;

public:
    Time() : hr(0), min(0), sec(0) {};

    Time(float h, float m, float s)
    {
        if (h < 0 || m < 0 || s < 0)
        {
            throw TimeErr("Invalid time value. Please use positive numbers only!");
        }
        else if (floor(h) != h || floor(m) != m || floor(s) != s)
        {
            throw TimeErr("Invalid time value. Please use integers only!");
        }
        hr = h;
        min = m;
        sec = s;
        trackTime();
    }

    void trackTime()
    {
        while (sec >= 60)
        {
            sec -= 60;
            min += 1;
        }
        while (min >= 60)
        {
            min -= 60;
            hr += 1;
        }
    }

    void printVals() const
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    void addTime(Time& t)
    {
        hr += t.hr;
        min += t.min;
        sec += t.sec;
        trackTime();
    }

    void setTime(Time& t)
    {
        hr = t.hr;
        min = t.min;
        sec = t.sec;
    }

    class TimeErr
    {
    public:
        string errMsg;
        TimeErr(string err)
        {
            errMsg = err;
        }
    };
};

int main()
{
    try
    {
        Time t1(2, 60, 20);
        Time t2(-1, 0, 0);
        Time t3;        
        t1.addTime(t2);
        t3.setTime(t1);
        t3.printVals();
    }
    catch (Time::TimeErr &err)
    {
        cout << err.errMsg << endl;
    }   
}

