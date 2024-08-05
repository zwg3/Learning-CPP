#include <iostream>
#include <string>

using namespace std;

class Triangle
{
private:
	double a, b, c;
public:
	Triangle(double s1, double s2, double s3)
	{
		if (s1 >= (s2 + s3) || s2 >= (s1 + s3) || s3 >= (s1 + s2))
		{
			throw TriErr("The sum of any two edges will need to be larger than the third.");
		}
		else
		{
			a = s1;
			b = s2;
			c = s3;
		}

	}
	class TriErr
	{
	public:
		string errMsg;
		TriErr(string err)
		{
			errMsg = err;
		}
	};
	double findTriArea()
	{
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

int main()
{
	try
	{
		Triangle t(9, 6, 4);
		double res = t.findTriArea();
		cout << res << endl;
	}	
	catch (Triangle::TriErr& err)
	{
		cout << err.errMsg << endl;
	}
}
