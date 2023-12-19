#include <iostream>

using namespace std;

void printForest(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    std::cin >> n;
    printForest(n);
    return 0;
}

// Problem 
/*

Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *

*/