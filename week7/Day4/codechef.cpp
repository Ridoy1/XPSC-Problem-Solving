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
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += v[i];
        }
        if ((k + v[n - 1]) > p + sum)
        {
            cout << "Ved" << endl;
        }
        else if ((k + v[n - 1]) < p + sum)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}