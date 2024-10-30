#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
    }
    sort(v.rbegin(), v.rend());
    long long int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        s += v[i];
    }
    cout << s << " " << total - s << endl;
    return 0;
}