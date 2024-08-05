#include <iostream>

using namespace std;

double findEqualTriArea(double side)
{
	return ((pow(side, 2) * sqrt(3)) / 4);
}

double findTriArea(double sideA, double sideB, double sideC )
{
	double p = (sideA + sideB + sideC) / 2;
	return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));}


int main()
{
	cout << "Welcome!\nThis program calculates the area value of a triangle.\nTo calculate the area for an equal-sized triangle enter \"1\"\n"
		<< "To calculate the area for an unequal-sized triangle enter \"2\"\n";
	int usrInput;
	cin >> usrInput;
	if (usrInput == 1)
	{
		double side;
		cout << "Please enter the value of a triangle side:\n";
		cin >> side;
		cout << "The triangle area is " << findEqualTriArea(side) << endl;
	}
	else if (usrInput == 2)
	{
		double sideA;
		double sideB;
		double sideC;
		cout << "Please enter values of triangle sides:\n";
		cin >> sideA;
		cin >> sideB;
		cin >> sideC;
		cout << "The triangle area is " << findTriArea(sideA, sideB, sideC) << endl;
	}
}

