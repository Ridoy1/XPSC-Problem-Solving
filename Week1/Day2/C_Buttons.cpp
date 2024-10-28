#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x1 = max(a, b);
    int t = x1;
    int m = min(a, b);
    x1 -= 1;
    int x2 = max(x1, m);
    cout << t + x2 << endl;
    return 0;
}