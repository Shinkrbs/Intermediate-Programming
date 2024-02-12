#include <iostream>
using namespace std;

bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPair (int x);
void printWaringTrio (int x);

/* Ask a positive integer input, Output is Pair if even, otherwise Trio for Odd*/
int main()
{
    int number;

    cout << "Input: ";
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "Pair: ";
        printGoldbachsPair(number);
    }

    else
    {
        cout << "Trio: ";
        printWaringTrio(number);
    }

    return 0;
}

/* Determines if integer x is a prime number, return 1 if prime 0 if
otherwise*/
bool isPrime(int x)
{
    if (x <= 1)
    {
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

/* Determines if integer x is an even greater than 4, return 1 if even 0 if
otherwise.*/
bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}

/* Prints the Goldbach's pair using the functions isPrime and isEven*/
void printGoldbachsPair (int x)
{
    if (x > 4)
    {
        for (int i = 1; i < x; i++)
        {
            for (int j = 1; j < x; j++)
            {
                if (!isEven(i) && !isEven(j)&& isPrime(i) && isPrime(j))
                {
                    if (i + j == x)
                    {
                        cout << i << "," << j;
                    }
                    break;
                }
            }
        }
    }
}

/* Prints the Waring's trio (using the functions isPrime and isEven*/
void printWaringTrio (int x)
{
    if (x > 5)
    {
        for (int i = 2; i < x; i++)
        {
            for (int j = 2; j < x; j++)
            {
                for (int k = 2; k < x; k++)
                {
                    if (isPrime(i) && isPrime(j) && isPrime(k))
                    {
                        if (i + j + k == x)
                        {
                            cout << i << ", " << j << ", " << k;
                            return;
                        }
                    }
                }
            }
        }
    }
}
