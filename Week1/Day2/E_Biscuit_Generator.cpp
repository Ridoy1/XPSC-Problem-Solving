#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    t += 0.5;
    int total = (int)(t / a) * b;
    cout << total << endl;
    return 0;
}