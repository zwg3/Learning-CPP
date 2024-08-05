#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string input;
    fstream file;
    file.open("example.txt", ios::out | ios::binary);
    if (!file) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    cout << "Please write your poem line by line. Type \"exit\" to quit.\n";
    while (true)
    {        
        getline(cin, input);
        if (input == "exit")
        {
            break;
        }  
        file << input << endl;
    }

    file.close();
    file.open("example.txt", ios::in | ios::binary);
    if (!file) {
        cout << "Файл открыть невозможно";
        return 1;
    }

    string line;
    cout << "You have written: \n";
    while (getline(file, line))
    {
        cout << line << endl;
    }    
    file.close();
}
