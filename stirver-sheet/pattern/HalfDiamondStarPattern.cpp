#include <iostream>

using namespace std;

void printHalfDiamondStarPattern(int n)
{
    for (int r = 1; r <= 2 * n - 1; r++)
    {
        int star = r;
        if (r > n)
        {
            star = 2 * n - r;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printHalfDiamondStarPattern(n);

    return 0;
}