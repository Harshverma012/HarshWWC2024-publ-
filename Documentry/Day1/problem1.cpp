// QUESTION-1 : WAP on sum of Natural number Upto N.

// Code:
#include <iostream>
using namespace std;

int main() 
    {
    int  sum = 0;

    
    // cout << "Enter a positive integer: ";
    // cin >> n;

    int n = 10;
    for (int i = 1; i <= n; i++) 
    {
        sum += i; 
    }

  
    cout << "The sum of natural numbers up to " << n << " is: " << sum << endl;

    return 0;
}

// OUTPUT:

//    The sum of natural numbers up to 10 is: 55

