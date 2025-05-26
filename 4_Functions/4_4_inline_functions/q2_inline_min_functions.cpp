//
// Created by MiaKim on 26/05/2025.
//Write an inline function named minValue() that takes two integers and returns the smaller one.

#include <iostream>

using namespace std;

inline int minValue(int x, int y) {

    return (x<y)? x:y;
}

int main() {

    cout << minValue(3,7) << endl;
    cout << minValue(10,2) << endl;


    return 0;
}
