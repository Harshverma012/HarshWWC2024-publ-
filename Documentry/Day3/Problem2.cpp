// CODE : 

#include <iostream>
using namespace std;

class Solution {
public:
    int lastRemaining(int n) {
        bool leftToRight = true; // Start from left to right
        int remaining = n;       // Total numbers remaining
        int step = 1;            // Step size
        int head = 1;            // Start of the sequence

        while (remaining > 1) {
            // If moving left-to-right or the number of elements is odd
            if (leftToRight || remaining % 2 == 1) {
                head += step; // Move the head
            }
            // Update step size and remaining count
            step *= 2;
            remaining /= 2;
            leftToRight = !leftToRight; // Alternate the direction
        }

        return head; // Single number remaining
    }
};

// Example usage
int main() {
    Solution solution;

    int n = 9; // Example input
    cout << "Last remaining number: " << solution.lastRemaining(n) << endl;

    return 0;
}

// OUTPUT:

// Last remaining number: 6
