#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimes() {
    cout << "Prime numbers between 1 to 100 are: ";
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    //printPrimes();
    return 0;
}
