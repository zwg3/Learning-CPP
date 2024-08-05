#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Friend.h"
#include "Writer.h"

using namespace std;

class Engine
{
private:
	Student s;
	Teacher t;
	Friend f;
	Writer w;
	vector <string> data;
public:
	Engine() : s(), t(), f(), w() {};

	void addData(char item)
	{
		switch (item)
		{
		case 'f':
			data.push_back(f.formData());
			break;
		case 's':
			data.push_back(s.formData());
			break;
		case 't':
			data.push_back(t.formData());
			break;
		default:
			break;
		};
	}

	void writeData(string &fName)
	{		
		w.writeAll(data, fName);
	}

	void promptInput()
	{
		while (true)
		{
			cout << "To input information about a student enter \'s\'\n"
				<< "To input information about a teacher enter \'t\'\n"
				<< "To input information about a friend enter \'f\'\n";
			char choice = ' ';
			cin >> choice;
			string name;
			string lastName;
			string secondName;
			string phoneNum;
			string birthDate;
			int workHrs;
			int salary;
			string mainSubject;
			switch (choice)
			{
			case 's':
				cout << "Enter student's name: ";
				cin >> name;
				cout << "Enter student's last name: ";
				cin >> lastName;
				cout << "Enter student's second name: ";
				cin >> secondName;
				cout << "Enter student's phone number: ";
				cin >> phoneNum;
				s.setName(name);
				s.setLName(lastName);
				s.setSName(secondName);
				s.setPNum(phoneNum);
				s.inputGrades();
				data.push_back(s.formData());
				break;
			case 'f':
				cout << "Enter friend's name: ";
				cin >> name;
				cout << "Enter friend's last name: ";
				cin >> lastName;
				cout << "Enter friend's second name: ";
				cin >> secondName;
				cout << "Enter friend's phone number: ";
				cin >> phoneNum;
				cout << "Enter friend's birth date (dd/mm/yyyy): ";
				cin >> birthDate;
				f.setName(name);
				f.setLName(lastName);
				f.setSName(secondName);
				f.setPNum(phoneNum);
				f.setBdate(birthDate);		
				cout << "Check if today is your friend's birthday? (y/n)";
				cin >> choice;
				if (choice == 'y')
				{
					f.printBirthDay();
				}

				data.push_back(f.formData());
				break;
			case 't':
				cout << "Enter teacher's name: ";
				cin >> name;
				cout << "Enter teacher's last name: ";
				cin >> lastName;
				cout << "Enter teacher's second name: ";
				cin >> secondName;
				cout << "Enter teacher's phone number: ";
				cin >> phoneNum;
				cout << "Enter teacher's main subject: ";
				cin >> mainSubject;
				cout << "Enter teacher's working hours: ";
				cin >> workHrs;
				cout << "Enter teacher's salary: ";
				cin >> salary;
				t.setName(name);
				t.setLName(lastName);
				t.setSName(secondName);
				t.setPNum(phoneNum);
				t.setSubject(mainSubject);
				t.setWrkHrs(workHrs);
				t.setSal(salary);
				data.push_back(t.formData());
				break;
			default:
				break;
			};
			cout << "Continue adding people? (y/n)\n";
			cin >> choice;
			if (choice == 'n')
			{
				break;
			}
		}
	}

	void promptWrite()
	{
		char input;
		cout << "Would you like to save the data you have entered to file? (y/n)";
		cin >> input;
		if (input == 'y')
		{
			string fName;
			cout << "Please specify the file name: ";
			cin >> fName;
			writeData(fName);
		}
	}

	void greet()
	{
		cout << "Welcome!\n";
	}

	void run()
	{			
		greet();
		promptInput();
		promptWrite();
	}
};