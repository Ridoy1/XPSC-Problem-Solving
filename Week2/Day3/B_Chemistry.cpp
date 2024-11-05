#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        char a[10001];
        cin >> a;
        int i = y, j = x;
        int flag = 1;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                flag = 0;
            }
            i++;
            j--;
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}