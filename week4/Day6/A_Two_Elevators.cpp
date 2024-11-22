#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int r1 = abs(a - 1);
        int r2 = abs(c - b) + c - 1;

        if (r1 == r2)
        {
            cout << 3 << '\n';
        }
        else if (r1 < r2)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
    }

    return 0;
}