#include <iostream>
#include <cmath>
using namespace std;

double cubeRt1(float a)
{
	return pow(a, 1.0/ 3);
}

double cubeRt2(float a )
{
    float y, y1;
    y = a;
    do {
        y1 = y;
        y = 0.5 * (y + 3 * a / (2 * y * y + a / y));
    } while (abs(y - y1) > 1 / 100000);
    return y;    
}

int main()
{
    cout << cubeRt1(27) << endl;
    cout << cubeRt2(64) << endl;
}

