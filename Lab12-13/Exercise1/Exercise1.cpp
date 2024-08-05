#include <iostream>
#include "student.h"
#include "teacher.h"
#include "human.h"
#include <string>

using namespace std;

int main(){

    Human* h = new Human{ "Ivan", "Vanya", "Ivanov" };
    cout << h->getData();
    vector <int> score{ 5,4,5,4 };
    h = new Student{ "Ivan", "Vanya", "Ivanov", score};
    cout << h->getData();
    unsigned int wrkHrs = 20;
    h = new Teacher{ "Ivan", "Vanya", "Ivanov" , wrkHrs};
    cout << h->getData();
    delete h;

}


