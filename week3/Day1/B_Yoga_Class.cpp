#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int type1 = n / 2;
        int type2 = n % 2;
        int max = type2 * y + type1 * x;
        cout << max << endl;
    }

    return 0;
}