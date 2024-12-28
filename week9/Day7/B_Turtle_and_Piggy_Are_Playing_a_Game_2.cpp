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
        bool Turtle = true, Piggy = false;
        while (a.size() > 1)
        {
            if (Turtle)
            {
                a.erase(a.begin());
                Turtle = false;
                Piggy = true;
            }
            else if (Piggy)
            {
                a.erase(a.end() - 1);
                Turtle = true;
                Piggy = false;
            }
        }

        cout << a[0] << endl;
    }

    return 0;
}