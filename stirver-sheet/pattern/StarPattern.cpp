#include <iostream>
using namespace std;

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

int main()
{
    int n;
    cin >> n;
    printStarPattern(n);
    return 0;
}

/*

Input Format: N = 3
Result:
  *
 ***
*****
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********
*/