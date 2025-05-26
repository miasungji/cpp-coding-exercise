// Created by MiaKim on 26/05/2025.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}


int main() {
    cout << add(3,4) << endl;
    cout << add(2.5, 3.2) << endl;

    return 0;
}

