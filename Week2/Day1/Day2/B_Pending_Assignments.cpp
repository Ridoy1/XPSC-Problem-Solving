#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, day;
        cin >> x >> y >> z;
        int min = x * y;
        day = z * 24 * 60;
        if (day >= min)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}