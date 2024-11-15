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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        long long total_energy = 0;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            long long energy = min((long long)a[i], (long long)b[j] * h);
            total_energy += energy;
            i++;
            j++;
        }
        cout << total_energy << '\n';
    }

    return 0;
}