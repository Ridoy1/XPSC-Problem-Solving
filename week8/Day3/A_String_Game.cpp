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
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int mn = min(one, zero);
        if (mn % 2 != 0)
        {
            cout << "Zlatan" << '\n';
        }
        else
        {
            cout << "Ramos" << '\n';
        }
    }

    return 0;
}