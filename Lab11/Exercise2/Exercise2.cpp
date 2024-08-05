#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class Point
{
private:
    double x, y;

public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    double distToCenter()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    bool operator< (Point& p) 
    {
        if (distToCenter() < p.distToCenter())
        {
            return true;
        }
        return false;
    }

    friend ostream& operator<< (ostream& out, const Point& p)
    {
        out << p.x << ", " << p.y << "\n";
        return out;
    }  
};


int main()
{
    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    sort(v.begin(), v.end());

    for (auto& point : v)
        cout << point << '\n';
    return 0;
}

