#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Calculate the current score of the team
    double team_score = X * 1 + Y * 0.5;

    // Calculate the remaining games and opponent's score
    int remaining_games = 4 - (X + Y + Z);
    double opposing_team_score = remaining_games * 1 + Y * 0.5;

    // Check if the team can still win
    if (team_score > opposing_team_score)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
