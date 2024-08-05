#include <iostream>
#include <string>
#include <tuple>

using namespace std;
using Tuple = tuple<double, double, int>;


Tuple findRoot(double a, double b, double c)
{	
	int d;
	d = pow(b, 2) - (4 * a * c);
	if (d < 0)
	{
		return make_tuple(0, 0, -1);
	}

	else if (d == 0)
	{
		return make_tuple(-b / 2 * a, 0, 1);
	}

	else if (d > 0)
	{
		return make_tuple((-b + sqrt(d)) / 2 * a, (-b - sqrt(d)) / 2 * a, 2);
	}
}

int main()
{
	Tuple eq = findRoot(1, -4, -5);
	switch (get<2>(eq))
	{
		case -1:
			cout << "No roots found\n";
			break;
		case 1:
			cout << "One root found: \n" << get<0>(eq) << endl;
			break;
		case 2:
			cout << "Two roots found: \n" << get<0>(eq) << endl << get<1>(eq) << endl;
			break;

	}
	//(1, -6, 9); //One root result
	//(1, -4, -5); //Two roots result
	//(3, -4, 2); //No roots result
}