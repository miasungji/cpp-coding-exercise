/*
*🔢 Q1. Factorial Function (기초)
* Write a recursive function that calculates the factorial of a number n.
* For example:
* factorial(0) → 1
* factorial(4) → 24
 */


#include <iostream>
using namespace std;

int factorial(int n) {
 if (n == 0) return 1;
 return n * factorial(n-1);

}


int main() {
 int num = 3;
 cout << factorial(num) << endl;


 return 0;
}