#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum_o = 0;
        int sum_e = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i & 1)
            {
                sum_o += x;
            }
            else
            {
                sum_e += x;
            }
        }
        int even = n / 2;
        int odd = n - (n / 2);
        if ((sum_o % odd) != 0 || (sum_e % even) != 0)
        {
            cout << "NO" << '\n';
            return 0;
        }
        if ((sum_e / even) == (sum_o / odd))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}