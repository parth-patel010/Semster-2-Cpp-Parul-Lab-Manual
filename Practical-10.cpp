// Practical:-10
// Write a Program to Demonstrate Friend Function and Friend Class 

/*
====EXPECTED OUTPUT=====
Parth
6353281799
Gujarat
He loves Coding
*/

#include <iostream>
using namespace std;

class Friend {
private:
    string name;
    string phone_number;
    string state;

    friend void displayDetails(Friend f);

public:
    Friend(string n, string p, string s) {
        name = n;
        phone_number = p;
        state = s;
    }

    void sentence() {
        cout << "He loves Coding" << endl;
    }
};

void displayDetails(Friend f) {
    cout << "Name: " << f.name << endl;
    cout << "Phone Number: " << f.phone_number << endl;
    cout << "State: " << f.state << endl;
}

int main() {
    Friend Friend1("Parth", "6353281799", "Gujarat");
    displayDetails(Friend1);
    Friend1.sentence();
    return 0;
}
