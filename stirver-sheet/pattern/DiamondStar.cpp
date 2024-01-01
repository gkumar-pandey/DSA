#include <iostream>
using namespace std;

void printInvertedStarPyramid(int n)
{

    for (int r = 0; r < n; r++)
    {
        // space
        for (int i = 0; i < r; i++)
        {
            cout << " ";
        }
        // star
        for (int i = 0; i < (2 * (n - r) - 1); i++)
        {
            cout << "*";
        }
        // space
        for (int i = 0; i < r; i++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printStarPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        // space
        for (int i = 0; i < n - 1 - row; i++)
        {
            cout << " ";
        }
        // star
        for (int i = 0; i < 2 * row + 1; i++)
        {
            cout << "*";
        }
        // space
        for (int i = 0; i < n - 1 - row; i++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void diamondPatternPrint(int n)
{
    printStarPattern(n);
    printInvertedStarPyramid(n);
}

int main()
{
    int n;
    cin >> n;
    diamondPatternPrint(n);
    return 0;
}