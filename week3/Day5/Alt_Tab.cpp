#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    unordered_map<string, int> ump;
    string str = "";

    for (int i = s.size() - 1; i >= 0; i--)
    {
        string st = s[i];
        if (ump.find(st) != ump.end())
            continue;
        else
        {
            str += st[st.size() - 2];
            str += st[st.size() - 1];
            ump[st]++;
        }
    }
    cout << str << endl;

    return 0;
}