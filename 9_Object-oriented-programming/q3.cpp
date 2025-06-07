//
// Created by MiaKim on 07/06/2025.
// 3. Class containing another class

#include <iostream>
using namespace std;

class Engine {
public:
    Engine(){
        cout << "Engine Ready" << endl;
    }
};

class Car {
    Engine eng;
public:
    Car() {
        cout << "Car ready" << endl;
    }
};

int main() {
    Car ca;

    return 0;
}