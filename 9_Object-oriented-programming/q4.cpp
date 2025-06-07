//
// Created by MiaKim on 07/06/2025.
// 4. Parameterized constructor with member initialization
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w){}

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle a1(5,3);
    cout << "area : " << a1.area() << endl;


    return 0;
}