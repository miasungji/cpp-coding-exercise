//
// Created by MiaKim on 05/06/2025.
//
#include <iostream>
using namespace std;


//Object
//Friend: name, address, age, height, weight ...

class Friend {
    public: // access specifier (public, private, protected)
    string m_name;
    string m_address;
    int age;
    double height;
    double weight;

    void print() {
        cout << m_name << " " << m_address << " " << age << " " << height << " " << weight << endl;
    }
};



void print(const string &name, const string &address, const int &age, const double &height, const double &weight) {
    cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main() {

    Friend jj{"Jack","Uptown",2,30,10}; //instanciation, instance
    cout << &jj << endl;

    jj.print();

    vector<Friend> my_friend;
    my_friend.resize(2);

    for (auto &ele : my_friend)
        ele.print();

    //print(jj.name,jj.address,jj.age,jj.height,jj.weight);

    // vector<string> name_vec;
    // vector<string>addr_vec;
    // vector<int> age_vec;
    // vector<double> height_vec;
    // vector<double> weight_vec;

    //print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


    return 0;
}