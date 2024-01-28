#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initArrayRandInt (int x[], int s);
bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPairInArray(int x[], int s);

int main() {

    time_t t;
    srand((unsigned)time(&t));
    int s = rand() % 10 + 1;
    int array[s] = {0};

    initArrayRandInt(array, s);
    printGoldbachsPairInArray(array, s);
    return 0;
}

// Generates Random Values for Array

void initArrayRandInt (int x[], int s) {

    for(int i = 0; i < s; i++) {
        x[i] = rand() % 51;
        cout << x[i] << " ";
    }
    cout << "\n";
}

// Checks if number is Prime or Composite

bool isPrime(int x) {

    int counter = 2;
    if(x <= 1) {
        return 0;
    }

    while(counter < x){
        if(x % counter == 0) {
            return 0;
        }
        counter++;
    }
    return 1;
}

// Checks if number is odd or even

bool isEven(int x) {
    return(x % 2 == 0) ? 1 : 0;
}

/*Explanation for printGoldbachsPariInArray Function: 
- It iterates through each element of the array x[].
- For each element that is both even and greater than 4, it tries to find two prime numbers that sum up to that element.
- It does so by checking all odd numbers less than the element (excluding even numbers) and verifies if they are prime.
- If it finds two prime numbers that sum up to the current element, it prints them and breaks out of the inner loop.*/

void printGoldbachsPairInArray(int x[], int s) {
    
    for (int i = 0; i < s; i++) {
        int sum = 0;
        if(isEven(x[i]) && x[i] > 4) {
            for(int temp = 2; temp < x[i]; temp++) {
                if(!isEven(temp) && isPrime(temp)) {
                    for(int tempTwo = 2; tempTwo < x[i]; tempTwo++) {
                        if(!isEven(tempTwo) && isPrime(tempTwo)) {
                            sum = temp + tempTwo;
                            if(sum == x[i]) {
                                cout << temp << " + " << tempTwo << " = " << sum << endl;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
}