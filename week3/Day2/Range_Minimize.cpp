#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int p1 = v[n - 1] - v[2];
        int p2 = v[n - 3] - v[0];
        int p3 = v[n - 2] - v[1];
        int min_v = min(p1, p2);
        int final = min(min_v, p3);
        cout << final << endl;
    }

    return 0;
}