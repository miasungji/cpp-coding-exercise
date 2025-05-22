// Created by MiaKim on 22/05/2025.
/* Q3. Use const Pointers to Print a Value
 *Write a function that takes a pointer to a const int
 *as a parameter and prints the value it points to.
 *You must not modify the value inside the function.
 *Attempting to do so should cause a compilation error.
 */

#include <iostream>
using namespace std;

void printConstValue(const int* ptr) {
    cout << "value: " << *ptr <<  endl;
}

int main() {
    int a = 100;
    printConstValue(&a);

    return 0;
}