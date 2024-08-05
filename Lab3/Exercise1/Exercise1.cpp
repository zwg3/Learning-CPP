#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool hasNoChars(string num)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (isalpha(num[i])) 
        {
            return false;
        }
    }
    return true;
}


bool isValidLen(string num)
{
    if (num.length() < 9 || num.length() > 9)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isValidLen(int num)
{
    string sNum = to_string(num);
    if (sNum.length() < 2 || sNum.length() > 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool hasTripplicates(string num)
{
    regex r(R"((\s?\d\s?)(\s?\1){2,})");
    smatch m;
    if (regex_search(num, m, r))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isValidCtrNum(string nineDigits, int ctrNum) 
{
    string reversedNum(nineDigits.rbegin(), nineDigits.rend());
    int validCtrNum = 0;
    for (int i = 0; i < reversedNum.length(); i++)
    {
        validCtrNum += int(reversedNum[i] - '0') * (i + 1);
    }

    if (validCtrNum < 100)
    {
    }
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
        return true;
    }
    else
    {
        return false;
    }
}

bool validateSnils(string num, int ctrNum)
{
    if (isValidLen(num) && isValidLen(ctrNum))
    {
    }
    else
    {
        return false;
    }
    if (hasTripplicates(num))
    {
        return false;
    }
    else
    {
    }
    if (isValidCtrNum(num, ctrNum))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Welcome! This program checks the validity of the SNILS number you enter\n";
    cout << "Please enter the first nine digits\n";
    string num;
    getline(cin, num);
    num.erase(remove(num.begin(), num.end(), ' '), num.end());
    num.erase(remove(num.begin(), num.end(), '-'), num.end());
    if (hasNoChars(num))
    {
    }
    else
    {
        cout << "Invalid input, please use numberic chracters only";
        exit(0);
    }
    cout << "Please enter the control number\n";
    int ctrNum = 0;
    cin >> ctrNum;
    if (validateSnils(num, ctrNum))
    {
        cout << "Your SNILS number is valid!";
    }
    else
    {
        cout << "Your SNILS number is invalid!";
    }
}


