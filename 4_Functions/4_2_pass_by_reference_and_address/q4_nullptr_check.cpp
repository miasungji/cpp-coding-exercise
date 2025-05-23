// Created by MiaKim on 22/05/2025.
/*Q4. Check for nullptr Before Accessing a Value
 * Write a function that takes a pointer to a const int as a parameter and:
 * 1. Checks if the pointer is nullptr
 * 2. If it is, print "Invalid pointer!"
 * 3. If it is not, print the value it points to
 */
#include <iostream>
using namespace std;

void safePrint(const int* ptr) {
    if (ptr == nullptr)
        cout << "Invalid pointer" << endl;
    else
        cout << "Output: " << *ptr << endl;
}

int main() {
    int a = 30;
    safePrint(&a);

    const int *p = nullptr;
    safePrint(p);

}

