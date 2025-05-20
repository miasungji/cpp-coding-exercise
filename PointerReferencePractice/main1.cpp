// Created by MiaKim on 21/05/2025.

//문제 2. Swap the number
// 두개의 정수 a,b가 있을 때, 함수 swapValues()를 만들어 두 변수의 값을 서로 바꾸세요.
//before : a=3, b=5 -> After a =5, b=3

#include <iostream>
using namespace std;

//pointer ver.

void swapValues(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapValuesR(int &n, int &m) {
    int tempR = n;
    n = m;
    m = tempR;
}


int main() {
    int a = 3;
    int b = 5;
    cout << "Before: a = " << a << ", b = " << b << endl;
    swapValues(&a,&b);
    cout << "After:  a = " << a << ", b = " << b << endl;

    int c = 3;
    int d = 4;
    cout << "Before: c = " << c << ", d = " << d << endl;
    swapValuesR(c,d);
    cout << "After:  c = " << c << ", d = " << d << endl;

    return 0;
}



