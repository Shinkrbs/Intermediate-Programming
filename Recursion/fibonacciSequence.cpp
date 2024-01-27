#include <iostream>
using namespace std;

// Printing Fibonacci Numbers in a given range using Recursion

void dispFib();
int fibonacci(int limit, int prevNum, int currNum);

int main() {
    dispFib();
    return 0;
}

void dispFib() {
    int limit;
    int prevNum = 1;
    int currNum = 1;
    
    cout << "Input Number of Fibonacci Numbers to be Printed: ";
    cin >> limit;
    cout << prevNum << " " << currNum << " ";
    fibonacci(limit, prevNum, currNum);
}

/*int fibonacci(int limit, int prevNum, int currNum) {
    // index will end at 2 because the prevNum and currNum are already values of fibbNums
    if(limit == 2) {
        return 0;
    }

    int nextNum = prevNum + currNum;
    cout << nextNum << " ";
    return fibonacci(limit - 1, currNum, nextNum);
}*/

// Making lines cleaner and shorter as possible
// Used ternary operator
int fibonacci(int limit, int prevNum, int currNum) {
    int nextNum = prevNum + currNum;
    cout << nextNum << " ";
    return (limit > 0) ? fibonacci(limit - 1, currNum, nextNum) : 0;
}