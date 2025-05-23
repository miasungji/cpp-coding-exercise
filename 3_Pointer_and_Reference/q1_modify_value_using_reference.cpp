// Created by MiaKim on 23/05/2025.
//Q1. Modify a Value using Reference (기초)
// Write a function that takes an int by reference and multiplies it by 2.

#include <iostream>
using namespace std;

void doubleValue(int &num) {
    num *= 2;

}

int main() {
    int x =5;
    doubleValue(x);

    cout << x;
    return 0;
}