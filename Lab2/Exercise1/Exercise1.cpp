#include <iostream>
using namespace std;

bool isPrime(int num)
{
    int i;
    bool res = true;

    if (num == 0 || num == 1) {
        res = false;
    }

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            res = false;
            break;
        }
    }
    return res;
}

int main()
{
    cout << "Welcome! This program will help you check if a number you enter is super prime\n";
    int number = 0;
    cout << "Enter a positive integer from 1 to 100: ";
    cin >> number;
    if (isPrime(number))
    {
        if (number == 3 || number == 5 || number == 11 || number == 17 || number == 31 || number == 41 || number == 59 || number == 67 || number == 83)
        {
            cout << number << " is a super prime number!";
        }
        else
        {
            cout << number << " is not a super prime number";
        }
    }
    else
    {
        cout << number << " is not a prime number!";
    }


}