#include <iostream>
using namespace std;

class Time 
{
private:
    int hr, min, sec;

public:
    Time() : hr(0), min(0), sec(0) {};

    Time(int h, int m, int s)
    {
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

    void addTime(Time &t)
    {
        hr += t.hr;
        min += t.min;
        sec += t.sec;
        trackTime();        
    }

    void setTime(Time &t)
    {
        hr = t.hr;
        min = t.min;
        sec = t.sec;
    }
};

int main()
{
    Time t1 (2,0,180);
    Time t2 (0, 0, 0);   
    Time t3;
    t1.addTime(t2);
    t3.setTime(t1);
    t3.printVals();
}


