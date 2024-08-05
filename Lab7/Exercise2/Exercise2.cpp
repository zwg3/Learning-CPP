#include <iostream>

using namespace std;

struct MyRoot
{
	double root1 = 0, root2 = 0;
};

MyRoot findRoot(double a, double b, double c)
{
	MyRoot res;
	int d;
	d = pow(b, 2) - (4 * a * c);
	if (d < 0)
	{	
		res.root1 = 0;
		res.root2 = 0;
	}

	else if (d == 0)
	{
		res.root1 = -b / 2 * a;
	}

	else if (d > 0)
	{
		res.root1 = (-b + sqrt(d)) / 2 * a;
		res.root2 = (-b - sqrt(d)) / 2 * a;
	}
	return res;
}

int main()
{
	MyRoot eq = findRoot(1, -4, -5);//Two roots result
	cout << eq.root1 << endl << eq.root2 << endl;
	//MyRoot eq = findRoot(1, -6, 9); //One root result
	//cout << eq.root1 << endl << eq.root2 << endl;
	//MyRoot eq = findRoot(3, -4, 2); //No roots result
	//cout << eq.root1 << endl << eq.root2 << endl;
}


