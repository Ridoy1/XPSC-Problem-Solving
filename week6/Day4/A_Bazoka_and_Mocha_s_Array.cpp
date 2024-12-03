#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long v[n + 10], i;
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        long long min1 = v[1], index = n + 1;
        vector<long long> v2;
        v2.push_back(v[1]);
        for (i = 2; i <= n; i++)
        {
            if (min1 <= v[i])
            {
                min1 = v[i];
                v2.push_back(min1);
            }
            else
            {
                index = i;
                break;
            }
        }
        vector<long long> ans;
        for (i = index; i <= n; i++)
        {
            ans.push_back(v[i]);
        }
        for (int i = 0; i < v2.size(); i++)
        {
            ans.push_back(v2[i]);
        }
        if (is_sorted(ans.begin(), ans.end()))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}