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
        int d, e;
        d = a + b;
        e = a - b;

        if (d == c)
        {
            cout << '+' << '\n';
        }
        else
        {
            cout << '-' << '\n';
        }
    }

    return 0;
}