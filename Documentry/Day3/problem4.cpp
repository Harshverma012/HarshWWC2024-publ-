// CODE :

#include <iostream>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0; // 0-based index
        for (int i = 2; i <= n; ++i) {
            winner = (winner + k) % i;
        }
        return winner + 1; // Convert 0-based index to 1-based
    }
};

// Example usage
int main() {
    Solution solution;

    int n = 5, k = 2; // Example input
    cout << "The winner is: " << solution.findTheWinner(n, k) << endl;

    return 0;
}

// OUTPUT :

// The winner is: 3
