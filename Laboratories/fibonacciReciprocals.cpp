#include <iostream>
using namespace std;

bool isFib(int x);
void dispFibsInRange(int s, int e);
void dispFibsReciprocalInRange(int s, int e);
double FibsReciprocalSumInRange(int s, int e);

int main() {

    cout << "Fibonacci Numbers in Range from 1 - 10: ";
    dispFibsInRange(1, 10);
    cout << "\n" << "Fibonacci Reciprocals in Range from 1 - 10: ";
    dispFibsReciprocalInRange(1, 10);   
    cout << "\nSum of Fibonacci Reciprocal in Range from 1 - 10: " << FibsReciprocalSumInRange(1, 10);
    return 0;
}

/* determine if x is a Fibonacci Sequence or not usin iterative structure. 
Return 1 if x is Fibonacci, 0 if otherwise*/
bool isFib(int x) {
    
    int firstNum = 1;
    int secNum = 2;
    int nextNum = 0;

    while(nextNum <= x) {

        nextNum = firstNum + secNum;
        firstNum = secNum;
        secNum = nextNum;

        if (nextNum == x || x == 1 || x == 2) {
            return 1;
        } 
    }
    return 0;
}

/* Displays the list of Fibonacci numbers in range with default values 1 to
10 using isFib(int x) function.*/
void dispFibsInRange(int s, int e) {

    for(s; s <= e; s++) {
        if(isFib(s)) {
            cout << s << " ";
        }
    }
}


/* Displays the list of Fibonacci numbers reciprocal 1/fib (in decimal format
i.e. real number) in range with default values 1 to 10 using isFib(int x)
function.*/
void dispFibsReciprocalInRange(int s, int e) {

    for(s; s <= e; s++) {
        if(isFib(s)) {
            cout << "1/" << s << " ";
        }
    }
}

/* Returns the sum of Fibonacci reciprocal 1/(fib) in range with default
values 0 to 10 using isFib(int x) function*/
// Problem Solved: Used typecasting to change data type of s from integer to double.
double FibsReciprocalSumInRange(int s, int e) {

    double sum = 0;

    for (s; s <= e; s++) {
        if(isFib(s)) {
            sum += (1 / static_cast<double>(s)); 
        }
    }
    return sum;
}
//Call all functions on function main according to your preferred parameter