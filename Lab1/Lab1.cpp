#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5; 
    cout << "Welcome!" << endl << "This program calculates area of a pentahedron located on a Cartesian plane." << endl;
    cout << "Please enter the first vertice coordinates" << endl;
    cin >> x1;
    cin >> y1;
    cout << "Please enter the second vertice coordinates" << endl;
    cin >> x2;
    cin >> y2;
    cout << "Please enter the third vertice coordinates" << endl;
    cin >> x3;
    cin >> y3;
    cout << "Please enter the fourth vertice coordinates" << endl;
    cin >> x4;
    cin >> y4;
    cout << "Please enter the fifth vertice coordinates" << endl;
    cin >> x5;
    cin >> y5;
    int result = abs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 -  x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2);
    cout << "The area value is " << result;

}

