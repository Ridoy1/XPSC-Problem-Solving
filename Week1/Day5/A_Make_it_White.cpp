#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                f = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }
        cout << l - f + 1 << endl;
    }

    return 0;
}

//  ----------sort cut--------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int f = 0, l = 0;
//         f = s.find('B');
//         l = s.rfind('B');
//         cout << l - f + 1 << endl;
//     }

//     return 0;
// }