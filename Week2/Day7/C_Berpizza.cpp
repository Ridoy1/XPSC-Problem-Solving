#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> m1;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({i, money});
            m1.insert({money, -i});
        }
        else if (type == 2)
        {
            int pos = s.begin()->first, mony = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            m1.erase({mony, pos});
        }
        else
        {
            int pos = m1.rbegin()->second, money = m1.rbegin()->first;
            ans.push_back(pos);
            m1.erase(--m1.end());
            s.erase({pos, money});
        }
    }
    return 0;
}