#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int sad = 0;
        for (int i = 0; i < m; i++)
        {
            int t = b[i] - 1;
            if (a[t] > 0)
            {
                // a[t]--;
                cout << "t " << --a[t] << endl;
            }
            else
                sad++;
        }
        cout << sad << '\n';
    }

    return 0;
}