#include <iostream>
using namespace std;

void findMostFrequent(int arr[], int size)
{
    int countFreq = 0;
    int mostFreqNum;

    for (int i = 0; i < size; i++)
    {
        int currEleFreq = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                currEleFreq++;
            }
        }

        if (currEleFreq > countFreq)
        {
            countFreq = currEleFreq;
            mostFreqNum = arr[i];
        }
    }

    cout << "Most Frequent Element " << mostFreqNum << endl;
}

int main()
{
    int arr[] = {10, 20, 10, 20, 30, 20, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMostFrequent(arr, size);
    return 0;
}