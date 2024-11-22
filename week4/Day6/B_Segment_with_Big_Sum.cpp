#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0, ans = n + 1;
    long long int sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum >= k)
        {
            int p = 0;
            while (sum >= k)
            {
                sum -= a[l];
                if (sum <= k)
                    p = 1;
                l++;
            }
            if (p == 1)
                ans = min(ans, r - l + 2);
            else
                ans = max(ans, r - l + 1);
        }

        r++;
    }
    if (ans > n)
        ans = -1;
    cout << ans << '\n';

    return 0;
}