#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, z;
    cin >> x >> y >> z;

    double team_score = y * 0.5 + z;
    double opponentPoint = x + y * 0.5 + 4 - (x + y + z);

    if (opponentPoint > team_score)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}