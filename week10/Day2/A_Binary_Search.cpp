#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;
    vector<long long> a(n), b(q);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        long long l = 0, r = n - 1, mid, x;
        cin >> x;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x == a[mid])
            {
                flag = true;
                break;
            }
            else if (x < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}