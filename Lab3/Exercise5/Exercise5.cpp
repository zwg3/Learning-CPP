#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    if (n == 0) {
        return "0";
    }
    else if (n == 1) {
        return "1";
    }
    else {
        return toBinary(n / 2) + (n % 2 == 0 ? "0" : "1");
    }
}

int main() {    
    cout << "Welcome! This program converts decimal integers into binary.\nPlease enter an integer: \n";
    int num;
    cin >> num;
    string binary = toBinary(num);
    cout << "Result: " << binary << std::endl;
    return 0;
}

