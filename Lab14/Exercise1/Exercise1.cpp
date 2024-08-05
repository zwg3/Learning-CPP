#include <iostream>

using namespace std;

template <class N>
double avg(N arr[], int size)
{
	double res = 0;
	for (int i = 0; i < size; i++)
	{
		res += arr[i];
	}
	return res / size;
}

int main()
{
	int a1[] = { 1, 2, 3, 4, 5 };
	int s1 = sizeof(a1) / sizeof(a1[0]);
	cout << avg(a1, s1) << "\n";
	long a2[] = { 1l, 2l, 3l, 4l, 5l };
	int s2 = sizeof(a2) / sizeof(a2[0]);
	cout << avg(a2, s2) << "\n";
	double a3[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	int s3 = sizeof(a3) / sizeof(a3[0]);
	cout << avg(a3, s3) << "\n";
	char a4[] = "hello";
	int s4 = sizeof(a4) / sizeof(a4[0])-1;
	cout << avg(a4, s4) << "\n";
}
