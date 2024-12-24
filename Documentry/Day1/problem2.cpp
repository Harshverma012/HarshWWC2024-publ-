// QUESTION.2- WAP to check Whether a number Prime or Not..

// Code.
#include <iostream>
using namespace std;

int main() 
{

    int n = 12;
    bool isPrime = true;

    // Input from the user
    // cout << "Enter a positive integer: ";
    // cin >> n;

    
    if (n <= 1) 
    {
        isPrime = false;
    } else 
    {
       
        for (int i = 2; i * i <= n; i++) 
    {
            if (n % i == 0) 
    {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

// OUTPUT:

     // 12 is not a prime number.


