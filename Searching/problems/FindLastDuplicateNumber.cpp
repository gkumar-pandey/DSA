#include <iostream>
using namespace std;

void lastDuplicateNumber(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << "Last Index " << i << endl;
            cout << "Last Duplicate Item " << arr[i] << endl;
            return;
        }
    }

    cout << "No Duplicate Item Found." << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    lastDuplicateNumber(arr, size);

    return 0;
}