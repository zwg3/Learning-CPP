#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome!\nThis program will calculate the coin change you can get from the amount you enter\nPlease enter the disired amount: \n";
    double amount = 0;
    cin >> amount;
    int oneRub = 0;
    int twoRub = 0;
    int fiveRub = 0;
    int tenRub = 0;    

    while (amount > 0)
    {
        if (amount - 10 >= 0)
        {
            amount -= 10;
            tenRub += 1;
        }
        else if (amount - 5 >= 0)
        {
            amount -= 5;
            fiveRub += 1;
        }
        else if (amount - 2 >= 0)
        {
            amount -= 2;
            twoRub += 1;
        }
        else if (amount - 1 >= 0)
        {
            amount -= 1;
            oneRub += 1;
        }
    }
    cout
        << "Result: \n"
        << "ten rubles needed: " << tenRub << endl
        << "five rubles needed: " << fiveRub << endl
        << "two rubles needed: " << twoRub << endl
        << "one ruble needed: " << oneRub << endl;
}
