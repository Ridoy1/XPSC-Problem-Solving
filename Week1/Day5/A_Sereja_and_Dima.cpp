#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int left = 1, right = n, sum1 = 0, sum2 = 0;
    int i = 1;
    while (left <= right)
    {
        if (i % 2 == 1)
        {
            if (a[left] >= a[right])
            {
                sum1 += a[left++];
            }
            else
            {
                sum1 += a[right--];
            }
        }
        else
        {
            if (a[left] >= a[right])
            {
                sum2 += a[left++];
            }
            else
            {
                sum2 += a[right--];
            }
        }
        i++;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}