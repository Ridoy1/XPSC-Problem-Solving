#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int total_area = 1000;
    int t;
    cin >> t;
    while (t--)
    {
        int h, l, w;
        cin >> h >> l >> w;
        int area = 2 * (h * l + l * w + w * h);
        int max_box = total_area / area;
        cout << max_box << '\n';
    }

    return 0;
}