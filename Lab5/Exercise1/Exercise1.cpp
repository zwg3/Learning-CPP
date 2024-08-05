#include <iostream>
using namespace std;

void fillArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void sumAll(int arr[], const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += arr[i];
	}

	cout << "The sum of all elements: " << s << endl;
}

void findAvg(int arr[], const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += arr[i];
	}
	cout << "The average value of all elements: " << s/size << endl;
}

void negSum(int arr[], const int size)
{
	int negS = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negS += arr[i];
		}
	}
	cout << "The sum of all negative elements: " << negS << endl;
}

void posSum(int arr[], const int size)
{
	int posS = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			posS += arr[i];
		}
	}
	cout << "The sum of all positive elements: " << posS << endl;
}

void oddSum(int arr[], const int size)
{
	int oddS = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0)
		{
			oddS += arr[i];
		}
	}
	cout << "The sum of all odd-indexed elements: " << oddS << endl;
}

void evenSum(int arr[], const int size)
{
	int evenS = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			evenS += arr[i];
		}
	}
	cout << "The sum of all even-indexed elements: " << evenS << endl;
}


void sortArr(int arr[], const int size)
{
	int min = 0;
	int buf = 0;

	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			min = ((arr[j] < arr[i]) ? j : min);
		}
		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
}

void printSorted(int arr[], const int size)
{
	cout << "Sorted array values: " << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << '\t';
}

int main()
{
	const int n = 5;
	int mas[n];
	fillArr(mas, n);
	sumAll(mas, n);
	findAvg(mas, n);
	negSum(mas, n);
	posSum(mas, n);
	oddSum(mas, n);
	evenSum(mas, n);
	sortArr(mas, n);
	printSorted(mas, n);
}


