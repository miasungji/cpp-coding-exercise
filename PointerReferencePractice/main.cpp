// Created by MiaKim on 21/05/2025.
//문제1
// 정수형 변수 x = 7 이 주어졌을 때,
// 함수를 사용해서 x의 값을 x+10으로 변경해보세요

#include <iostream>
using namespace std;

//포인터 버전
void increaseByTen(int *ptr) {
    *ptr = *ptr + 10;
}
//레퍼런스 버전 x 대신 y 사용
void increaseByTenR(int &ref) {
    ref = ref + 10;
}

int main() {
    //포인터버전
    int x = 7;
    cout << "Before: " << x << endl;
    increaseByTen(&x);
    cout << "After:" << x << endl;


    //레퍼런스 버전
    int y = 7;
    cout << "Before: " << y << endl;
    increaseByTenR(y);
    cout << "After: " << y << endl;


    return 0;
}