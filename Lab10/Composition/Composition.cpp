#include <iostream>
#include "dot.h"
#include <vector>

using namespace std;

class Triangle
{
private:
    Dot a, b, c;
public:
    Triangle(Dot p1, Dot p2, Dot p3)
    {
        a = p1;
        b = p2;
        c = p3;
    }

    vector <double> findSides()
    {
        Dot d1(a);
        Dot d2(b);
        double sideA = d1.distanceTo(b);
        double sideB = d1.distanceTo(c);
        double sideC = d2.distanceTo(c);
        vector <double> res{ sideA , sideB, sideC };
        return res;
    }

    double findP()
    {
        vector <double> sides = findSides();
        double res = 0;
        for (int i = 0; i < sides.size(); i++)
        {
            res += sides[i];
        }
        return res;

    }

    double findArea()
    {
        vector <double> sides = findSides();
        double p = findP() / 2;
        return sqrt(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
    }

    void printSides()
    {
        cout << "Triangle sides values:\n";
        for (double i : findSides())
            cout << i << "\n";
    }

};

int main()
{
    Triangle t(Dot(15, 15), Dot(23, 30), Dot(50, 25));
    t.printSides();
    cout << "\nTriangle perimeter:\n" << t.findP() << "\n";
    cout << "Triangle area:\n" << t.findArea() << "\n";
}

