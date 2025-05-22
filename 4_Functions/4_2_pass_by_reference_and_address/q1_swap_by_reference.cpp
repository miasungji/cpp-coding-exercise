// Created by MiaKim on 22/05/2025.
// Swap Values Using Reference
// Write a function that takes two integers as input and swaps their values.
// The function must use references as parameters.

#include <iostream>
using namespace std;


void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    swapByReference(x,y);
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

