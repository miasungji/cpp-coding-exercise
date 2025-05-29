//
// Created by MiaKim on 29/05/2025.
/*
*Write a program that defines a function isPositive(int) which returns true if a number is positive.
Then, declare a function pointer and use it to call isPositive on a sample number.
 */
#include <iostream>
using namespace std;

bool isPositive(int number) {
    return number > 0;
}



int main() {
    bool(*positive)(int);
    positive = isPositive;
    cout << "4 is " << (positive(4)? "positive" : "not positive") << endl;
    cout << "-4 is " << (positive(-2)? "positive" : "not positive") << endl;

    return 0;
}
