#include <iostream>
#include <cmath>
using namespace std;

int Myroot(double a, double b, double c, double &r1, double &r2)
{
	int d;
	d = pow(b, 2) - (4 * a * c);
	if (d < 0) 
	{
		return -1;
	}

	else if (d == 0)
	{
		r1 = -b / 2 * a;
		return 0;
	}
	
	else if (d > 0)
	{
		r1 = (- b + sqrt(d)) / 2 * a;
		r2 = (- b - sqrt(d)) / 2 * a;
		return 1;
	}
	
}


int main()
{
	double r1;
	double r2;
	//int res = Myroot(3, -4, 2, r1, r2); //No roots result
	//int res = Myroot(1, -4, -5, r1, r2); //Two roots result
	int res = Myroot(1, -6, 9, r1, r2); //One root result
	if (res == 1)
	{
		cout << "Equaton roots: x1 = " << r1 << ", x2 = " << r2 << endl;
	}
	else if (res == 0)
	{
		cout << "Equaton root = " << r1 << endl;
	}
	else
	{
		cout << "No equation roots found" << endl;
	}

}

