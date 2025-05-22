// Created by MiaKim on 22/05/2025.
//Q2. Swap Values Using Pointers
/* Write a function that takes two integer pointers as input and swaps the
 * values stored at those addresses.
 * The function must use pointers as parameters and use the dereference
 *operator (*) to access and swap the values.
*/

#include <iostream>
using namespace std;

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    swapByAddress(&x,&y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}