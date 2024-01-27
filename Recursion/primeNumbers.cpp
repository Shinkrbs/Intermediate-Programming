#include <iostream>
using namespace std;

void dispPrime(int x);
bool isPrime(int x, int number);

int main() {
    int x;
    cout << "Input Number: ";
    cin >> x;

    dispPrime(x);
    return 0;
}

void dispPrime(int x) {
    int number = 2;
    if (isPrime(x, number))
    {
        cout << "Is Prime";
    }
    else {
        cout << "Is Not Prime";
    }
}

 bool isPrime(int x, int number) {
    if((number < x && x % number == 0) || (x <= 1)) {
        return false;
    }
    else if(number == x) {
        return true;
    }
    return isPrime(x, number + 1);
}

