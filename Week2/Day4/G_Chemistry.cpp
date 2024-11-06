#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int odd_count = 0;
        for (auto &entry : freq)
        {
            if (entry.second % 2 != 0)
            {
                odd_count++;
            }
        }

        // If the number of odd frequencies can be reduced by removing k characters
        if (odd_count <= k && (n - k) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
