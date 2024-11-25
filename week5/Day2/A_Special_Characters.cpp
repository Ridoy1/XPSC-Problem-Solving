#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            cout << "NO\n";
        }
        else
        {
            int d = n / 2;
            cout << "YES\n";
            for (int i = 1; i <= d; i++)
            {
                if (i % 2)
                    cout << "AA";
                else
                    cout << "BB";
            }
            cout << '\n';
        }
    }

    return 0;
}