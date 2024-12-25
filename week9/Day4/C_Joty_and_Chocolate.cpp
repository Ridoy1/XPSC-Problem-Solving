#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return ((a * b) / __gcd(a, b));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlap = (n / lcm(a, b));
    long long ans = cnt1 + cnt2 - overlap * (p + q) + overlap * max(p, q);
    cout << ans << '\n';
    return 0;
}