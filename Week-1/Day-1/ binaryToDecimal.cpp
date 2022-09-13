//? convert binary number into decimal
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0, ans = 0;
    int n;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    cout << ans << endl;
    return 0;
}