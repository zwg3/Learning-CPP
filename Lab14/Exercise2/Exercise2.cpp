#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <array>

using namespace std;

template <class Container, class Delimiter>
void print(const Container& container, const Delimiter& delimiter) {
    auto i = container.begin();
    if (i != container.end()) {
        cout << *i;
        ++i;
    }
    for (; i != container.end(); ++i) 
    {
        cout << delimiter << *i;
    }

    cout << endl;
}


int main()
{
    vector<int> dataV = { 1, 2, 3, 1 };
    list<string> dataL = { "hello", "world", "!"};
    array <float, 3> dataA = { 5.0, 4.4, 3.2 };
    print(dataA, " & ");
    print(dataL, " & ");
    print(dataV, " & ");
}

