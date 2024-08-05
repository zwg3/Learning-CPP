#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Writer
{
private:
	fstream f;
public:
	Writer() : f() {};

	void writeAll(vector <string> &data, string &fName)
	{
		f.open(fName + ".txt", ios::out | ios::binary);
		for (int i = 0; i < data.size(); i++)
		{
			f << data[i];
		}
		f.close();
	}
};