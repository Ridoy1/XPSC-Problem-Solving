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
        sort(a.begin(), a.end());
        long long final_sum = 0;

        while (a.size() > 1)
        {
            int sum = a[0] + a[1];
            final_sum += sum;
            a.erase(a.begin());
            a.erase(a.begin());
            a.push_back(sum);
            sort(a.begin(), a.end());
        }

        cout << final_sum << '\n';
    }

    return 0;
}