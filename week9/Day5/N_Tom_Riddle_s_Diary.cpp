#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        bool flag = false;
        for (auto name : v)
        {
            if (name == s)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
            v.push_back(s);
        }
    }

    return 0;
}