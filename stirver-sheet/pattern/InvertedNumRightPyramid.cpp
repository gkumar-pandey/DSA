#include <iostream>

using namespace std;

void printInvertedNumRightPyramid(int n)
{
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printInvertedNumRightPyramid(n);
    return 0;
}