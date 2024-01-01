#include <iostream>

using namespace std;

void printInvertedRightPyramid(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= row; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printInvertedRightPyramid(n);
    return 0;
}

/*
Pattern-5: Inverted Right Pyramid

Input Format: N = 3
Result:
* * *
* *
*

Input Format: N = 6
Result:
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/