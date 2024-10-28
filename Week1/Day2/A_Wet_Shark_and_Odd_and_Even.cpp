#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if ((sum - a[i]) % 2 == 0)
            {
                cout << sum - a[i] << endl;
                break;
            }
        }
    }
    return 0;
}