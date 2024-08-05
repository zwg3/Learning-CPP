#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int addMult(char* flag, int a, int b) 
{
    int res = 0;
    if (strncmp(flag, "-a", 2) == 0)
    {
        res = a + b;
    }
    else if (strncmp(flag, "-m", 2) == 0)
    {
        res = a * b;
    }
    return res;
}

int main(int argc, char* argv[])
{
    if (argc < 4)
    {
        cout << "Please specify 3 arguments: operation flag (-a for addition or -m for multiplication) and 2 operand numbers.";
        exit(0);
    }
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0)
    {
        cout << "Please set the correct operation flag (-a for addition or -m for multiplication).";
        exit(0);
    }
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);    
    int res = addMult(argv[1], a, b);
    cout << "Calculation result: " << res << endl;
}

