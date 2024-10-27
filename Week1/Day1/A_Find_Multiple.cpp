#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    for (int i = 1; i < 1000; i++)
    {
        if (c * i >= a && i * c <= b)
        {
            cout << c * i << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "-1" << endl;
    }
    return 0;
}