#include <bits/stdc++.h>
using namespace std;

int reverse_move(int final_d, const string &moves)
{
    int initial_d = final_d;
    for (int i = moves.size() - 1; i >= 0; i--)
    {
        if (moves[i] == 'U')
        {
            initial_d = (initial_d - 1 + 10) % 10;
        }
        else if (moves[i] == 'D')
        {
            initial_d = (initial_d + 1) % 10;
        }
    }
    return initial_d;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> final_v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> final_v[i];
        }

        vector<int> inital_d(n);

        for (int i = 0; i < n; i++)
        {
            int b;
            string moves;
            cin >> b >> moves;

            inital_d[i] = reverse_move(final_v[i], moves);
        }
        for (int i = 0; i < n; i++)
        {
            cout << inital_d[i] << " ";
        }
        cout << endl;
    }

    return 0;
}