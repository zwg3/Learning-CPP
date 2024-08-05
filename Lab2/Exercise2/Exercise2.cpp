#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    cout << "Welcome! This program checks the validity of the SNILS number you enter\n";
    string num;
    cout << "Please enter the first nine digits\n";
    cin >> num;
    bool hasTripplicates = false;
    if (num.length() < 9 || num.length() > 9)
    {
        cout << "Invalid input! The SNILS number must contain 9 digits\n";
    }
    regex r(R"((\s?\d\s?)(\s?\1){2,})");
    smatch m;
    int ctrNum = 0;
    cout << "Please enter the control number\n";
    cin >> ctrNum;

    if (regex_search(num, m, r))
    {
        cout << "Invalid input! The SNILS number must not contain more than 2 repeating digits in a row\n";
        exit(0);
    }
    string reversedNum(num.rbegin(), num.rend());
    int validCtrNum = 0;
    for (int i = 0; i < reversedNum.length(); i++)
    {
        validCtrNum += int(reversedNum[i] - '0') * (i + 1);
    }    

    if (validCtrNum < 100)
    {}
    else if (validCtrNum == 100 || validCtrNum == 101)
    {
        validCtrNum = 00;
    }
    else if (validCtrNum > 101)
    {
        int temp = validCtrNum % 101;
        if (temp < 100)
        {
            validCtrNum = temp;
        }
        else if (temp == 100)
        {
            validCtrNum = 00;
        }
    }

    if (ctrNum == validCtrNum)
    {
        cout << "The SNILS data you have entered is valid!";
    }
    else
    {
        cout << "The control number you have entered is invalid!\n"
             << "The valid control number would be " << validCtrNum;
    }
}

