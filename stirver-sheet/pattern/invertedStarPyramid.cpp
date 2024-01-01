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

int main()
{
    int n;
    cin >> n;
    printInvertedStarPyramid(n);

    return 0;
}

/*
Pattern-8

Input Format: N = 3
Result:
*****
 ***
  *
Input Format: N = 6
Result:
***********
 *********
  *******
   *****
    ***
     *
*/