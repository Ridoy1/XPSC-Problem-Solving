#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int total_area = 1000;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int day = a[i];
            int p = i + 1;
            if (mp.find(day) == mp.end())
            {
                mp[day] = p;
            }
            else
            {
                mp[day] = max(mp[day], p);
            }
        }
        int total = 0;
        for (auto v : mp)
        {
            total += v.second;
        }
        cout << total << endl;
    }

    return 0;
}