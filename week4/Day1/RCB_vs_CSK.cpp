#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int d = r - c;
    if (d > 17)
    {
        cout << "RCB" << '\n';
    }
    else
    {
        cout << "CSK" << '\n';
    }
    return 0;
}