#include <iostream>
using namespace std;

void trSearch(int arr[], const int size, int target)
{
    int res = 0;
    bool inArr = false;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            inArr = true;
            res = i;
            if (res == 0) 
            {
                break;
            }
            else 
            {
                swap(arr[i], arr[i - 1]);
            }
        }
    }
    if (inArr)
    {
        cout << "Number " << target << " was located at index " << res << endl;
    }
    else
    {
        cout << "Number " << target << " not found" << endl;
    }
}


int main()
{
    const int n = 10;
    int arr[n] = {1,2,4,8,1,22,0,1,2,5};  //test data
    int target = 22;
    trSearch(arr, n, target);
}

