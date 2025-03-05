#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i]);
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}