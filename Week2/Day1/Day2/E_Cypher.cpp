#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the moves and find the initial digit
int reverse_move(int final_digit, const string &moves)
{
    int initial_digit = final_digit;
    for (int i = moves.size() - 1; i >= 0; i--)
    {
        if (moves[i] == 'U')
        {
            initial_digit = (initial_digit - 1 + 10) % 10; // Reverse 'U' by decrementing
        }
        else if (moves[i] == 'D')
        {
            initial_digit = (initial_digit + 1) % 10; // Reverse 'D' by incrementing
        }
    }
    return initial_digit;
}

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Number of wheels
        vector<int> final_digits(n);

        // Read the final sequence of digits
        for (int i = 0; i < n; i++)
        {
            cin >> final_digits[i];
        }

        vector<int> initial_digits(n);

        // For each wheel, read the moves and calculate the initial digit
        for (int i = 0; i < n; i++)
        {
            int b;
            string moves;
            cin >> b >> moves; // Number of moves (b) and the moves string

            initial_digits[i] = reverse_move(final_digits[i], moves);
        }

        // Print the result for the current test case
        for (int i = 0; i < n; i++)
        {
            cout << initial_digits[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
