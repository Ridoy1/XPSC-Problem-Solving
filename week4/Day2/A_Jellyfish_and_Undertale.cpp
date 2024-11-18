#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long total = b;
        for (int i = 0; i < n; i++)
        {
            total += min(1LL + arr[i], a * 1LL) - 1;
        }
        cout << total << '\n';
    }

    return 0;
}