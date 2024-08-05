#include <iostream>
using namespace std;

int sumSeries(int n)
{
    if (n == 1)
    {
        return 5;
    }
    else
    {
        return 5 * n + sumSeries(n - 1);
    }
}

int main()
{    
    cout << "Welcome!\nEnter a positive integer: \n";
    int num;
    cin >> num;
    if (num > 0)
        cout << "Sum of the series is: " << sumSeries(num);
    else
        cout << "Input should be a positive integer.";
}


