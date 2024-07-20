#include <iostream>

using namespace std;

int findMax(int arr[], int size)
{

    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {2, 3, 45, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxNum = findMax(arr, size);
    cout << "Max Number Of Array " << maxNum << endl;
    cout << "Min of Array " << findMin(arr, size) << endl;
    return 0;
}