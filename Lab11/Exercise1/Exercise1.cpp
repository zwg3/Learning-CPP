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

    Time(float f)
    {
        hr = static_cast<int> (f / 3600);
        min = static_cast<int>((f - (hr * 3600)) / 60);
        sec = static_cast<int>(f - (hr * 3600) - (min * 60));
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

    Time operator+ (const Time& t)
    {
        hr += t.hr;
        min += t.min;
        sec += t.sec;
        trackTime();
        return Time(hr, min, sec);
    }

    Time operator- (const Time& t)
    {
        hr -= t.hr;
        min -= t.min;
        sec -= t.sec;
        trackTime();
        return Time(abs(hr), abs(min), abs(sec));
    }


    operator float() const
    {
        int totalSeconds = sec + (min * 60) + (hr * 3600);
        return static_cast<float>(totalSeconds);
    }

    Time operator+ (float& num)
    {
        Time t(num);
        hr += t.hr;
        min += t.min;
        sec += t.sec;
        trackTime();
        return Time(abs(hr), abs(min), abs(sec));
    }

    bool operator== (const Time& t) const
    {
        return (hr == t.hr && min == t.min && sec == t.sec);
    }

    bool operator< (const Time& t) const
    {
        if (hr < t.hr)
        {
            return true;
        }
        else if (min < t.min)
        {
            return true;
        }
        else if (sec < t.sec)
        {
            return true;
        }
        return false;
    }

    bool operator> (const Time& t) const
    {
        if (hr > t.hr)
        {
            return true;
        }
        else if (min > t.min)
        {
            return true;
        }
        else if (sec > t.sec)
        {
            return true;
        }
        return false;
    }

};

int main()
{
    float f = 10000.00;
    Time t1(5, 0, 0);
    Time t2(3, 0, 55);
    bool res1 = t1 > t2;
    cout << res1 << "\n";
    bool res2 = t1 < t2;
    cout << res2 << "\n";
    bool res3 = t1 == t2;
    cout << res3 << "\n";
    Time ff(f);
    ff.printVals();
    Time t3 = f + t1;
    t3.printVals();
    t3 = t1 + f;
    t3.printVals();
    Time t4 = t1 + t2;
    t4.printVals();
    Time t5 = t1 - t2;
    t5.printVals();

}


