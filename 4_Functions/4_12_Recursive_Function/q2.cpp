/*
* 🔁 Q2. Fibonacci Function (중급)
Write a recursive function that returns the nth Fibonacci number.
Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, ...
For example:

fibonacci(0) → 0
fibonacci(1) → 1
fibonacci(5) → 5
fibonacci(7) → 13
힌트: fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2), and define base cases for 0 and 1.
 */

#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n ==0) return 0;
    else if(n ==1) return 1;
    else {
        Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2);
        return Fibonacci(n);
    }
}


int main() {
    int num = 10;
    cout <<Fibonacci(num) << endl;

    return 0;
}