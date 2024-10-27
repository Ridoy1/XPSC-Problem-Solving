#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    s = to_string(n);
    // cout << s.length();
    while (s.length() < 4)
    {
        s = '0' + s;
    }
    cout << s << endl;
    return 0;
}