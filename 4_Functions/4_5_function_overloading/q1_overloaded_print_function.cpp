// Created by MiaKim on 26/05/2025.
/*
*Create two functions named print():
*One that prints a single integer.
*One that prints two integers separated by a comma.
 */

#include <iostream>
using namespace std;

void print(int &x) {
 cout << x << endl;
};
void print(int &x, int&y) {
 cout << x << " " << y << endl;
};

int main() {
int a = 10;
 int b = 20;

 print(a);
 print(a,b);

 return 0;
}