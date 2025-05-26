// Created by MiaKim on 26/05/2025.
//Write an inline function called square() that returns the square of an integer.
//Call it in main() and print the result.
#include <iostream>
using namespace std;


inline int square(int x) {
    return x * x;
}

int main() {
    int x = 10;
    cout << square(10);


    return 0;
}