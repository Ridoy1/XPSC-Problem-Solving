#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mp[a[i] % 3]++;
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if ((sum % 3 == 2) || (sum % 3 == 1 && mp[1] > 0))
    {
        cout << 1 << endl;
    }
    else
        cout << 2 << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}