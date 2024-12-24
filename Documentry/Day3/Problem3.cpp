// CODE :

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        // dp[i][j] stores the maximum score difference player 1 can achieve over player 2 in the range [i, j]
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: when there's only one element, the player takes it
        for (int i = 0; i < n; ++i) {
            dp[i][i] = nums[i];
        }

        // Fill the DP table for ranges larger than 1
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
            }
        }

        // If the score difference is non-negative, player 1 can win
        return dp[0][n - 1] >= 0;
    }
};

// Example usage
int main() {
    Solution solution;

    vector<int> nums = {1, 5, 2}; // Example input
    cout << (solution.PredictTheWinner(nums) ? "Player 1 can win" : "Player 2 will win") << endl;

    return 0;
}

// OUTPUT :

// Player 2 will win
