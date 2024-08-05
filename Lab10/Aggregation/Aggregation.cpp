#include <iostream>
#include "dot.h"
#include <vector>

using namespace std;

class Triangle
{
private:
    Dot* a;
    Dot* b;
    Dot* c;
public:
    Triangle(Dot* a, Dot* b, Dot* c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }


    vector <double> findSides()
    {
        double sideA = a->distanceTo(*b);
        double sideB = b->distanceTo(*c);
        double sideC = c->distanceTo(*a);
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
    Dot a(15, 15);
    Dot b(23, 30);
    Dot c(50, 25);
    Triangle t(&a, &b, &c);
    t.printSides();
    cout << "\nTriangle perimeter:\n" << t.findP() << "\n";
    cout << "Triangle area:\n" << t.findArea() << "\n";
}

