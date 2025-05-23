// Created by MiaKim on 22/05/2025.
/*Q5. Use a const int* const Pointer (Fully Read-Only Pointer)
 * Write a function that takes a const int* const as a parameter.
 * Inside the function:
 *1. You must NOT modify the pointer (you can't make it point somewhere else)
 *2. You must NOT modify the value it points to
 *3. Simply print the value.
 */

#include <iostream>
using namespace std;

void inspectPointer(const int* const ptr) {
    cout << *ptr <<" " << ptr << endl;

}

int main() {
    int a = 100;
    inspectPointer(&a);

    return 0;
}