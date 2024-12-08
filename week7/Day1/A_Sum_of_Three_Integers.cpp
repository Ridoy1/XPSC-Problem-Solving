#include <iostream>
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;

    int c = 0, z = 0;

    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            z = S - (i + j);
            if (z >= 0 && z <= K)
                c++;
        }
    }

    cout << c << endl;

    return 0;
}
