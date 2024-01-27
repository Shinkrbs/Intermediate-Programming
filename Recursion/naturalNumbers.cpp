#include <iostream>
using namespace std;

void dispNatNums();
int naturalNumbers(int x, int counter);

int main() {
    dispNatNums();
    return 0;
}

void dispNatNums() {
    int counter = 1;
    int numofNatNums;

    cout << "Input Limit to Natural Numbers Printed: ";
    cin >> numofNatNums;
    naturalNumbers(numofNatNums, counter);
}

int naturalNumbers(int x, int counter) {
    if(x > 0) {
        cout << counter << " ";
        return naturalNumbers(x - 1, counter + 1);
    }
    return 0;
}