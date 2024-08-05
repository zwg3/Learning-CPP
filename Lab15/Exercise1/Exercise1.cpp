#include <iostream>
#include <string>
#include <map>

using namespace std;

struct StudentGrade
{
    string name;
    char score;
};

int main()
{
    StudentGrade s1{ "Nick", '4' };
    map <string, StudentGrade> studScores;
    studScores["Student 1"] = s1;
    cout << studScores["Student 1"].name;
}

