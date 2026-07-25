#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 12, 54, 77};
    sort(arr, arr + 7);
    //sort(arr, arr + 7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}