#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, count, st = 1;
        cin >> n;
        count = (n / 2) + (n % 2);
        long long end = 3 * n;
        cout << count << endl;
        for (long long i = 0; i < count; i++)
        {
            cout << st << " " << end << endl;
            st += 3;
            end -= 3;
        }
    }

    return 0;
}