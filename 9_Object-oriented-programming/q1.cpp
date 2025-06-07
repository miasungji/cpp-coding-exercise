//
// Created by MiaKim on 07/06/2025.
// 1. Book class with accessor methods

#include <iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    int price;

public:
    void setBookInfo(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }
    void printBookInfo()const {
        cout << "Title: " << title << " ,Author: " << author << " ,Price: " << price;
    }
};

int main() {
    Book b1;
    b1.setBookInfo("1984","George Orwell",15000);
    b1.printBookInfo();
    return 0;
}
