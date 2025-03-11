#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        int t = x - a[i].first;
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int sum = a[l].first + a[r].first;
            if (t == sum)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }

            if (sum < t)
                l++;
            else
                r--;
        }
        }
    cout << "IMPOSSIBLE\n";
    return 0;
}