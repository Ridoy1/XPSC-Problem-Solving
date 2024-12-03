#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        long long ans = (y + 1) / 2, xx = 0;
        if (y % 2 == 0)
        {
            xx = (y / 2) * 7;
        }
        else
        {
            xx = (y / 2) * 7 + 11;
        }
        if (x <= xx)
        {
            cout << ans << endl;
        }
        else
        {
            long long b = x - xx;
            cout << ans + (b + 14) / 15 << endl;
        }
    }

    return 0;
}