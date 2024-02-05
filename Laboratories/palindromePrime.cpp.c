#include <iostream>
using namespace std;

int isPrime(int x);
int revValue(int x);

int main()
{
    int start;
    int limit;

    cout << "Start Range: ";
    cin >> start;
    cout << "End Range: ";
    cin >> limit;

    cout << "\nPalindome primes: ";
    for (int i = start; i <= limit; i++)
    {
        // Checking if current num is prime
        if (isPrime(i))
        {
            // Checking if reverse value of current num is prime
            if (isPrime(revValue(i)))
            {
                // Checking if reverse value of number is within the starting range
                if(revValue(i) > start)
                {
                    cout << i << ", ";
                }
            }
        }
    }
    return 0;
}

// To check if number is Prime
int isPrime(int x)
{
    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Get reverse value of num
int revValue(int x)
{
    int revValue = 0;

    while (x != 0)
    {
        revValue *= 10;
        int digit = x % 10;
        revValue += digit;
        x /= 10;
    }
    return revValue;
}
