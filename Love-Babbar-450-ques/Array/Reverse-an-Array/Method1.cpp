#include <bits/stdc++.h>
//! Method 1 -> with the help of create new array
using namespace std;

int main()
{
    int arr[] = {3, 5, 8, 90, 23, 45};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);

    int reverseArr[sizeOfArr];

    for (int i = 0; i < sizeOfArr; i++)
    {
        reverseArr[i] = arr[sizeOfArr - 1 - i];
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << reverseArr[i] << " ";
    }

    return 0;
}