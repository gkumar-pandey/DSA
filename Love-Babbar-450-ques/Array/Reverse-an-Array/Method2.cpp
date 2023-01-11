#include <bits/stdc++.h>
using namespace std;
//! solution without creating new array

void reverse(int arr[], int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
int main()
{
    int a[] = {3, 4, 8, 9, 29, 10};
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}