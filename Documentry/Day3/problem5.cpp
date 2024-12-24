// CODE :

#include <iostream>
using namespace std;

class Solution {
public:
    int mod = 1e9 + 7;

    long long modExp(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int minNonZeroProduct(int p) {
        long long maxNum = (1LL << p) - 1;           // 2^p - 1
        long long secondMax = maxNum - 1;           // 2^p - 2
        long long power = (1LL << (p - 1)) - 1;     // 2^(p-1) - 1

        long long product = modExp(secondMax, power, mod); // Compute (secondMax^power) % mod
        product = (product * maxNum) % mod;               // Multiply with maxNum

        return (int)product;
    }
};

// Example usage
int main() {
    Solution solution;

    int p = 3; // Example input
    cout << "Minimum non-zero product: " << solution.minNonZeroProduct(p) << endl;

    return 0;
}


// OUTPUT :

// Minimum non-zero product: 1512
