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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<char, int> mp;
        int curr = 97;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cout << char(curr);
                mp[curr]++;
                curr++;
            }
            else
            {
                for (auto it : mp)
                {
                    if (it.second == a[i])
                    {
                        cout << char(it.first);
                        mp[it.first]++;
                        break;
                    }
                }
            }
        }
        cout << '\n';
    }

    return 0;
}