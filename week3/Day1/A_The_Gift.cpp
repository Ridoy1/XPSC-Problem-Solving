#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, m, d, y;
    cin >> x >> n >> m;
    y = x + m;
    if (y >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}